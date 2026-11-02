/* Module: oggplug.dll
   Function: FUN_0043a7a0
   Address: 0043a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_0043a7a0(int param_1,int *param_2,int param_3,int param_4,undefined *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  piVar7 = (int *)&stack0xffffffbc;
  piVar1 = (int *)*param_2;
  iVar2 = *(int *)param_2[5];
  iVar3 = piVar1[2];
  iVar4 = (piVar1[1] - *piVar1) / iVar3;
  FUN_00444a80();
  if (0 < param_4) {
    iVar6 = param_4;
    do {
      iVar5 = FUN_00430ed0(param_1,((iVar4 + -1 + iVar2) / iVar2) * 4);
      *piVar7 = iVar5;
      piVar7 = piVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_c = 0;
  if (0 < param_2[3]) {
    do {
      iVar6 = 0;
      local_14 = 0;
      if (0 < iVar4) {
        local_1c = 0;
        do {
          if ((local_c == 0) && (iVar5 = 0, 0 < param_4)) {
            piVar7 = (int *)&stack0xffffffbc;
            do {
              iVar6 = FUN_004364f0(param_2[5],(int *)(param_1 + 4));
              if (iVar6 == -1) {
                return 0;
              }
              *(undefined4 *)(local_1c + *piVar7) = *(undefined4 *)(param_2[8] + iVar6 * 4);
              if (*(int *)(local_1c + *piVar7) == 0) {
                return 0;
              }
              iVar5 = iVar5 + 1;
              piVar7 = piVar7 + 1;
              iVar6 = local_14;
            } while (iVar5 < param_4);
          }
          local_30 = 0;
          if (0 < iVar2) {
            local_8 = 0;
            local_18 = iVar6 * iVar3;
            do {
              if (iVar4 <= iVar6) break;
              local_2c = 0;
              if (0 < param_4) {
                piVar7 = (int *)&stack0xffffffbc;
                do {
                  if ((((piVar1[*(int *)(local_8 + *(int *)(local_1c + *piVar7)) + 5] &
                        1 << ((byte)local_c & 0x1f)) != 0) &&
                      (iVar6 = *(int *)(*(int *)(param_2[6] +
                                                *(int *)(local_8 + *(int *)(local_1c + *piVar7)) * 4
                                                ) + local_c * 4), iVar6 != 0)) &&
                     (iVar6 = (*(code *)param_5)(iVar6,*(int *)((param_3 - (int)&stack0xffffffbc) +
                                                               (int)piVar7) +
                                                       (*piVar1 + local_18) * 4,param_1 + 4,iVar3),
                     iVar6 == -1)) {
                    return 0;
                  }
                  local_2c = local_2c + 1;
                  piVar7 = piVar7 + 1;
                  iVar6 = local_14;
                } while (local_2c < param_4);
              }
              local_8 = local_8 + 4;
              local_30 = local_30 + 1;
              local_18 = local_18 + iVar3;
              iVar6 = iVar6 + 1;
              local_14 = iVar6;
            } while (local_30 < iVar2);
          }
          local_1c = local_1c + 4;
        } while (iVar6 < iVar4);
      }
      local_c = local_c + 1;
    } while (local_c < param_2[3]);
  }
  return 0;
}


