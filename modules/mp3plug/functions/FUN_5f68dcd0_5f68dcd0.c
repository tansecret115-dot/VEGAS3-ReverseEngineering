/* Module: mp3plug.dll
   Function: FUN_5f68dcd0
   Address: 5f68dcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f68dcd0(undefined4 *param_1)

{
  int *piVar1;
  BOOL BVar2;
  
  *param_1 = &PTR_FUN_5f72cb9c;
  param_1[1] = &PTR_LAB_5f72cb88;
  param_1[2] = &PTR_LAB_5f72cb64;
  param_1[3] = &PTR_LAB_5f72cb50;
  param_1[4] = &PTR_LAB_5f72cb40;
  param_1[5] = &PTR_LAB_5f72cb2c;
  if ((HWND)param_1[0xd] != (HWND)0x0) {
    BVar2 = IsWindow((HWND)param_1[0xd]);
    if (BVar2 != 0) {
      DestroyWindow((HWND)param_1[0xd]);
    }
  }
  FUN_5f68f010(param_1,param_1[9]);
  FUN_5f68f010(param_1,param_1[0xb]);
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


