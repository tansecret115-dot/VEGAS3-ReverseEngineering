/* Module: vidpcore.dll
   Function: FUN_5dea0aa0
   Address: 5dea0aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5dea0aa0(int *param_1,BOOL **param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  BOOL *pBStack_110;
  undefined4 local_f8 [18];
  BOOL local_b0 [2];
  int local_a8 [16];
  undefined4 local_68 [2];
  int local_60 [16];
  undefined1 local_20 [3];
  uint local_1d;
  uint local_18;
  uint local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  piVar5 = (int *)param_2;
  local_10 = 0;
  pBStack_110 = (BOOL *)0x5dea0abd;
  BVar2 = IsBadReadPtr(param_2,0x28);
  if ((BVar2 != 0) || (*piVar5 != 0)) {
    return -0x7ff8ffa9;
  }
  pBStack_110 = (BOOL *)0x5dea0adb;
  BVar2 = IsBadWritePtr(param_3,4);
  if (BVar2 == 0) {
    pBStack_110 = (BOOL *)0x5dea0aeb;
    local_b0[0] = IsBadWritePtr(param_4,0x28);
    piVar1 = param_1;
    if (local_b0[0] == 0) {
      piVar3 = local_a8 + 1;
      piVar6 = piVar5 + 2;
      iVar7 = 4;
      do {
        iVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar3[-1] = iVar8;
        *piVar3 = iVar8 + 1;
        piVar3 = piVar3 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (param_4 == (int *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        piVar6 = param_4;
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        local_8 = param_4;
      }
      piVar5 = param_1 + -3;
      pBStack_110 = local_b0;
      iVar7 = (**(code **)(param_1[-3] + 0x3c))();
      if (iVar7 == -0x7fffbfff) {
        FUN_5df157d0();
        param_2 = &pBStack_110;
        FUN_5df157d0();
        local_c = (undefined1 *)&pBStack_110;
        (**(code **)(*piVar5 + 0x40))(local_b0,&local_18,param_2,&pBStack_110);
        iVar7 = 0;
        if ((piVar1[0x18] != 0) && (1 < (uint)piVar1[0x1c])) {
          iVar7 = -0x7fffbfff;
        }
        param_4 = (int *)0x0;
        if (-1 < iVar7) {
LAB_5dea0bc7:
          if (param_4 < local_18) {
            local_14 = (uint)*param_2;
            if ((((uint)piVar1[0x1c] <= local_14) ||
                (iVar8 = local_14 * 0x18, *(int *)(piVar1[0x25] + 4 + iVar8) == 0)) ||
               (local_c[(int)param_4] == '\0')) goto LAB_5dea0ce8;
            local_f8[0] = 0;
            iVar7 = (**(code **)(piVar1[-1] + 0x24))(piVar1 + -1,0,local_b0,local_14,local_f8);
            if (iVar7 < 0) goto LAB_5dea0ce8;
            piVar5 = *(int **)(iVar8 + 4 + piVar1[0x25]);
            local_68[0] = 0;
            iVar7 = (**(code **)(*piVar5 + 0x1c))(piVar5,local_68);
            if (((iVar7 < 0) || (iVar4 = FUN_5dea12d0(local_68,local_f8), iVar4 == 0)) ||
               (piVar5 = *(int **)(iVar8 + 4 + piVar1[0x25]),
               iVar7 = (**(code **)(*piVar5 + 0x28))
                                 (piVar5,local_68,piVar1[0x20],0,&DAT_5df176d0,&param_1,0),
               iVar7 < 0)) goto LAB_5dea0ce8;
            (**(code **)(*param_1 + 0x28))(param_1,local_20,1,0);
            (**(code **)(*param_1 + 8))(param_1);
            if (((uint)(byte)local_c[(int)param_4] * (local_1d & 0xff)) / 0xff == 0)
            goto LAB_5dea0ce8;
            piVar5 = local_60;
            local_8 = local_8 + 2;
            iVar8 = 4;
            do {
              iVar4 = *piVar5;
              piVar5 = piVar5 + 2;
              *local_8 = iVar4;
              local_8 = local_8 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            local_10 = 1;
            *param_3 = local_14;
          }
        }
LAB_5dea0d29:
        if (-1 < iVar7 && local_10 == 0) {
          return 1;
        }
      }
      return iVar7;
    }
  }
  return -0x7fffbffd;
LAB_5dea0ce8:
  param_4 = (int *)((int)param_4 + 1);
  param_2 = param_2 + 1;
  if (iVar7 < 0) goto LAB_5dea0d29;
  goto LAB_5dea0bc7;
}


