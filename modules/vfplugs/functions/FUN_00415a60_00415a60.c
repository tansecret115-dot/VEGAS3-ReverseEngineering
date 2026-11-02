/* Module: vfplugs.dll
   Function: FUN_00415a60
   Address: 00415a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415a60(int *param_1,BOOL **param_2,uint *param_3,int *param_4)

{
  BOOL *pBVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  BOOL **ppBVar6;
  int iVar7;
  BOOL **ppBVar8;
  int iVar9;
  BOOL *pBStack_110;
  int local_f8 [18];
  BOOL local_b0 [2];
  int local_a8 [16];
  undefined4 local_68 [2];
  int local_60 [16];
  undefined1 local_20 [3];
  uint local_1d;
  int *local_18;
  BOOL *local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  ppBVar8 = param_2;
  local_10 = 0;
  pBStack_110 = (BOOL *)0x415a7d;
  BVar2 = IsBadReadPtr(param_2,0x28);
  if ((BVar2 != 0) || (*ppBVar8 != (BOOL *)0x0)) {
    return -0x7ff8ffa9;
  }
  pBStack_110 = (BOOL *)0x415a9b;
  BVar2 = IsBadWritePtr(param_3,4);
  if (BVar2 == 0) {
    pBStack_110 = (BOOL *)0x415aab;
    local_b0[0] = IsBadWritePtr(param_4,0x28);
    piVar5 = param_1;
    if (local_b0[0] == 0) {
      piVar3 = local_a8 + 1;
      ppBVar6 = ppBVar8 + 2;
      iVar7 = 4;
      do {
        pBVar1 = *ppBVar6;
        ppBVar6 = ppBVar6 + 1;
        piVar3[-1] = (int)pBVar1;
        *piVar3 = (int)pBVar1 + 1;
        piVar3 = piVar3 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (param_4 == (int *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        piVar3 = param_4;
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar3 = (int)*ppBVar8;
          ppBVar8 = ppBVar8 + 1;
          piVar3 = piVar3 + 1;
        }
        local_8 = param_4;
      }
      piVar3 = param_1 + -3;
      pBStack_110 = local_b0;
      iVar7 = (**(code **)(param_1[-3] + 0x3c))();
      if (iVar7 == -0x7fffbfff) {
        FUN_00481790();
        param_2 = &pBStack_110;
        FUN_00481790();
        local_c = (undefined1 *)&pBStack_110;
        (**(code **)(*piVar3 + 0x40))(local_b0,&local_18,param_2,&pBStack_110);
        iVar7 = 0;
        if ((piVar5[0x18] != 0) && (1 < (uint)piVar5[0x1c])) {
          iVar7 = -0x7fffbfff;
        }
        param_4 = (int *)0x0;
        if (-1 < iVar7) {
LAB_00415b87:
          if (param_4 < local_18) {
            local_14 = *param_2;
            if ((((BOOL *)piVar5[0x1c] <= local_14) ||
                (iVar9 = (int)local_14 * 0x18, *(int *)(piVar5[0x25] + 4 + iVar9) == 0)) ||
               (*(char *)((int)param_4 + (int)local_c) == '\0')) goto LAB_00415ca8;
            local_f8[0] = 0;
            iVar7 = (**(code **)(piVar5[-1] + 0x24))(piVar5 + -1,0,local_b0,local_14,local_f8);
            if (iVar7 < 0) goto LAB_00415ca8;
            piVar3 = *(int **)(iVar9 + 4 + piVar5[0x25]);
            local_68[0] = 0;
            iVar7 = (**(code **)(*piVar3 + 0x1c))(piVar3,local_68);
            if (((iVar7 < 0) || (iVar4 = FUN_004162b0(local_68,(int)local_68,local_f8), iVar4 == 0))
               || (piVar3 = *(int **)(iVar9 + 4 + piVar5[0x25]),
                  iVar7 = (**(code **)(*piVar3 + 0x28))
                                    (piVar3,local_68,piVar5[0x20],0,&DAT_004866d0,&param_1,0),
                  iVar7 < 0)) goto LAB_00415ca8;
            (**(code **)(*param_1 + 0x28))(param_1,local_20,1,0);
            (**(code **)(*param_1 + 8))(param_1);
            if (((uint)*(byte *)((int)param_4 + (int)local_c) * (local_1d & 0xff)) / 0xff == 0)
            goto LAB_00415ca8;
            piVar5 = local_60;
            local_8 = local_8 + 2;
            iVar9 = 4;
            do {
              iVar4 = *piVar5;
              piVar5 = piVar5 + 2;
              *local_8 = iVar4;
              local_8 = local_8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            local_10 = 1;
            *param_3 = (uint)local_14;
          }
        }
LAB_00415ce9:
        if (-1 < iVar7 && local_10 == 0) {
          return 1;
        }
      }
      return iVar7;
    }
  }
  return -0x7fffbffd;
LAB_00415ca8:
  param_4 = (int *)((int)param_4 + 1);
  param_2 = param_2 + 1;
  if (iVar7 < 0) goto LAB_00415ce9;
  goto LAB_00415b87;
}


