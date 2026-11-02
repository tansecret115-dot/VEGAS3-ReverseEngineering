/* Module: extmondrv.dll
   Function: FUN_00402ae0
   Address: 00402ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402ae0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0044d720;
  param_1[1] = &PTR_LAB_0044d70c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if ((int *)param_1[7] != (int *)0x0) {
    FUN_00417470((int *)param_1[7]);
    param_1[7] = 0;
  }
  InterlockedDecrement((LONG *)&DAT_0045b00c);
  return;
}


