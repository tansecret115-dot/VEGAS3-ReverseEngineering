/* Module: rmme3260.dll
   Function: FUN_6625c740
   Address: 6625c740
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_6625c740(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x32));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x32);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x78))(1);
  }
  return 0;
}


