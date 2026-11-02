/* Module: extmondrv.dll
   Function: FUN_0040a5a0
   Address: 0040a5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a5a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x116];
  *param_1 = &PTR_FUN_0044e908;
  param_1[2] = &PTR_LAB_0044e8fc;
  param_1[4] = &PTR_LAB_0044e8b0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x116] = 0;
  }
  FUN_0040a970((int)(param_1 + 4));
  InterlockedDecrement((LONG *)&DAT_0045b00c);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_00401540(param_1);
  return;
}


