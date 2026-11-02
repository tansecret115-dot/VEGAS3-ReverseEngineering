/* Module: mp3plug.dll
   Function: FUN_5f695950
   Address: 5f695950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f695950(void *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x34) == 0) {
    return 0x80004003;
  }
  if (*(int *)((int)param_1 + 0x18) != 0x3f5) {
    FUN_5f696140(param_1,*(HWND *)((int)param_1 + 0x10));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                      (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
    return uVar1;
  }
  FUN_5f696ac0(param_1,*(HWND *)((int)param_1 + 0x10));
  uVar1 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                    (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
  return uVar1;
}


