/* Module: rmme3260.dll
   Function: FUN_66259390
   Address: 66259390
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_66259390(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0x1c);
  if (0 < LVar1) {
    return param_1[0x1c];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x78))(1);
  }
  return 0;
}


