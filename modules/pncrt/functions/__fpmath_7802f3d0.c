/* Module: pncrt.dll
   Function: __fpmath
   Address: 7802f3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 1998 Release */

void __cdecl __fpmath(int param_1)

{
  FUN_7802f400();
  _adjust_fdiv = FUN_78034400();
  __setdefaultprecision();
  return;
}


