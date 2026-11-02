/* Module: g2plug.dll
   Function: FUN_5f811c50
   Address: 5f811c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f811c50(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)param_1 + 0x34) == 0) {
    return 0x80004003;
  }
  iVar1 = *(int *)((int)param_1 + 0x18);
  if (iVar1 == 0x3ea) {
    FUN_5f813740(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar2 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                      (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
    return uVar2;
  }
  if (iVar1 == 0x7533) {
    FUN_5f8140d0(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar2 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                      (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
    return uVar2;
  }
  if (iVar1 != 0x7534) {
    FUN_5f812810(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar2 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                      (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
    return uVar2;
  }
  FUN_5f813ce0(param_1,*(HWND *)((int)param_1 + 0x10));
  uVar2 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                    (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
  return uVar2;
}


