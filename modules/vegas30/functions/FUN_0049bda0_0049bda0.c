/* Module: vegas30.exe
   Function: FUN_0049bda0
   Address: 0049bda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049bda0(uint param_1,LONG *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  LONG *pLVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  tagPOINT local_1c;
  undefined4 local_14 [5];
  
  iVar4 = param_1;
  if ((*(uint *)(param_1 + 0x1c) & 0x20) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
  FUN_00454f40(param_1);
  iVar9 = *(int *)(iVar4 + 0xce0);
  puVar1 = *(undefined4 **)(iVar4 + 0xbc8);
  iVar13 = *(int *)(iVar4 + 0xcec);
  param_1 = *(uint *)(iVar4 + 0x18) >> 0x1a & 1;
  if ((param_4 == 0) && (iVar13 != 0)) {
    if (param_3 != 0) {
      param_4 = FUN_004047d0(0x7d,8);
      local_1c.x = *param_2;
      local_1c.y = param_2[1];
      ClientToScreen(*(HWND *)(iVar4 + 4),&local_1c);
      uVar2 = *(undefined4 *)(iVar4 + 4);
      puVar7 = (undefined4 *)(iVar4 + 0xce0);
      puVar12 = local_14;
      for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      iVar10 = FUN_00404830(uVar2,param_4,&local_1c,2);
      puVar7 = local_14;
      puVar12 = (undefined4 *)(iVar4 + 0xce0);
      for (iVar11 = 5; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      if (iVar10 != 0xa096) {
        if (iVar10 != 0xa097) {
          *(uint *)**(undefined4 **)(iVar4 + 0xbc8) =
               *(uint *)**(undefined4 **)(iVar4 + 0xbc8) | 0x80;
          goto LAB_0049c088;
        }
        param_1 = 1;
      }
    }
    pLVar5 = param_2;
    uVar3 = param_1;
    uVar6 = FUN_00497a40(iVar4,param_2[1]);
    if (*(int *)(iVar4 + 0xbc8) == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
    }
    param_2 = (LONG *)*puVar7;
    if (uVar6 == 0xffffffff) {
      *(uint *)**(undefined4 **)(iVar4 + 0xbc8) = *(uint *)**(undefined4 **)(iVar4 + 0xbc8) | 0x80;
    }
    else {
      if ((int)uVar6 < -1) {
        if ((*(int *)(iVar4 + 0xbc8) == 0) ||
           (iVar10 = FUN_005b87b0(*(int *)(iVar4 + 0xbc8)), iVar10 == 0)) {
          iVar10 = 0;
        }
        else {
          iVar10 = _DAT_00000000;
          if (*(int *)(iVar4 + 0xbc8) != 0) {
            piVar8 = (int *)FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
            iVar10 = *piVar8;
          }
        }
        if (*(int *)(iVar4 + 0xbc8) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
        }
        uVar6 = iVar10 + ((pLVar5[1] -
                          *(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 8) + -4 + iVar10 * 4) + 0x69c
                                           ) + 0x24)) + -1) / DAT_006477b0;
      }
      uVar6 = ((int)uVar6 < 1) - 1 & uVar6;
      if ((-1 < (int)uVar6) && ((int)uVar6 < (int)param_2)) {
        if (*(int *)(iVar4 + 0xbc8) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
        }
        if (*(int *)(*(int *)(*(int *)(iVar10 + 8) + uVar6 * 4) + 4) != *(int *)(iVar13 + 4)) {
          *(uint *)**(undefined4 **)(iVar4 + 0xbc8) =
               *(uint *)**(undefined4 **)(iVar4 + 0xbc8) | 0x80;
          goto LAB_0049c088;
        }
      }
      local_1c.y = *(LONG *)(iVar4 + 0x19c);
      uVar2 = *(undefined4 *)(iVar4 + 0x198);
      param_4 = uVar6 - iVar9;
      if (uVar3 == 0) {
        FUN_004a5900(iVar4,*(undefined4 *)(iVar4 + 0xcd8),uVar2,local_1c.y,param_4,0);
      }
      else {
        iVar9 = **(int **)(iVar4 + 0xcd8);
        if ((iVar9 != 0) &&
           (iVar13 = _SfList_CreateExZ_32(&param_2,4,iVar9 + 1,0x10,0,0,0,0), -1 < iVar13)) {
          iVar13 = 0;
          if (0 < iVar9) {
            do {
              uVar3 = *(uint *)(*(int *)(*(int *)(iVar4 + 0xcd8) + 8) + iVar13 * 4);
              if ((*(byte *)(uVar3 + 0x10) & 0x10) != 0) {
                param_1 = uVar3;
                _SfList_InsertList_16(param_2,0xffffffff,&param_1,1);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar9);
          }
          FUN_0046f700(iVar4,param_2,uVar2,local_1c.y,param_4);
          _SfList_Destroy_4(param_2);
        }
      }
      FUN_004530a0(iVar4,0);
      FUN_00456c20(iVar4);
      if (DAT_00647788 != 0) {
        iVar13 = 0;
        iVar9 = **(int **)(iVar4 + 0xcd8);
        if (0 < iVar9) {
          do {
            FUN_005cbf20(*(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(iVar4 + 0xcd8) + 8) + iVar13 * 4) + 8));
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar9);
        }
      }
    }
  }
LAB_0049c088:
  FUN_004abbe0(iVar4,*(undefined4 *)(iVar4 + 0x16c),0);
  FUN_004abac0((undefined4 *)(iVar4 + 0x16c));
  *(undefined4 *)(iVar4 + 0x16c) = 0;
  FUN_0049b100(iVar4,iVar4 + 0xcd8);
  if (*(int *)(iVar4 + 0xbc8) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
  }
  iVar9 = *piVar8;
  iVar13 = 0;
  param_2 = (LONG *)iVar9;
  if (0 < iVar9) {
    do {
      iVar10 = *(int *)(piVar8[2] + iVar13 * 4);
      if ((*(uint *)(iVar10 + 0x10) & 0x100000) != 0) {
        if (DAT_0064778c != 0) {
          FUN_0047f450(iVar10,1);
          iVar9 = (int)param_2;
        }
        *(uint *)(iVar10 + 0x10) = *(uint *)(iVar10 + 0x10) & 0xffefffff;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar9);
  }
  FUN_00455e00(iVar4);
  *(uint *)*puVar1 = *(uint *)*puVar1 | 0x100000;
  DAT_0064767c = DAT_0064767c | 0x1000;
  *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) & 0xfaffffff;
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xffffffdf;
  return;
}


