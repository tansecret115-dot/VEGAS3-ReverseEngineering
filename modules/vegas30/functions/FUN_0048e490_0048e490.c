/* Module: vegas30.exe
   Function: FUN_0048e490
   Address: 0048e490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048e490(int *param_1,int param_2,uint *param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int unaff_EBP;
  uint unaff_EDI;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int unaff_retaddr;
  int local_14 [2];
  uint uStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar9 = param_5;
  iVar3 = param_2;
  iVar6 = *param_3;
  local_14[0] = iVar6;
  if (param_1 == (int *)0x301) {
    param_3 = (uint *)0x0;
    param_1 = (int *)0x0;
    iVar1 = _SfList_CreateExZ_32(&param_3,4,*(undefined4 *)(param_2 + 8),0x10,4,0,0,0);
    if (-1 < iVar1) {
      _SfList_Sort_12(param_3,0,0);
      uVar7 = *(uint *)(iVar3 + 0x2c);
      if (uVar7 < *(int *)(iVar3 + 8) + uVar7) {
        do {
          param_4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x134) + 8) + uVar7 * 4) +
                                     8) + 0x14);
          uVar2 = _SfList_FindSortedInsertIndexRange_20(param_3,&param_4,0,0xffffffff,&LAB_0048e940)
          ;
          if ((uVar2 != 0xffffffff) &&
             ((param_1 <= uVar2 || (*(int *)(param_3[1] * uVar2 + param_3[2]) != param_4)))) {
            iVar1 = _SfList_InsertList_16(param_3,uVar2,&param_4,1);
            param_1 = (int *)((int)param_1 + 1);
            if (iVar1 < 0) goto LAB_0048e662;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x2c)));
      }
      piVar9 = param_5;
      param_1 = (int *)*param_3;
      iVar1 = (**(code **)(*param_5 + 0x10))(param_5,&param_1,4,0);
      if (-1 < iVar1) {
        uVar7 = 0;
        if (param_1 != (int *)0x0) {
          do {
            iVar1 = (**(code **)(*piVar9 + 0x10))(piVar9,param_3[1] * uVar7 + param_3[2],4,0);
            if (iVar1 < 0) goto LAB_0048e662;
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_1);
        }
        _SfList_Destroy_4(param_3);
        param_3 = (uint *)0x0;
        uVar7 = *(uint *)(param_2 + 0x2c);
        if (*(int *)(param_2 + 8) + uVar7 <= uVar7) {
          return 0;
        }
        while( true ) {
          param_5 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x134) + 8) + uVar7 * 4) +
                                      8) + 0x14);
          iVar1 = (**(code **)(*piVar9 + 0x10))(piVar9,&param_5,4,0);
          if ((iVar1 < 0) || (iVar1 = FUN_005bd7b0(piVar9,1), iVar1 < 0)) break;
          uVar7 = uVar7 + 1;
          iVar6 = local_14[0];
          if ((uint)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0x2c)) <= uVar7) {
            return 0;
          }
        }
      }
    }
LAB_0048e662:
    if (param_3 != (uint *)0x0) {
      _SfList_Destroy_4(param_3);
    }
    return iVar1;
  }
  param_3 = (uint *)0x0;
  iVar3 = (**(code **)(*param_5 + 0xc))(param_5,local_14,4,0);
  if (-1 < iVar3) {
    iVar3 = _SfList_CreateExZ_32(&iStack_4,0xc,unaff_EDI,0x10,4,0,0,0);
    _SfList_Sort_12(iStack_4,0,0);
    if (-1 < iVar3) {
      puVar4 = (uint *)FUN_005b87b0(*(undefined4 *)(iVar6 + 0x130));
      uStack_c = 0;
      if (unaff_EDI != 0) {
        do {
          iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9,&stack0xffffffe4,4,0);
          if (iVar3 < 0) goto LAB_0048e894;
          uVar7 = 0;
          local_14[0] = -1;
          if (*puVar4 != 0) {
            piVar5 = (int *)puVar4[2];
            do {
              if (unaff_EBP == *(int *)(*piVar5 + 0x14)) {
                local_14[0] = *(int *)(*piVar5 + 0x18);
                break;
              }
              uVar7 = uVar7 + 1;
              piVar5 = piVar5 + 1;
            } while (uVar7 < *puVar4);
          }
          iVar3 = _SfList_InsertList_16(iStack_4,0xffffffff,&stack0xffffffe4,1);
          if (iVar3 < 0) {
            _SfList_Destroy_4(iStack_4);
            return iVar3;
          }
          uStack_c = uStack_c + 1;
        } while (uStack_c < unaff_EDI);
      }
      uVar7 = 0;
      if (unaff_EDI != 0) {
        do {
          iVar1 = *(int *)(iStack_4 + 8);
          iVar8 = *(int *)(iStack_4 + 4) * uVar7;
          if (*(int *)(iVar8 + 8 + iVar1) == -1) {
            iVar3 = FUN_005ce780(&uStack_c,*(undefined4 *)(iVar6 + 0x130),2,0xffffffff,0);
            if (iVar3 < 0) {
LAB_0048e894:
              _SfList_Destroy_4(iStack_4);
              return iVar3;
            }
            *(undefined4 *)(iVar8 + iVar1 + 8) = *(undefined4 *)(uStack_c + 0x18);
          }
          uVar7 = uVar7 + 1;
          piVar9 = param_1;
        } while (uVar7 < unaff_EDI);
      }
      uStack_c = 0;
      if (0 < *(int *)(iStack_8 + 8)) {
        do {
          iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9,&stack0xffffffe4,4,0);
          if (iVar3 < 0) {
LAB_0048e8cc:
            _SfList_Destroy_4(iStack_4);
            if (DAT_00647630 == 0) {
              return iVar3;
            }
            FUN_00469280(DAT_00647630);
            return iVar3;
          }
          iVar3 = _SfList_FindSortedInsertIndexRange_20
                            (iStack_4,&stack0xffffffe4,0,0xffffffff,&LAB_0048e960);
          iVar3 = *(int *)(*(int *)(iStack_4 + 4) * iVar3 + 8 + *(int *)(iStack_4 + 8));
          iVar1 = FUN_005b87b0(*(undefined4 *)(iVar6 + 0x130));
          iVar3 = FUN_005c0e90(piVar9,1,*(undefined4 *)(iVar6 + 0x130),
                               *(undefined4 *)(*(int *)(iVar1 + 8) + iVar3 * 4),0xffffffff,&param_1,
                               0);
          if (iVar3 < 0) goto LAB_0048e8cc;
          iVar3 = _SfList_InsertList_16
                            (*(undefined4 *)(iVar6 + 0x134),unaff_retaddr,&stack0x00000000,1);
          if (iVar3 < 0) {
            _SfList_Destroy_4(iStack_4);
            if (DAT_00647630 == 0) {
              return iVar3;
            }
            FUN_00469280(DAT_00647630);
            return iVar3;
          }
          unaff_retaddr = unaff_retaddr + 1;
          uStack_c = uStack_c + 1;
        } while ((int)uStack_c < *(int *)(iStack_8 + 8));
      }
      _SfList_Destroy_4(iStack_4);
      FUN_005bad50(piVar9);
      FUN_00469280(DAT_00647630);
      return 0;
    }
  }
  return iVar3;
}


