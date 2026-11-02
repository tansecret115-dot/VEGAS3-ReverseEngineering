/* Module: vegas30.exe
   Function: FUN_00572f60
   Address: 00572f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00572f60(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_4;
  
  *param_1 = &PTR_LAB_0061b7e8;
  if ((int *)param_1[0xac] == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)param_1[0xac];
  }
  iVar3 = 0;
  if (0 < local_4) {
    do {
      iVar1 = *(int *)(*(int *)(param_1[0xac] + 8) + iVar3 * 4);
      if (*(int *)(iVar1 + 0x470) != 0) {
        _MeterInst_Deinit_4(*(int *)(iVar1 + 0x470));
        *(undefined4 *)(iVar1 + 0x470) = 0;
      }
      if (*(int *)(iVar1 + 0x340) != 0) {
        _FaderInst_Deinit_4(*(int *)(iVar1 + 0x340));
        *(undefined4 *)(iVar1 + 0x340) = 0;
      }
      if (*(int *)(iVar1 + 8) == 2) {
        if (*(int *)(iVar1 + 0x818) != 0) {
          _MeterInst_Deinit_4(*(int *)(iVar1 + 0x818));
          *(undefined4 *)(iVar1 + 0x818) = 0;
        }
        if (*(int *)(iVar1 + 0x6e8) != 0) {
          _FaderInst_Deinit_4(*(int *)(iVar1 + 0x6e8));
          *(undefined4 *)(iVar1 + 0x6e8) = 0;
        }
      }
      piVar2 = *(int **)(iVar1 + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_4);
  }
  if (param_1[0xac] != 0) {
    _SfList_DeleteList_16(param_1[0xac],0,0xffffffff,0);
    _SfList_Destroy_4(param_1[0xac]);
    param_1[0xac] = 0;
  }
  DAT_006487f0 = param_1[0x9e];
  FUN_00422550();
  FUN_00568e20();
  param_1[0x7a] = &PTR_LAB_00613acc;
  param_1[0x61] = &PTR_LAB_00613acc;
  param_1[0x48] = &PTR_LAB_00613acc;
  *param_1 = &PTR_LAB_00613acc;
  return;
}


