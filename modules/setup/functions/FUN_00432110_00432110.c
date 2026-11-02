/* Module: Setup.exe
   Function: FUN_00432110
   Address: 00432110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00432110(_onexit_t param_1)

{
  if (DAT_0044f3d8 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_0044f3d8,&DAT_0044f3d4);
  return;
}


