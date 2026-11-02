/* Module: rmme3260.dll
   Function: FUN_662133c0
   Address: 662133c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662133c0(int *param_1)

{
  if (*(int *)((int)param_1 + 0x38a) != 0) {
    return 0x80040009;
  }
  FUN_662133e0(param_1);
  return 0;
}


