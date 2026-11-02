/* Module: aviplug.dll
   Function: FUN_5f935490
   Address: 5f935490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f935490(undefined4 *param_1)

{
  int *piVar1;
  BOOL BVar2;
  
  *param_1 = &PTR_FUN_5f9d7ad4;
  param_1[1] = &PTR_LAB_5f9d7ab0;
  param_1[2] = &PTR_LAB_5f9d7a9c;
  param_1[3] = &PTR_LAB_5f9d7a88;
  param_1[4] = &PTR_LAB_5f9d7a74;
  param_1[5] = &PTR_LAB_5f9d7a64;
  if ((HWND)param_1[0xc] != (HWND)0x0) {
    BVar2 = IsWindow((HWND)param_1[0xc]);
    if (BVar2 != 0) {
      DestroyWindow((HWND)param_1[0xc]);
    }
  }
  FUN_5f936cb0(param_1,param_1[9]);
  FUN_5f936cb0(param_1,param_1[0xb]);
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[7] != 0) {
    WaitForSingleObject(DAT_5f9f410c,0xffffffff);
    DAT_5f9f4138 = 0;
    ReleaseMutex(DAT_5f9f410c);
    (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7]);
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


