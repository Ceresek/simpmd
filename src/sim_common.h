/*

SIM_COMMON.H

Copyright 2008 Petr Tuma

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/


//--------------------------------------------------------------------------
// Types

typedef unsigned int    uint;
typedef unsigned long   ulong;

typedef unsigned char   byte;
typedef unsigned short  word;

//--------------------------------------------------------------------------
// Globals

extern byte MemData [65536];
extern bool MemMask [65536];

//--------------------------------------------------------------------------
// Externals

int CPUThread (void *);
void CPUInitialize ();
void CPUShutdown ();

void DSPPaint ();
void DSPInitialize ();
void DSPShutdown ();

byte KBDReadRow ();
void KBDWriteColumn (byte iData);
void KBDEventHandler (const SDL_KeyboardEvent *);
void KBDInitialize ();
void KBDShutdown ();

void TIMSynchronize (int);
void TIMAdvance (int);
void TIMInitialize ();
void TIMShutdown ();

//--------------------------------------------------------------------------

