Summary: PMD 85 computer family simulator with games
Name: simpmd
Version: __VERSION__
Release: 0
License: ASL 2.0
Group: Applications/Emulators
URL: http://dsrg.mff.cuni.cz/~ceres/prj/SimPMD

BuildRequires: SDL-devel
BuildRequires: popt-devel
Requires: SDL
Requires: popt

Source: simpmd-%{version}-%{release}.tar.bz2
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}

%description
__DESCRIPTION__

%prep
%setup

%build
make RELEASE=ESAELER bin

%install
cp bin/simpmd %{buildroot}/usr/bin/simpmd
mkdir -p %{buildroot}/usr/share/simpmd
cp -r data %{buildroot}/usr/share/simpmd
ln -s $(readlink bin/M1 | sed "s/\.\.\/data//g") %{buildroot}/usr/share/simpmd/M1
ln -s $(readlink bin/M2 | sed "s/\.\.\/data//g") %{buildroot}/usr/share/simpmd/M2

%files
%doc FAQ
%doc ABOUT
%doc README
%doc COPYING
%doc CREDITS
%doc INSTALL
/usr/bin/simpmd
/usr/share/simpmd

%clean
rm -rf %{buildroot}

