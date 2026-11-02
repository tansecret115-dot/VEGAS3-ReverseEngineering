/* Module: aviplug.dll
   Function: FUN_5f937160
   Address: 5f937160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f937160(int *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = (int)&PTR_FUN_5f9d7bc4;
  param_1[1] = (int)&PTR_LAB_5f9d7bb4;
  param_1[2] = (int)&PTR_LAB_5f9d7ba4;
  FUN_5f937330(param_1);
  if ((LPCVOID)param_1[0x49] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x49]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x49]);
    GlobalFree(pvVar1);
    param_1[0x49] = 0;
  }
  if ((LPCVOID)param_1[0x4c] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x4c]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x4c]);
    GlobalFree(pvVar1);
    param_1[0x4c] = 0;
  }
  if (param_1[0x61] != 0) {
    FUN_5f936cb0((void *)param_1[3],param_1[0x61]);
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


