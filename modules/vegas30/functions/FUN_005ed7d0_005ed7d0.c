/* Module: vegas30.exe
   Function: FUN_005ed7d0
   Address: 005ed7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005ed7d0(char *param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  HGLOBAL pvVar10;
  int *piVar11;
  
  if (*param_1 == '\0') {
    return 0x80004005;
  }
  piVar11 = (int *)*param_2;
  if (piVar11 == (int *)0x0) {
    return 0x80004005;
  }
  if ((*(byte *)(piVar11 + 6) & 2) == 2) {
    return 0x80004005;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = piVar11[1];
    param_3[1] = piVar11[2];
  }
  piVar5 = piVar11;
  if (((*(byte *)(piVar11[4] + 0x18) & 2) != 2) && ((*(byte *)(piVar11[5] + 0x18) & 2) != 2)) {
    uVar2 = *param_2;
    if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0x18) & 2) != 2)) {
      uVar2 = *(uint *)(uVar2 + 0x14);
      if ((*(byte *)(uVar2 + 0x18) & 2) == 2) {
        do {
          uVar2 = *param_2;
          uVar3 = *(uint *)(uVar2 + 0xc);
          *param_2 = uVar3;
          if (*(uint *)(uVar3 + 0x10) == uVar2) goto LAB_005ed895;
        } while ((*(byte *)(uVar3 + 0x18) & 2) != 2);
        piVar5 = (int *)*param_2;
        goto LAB_005ed8a3;
      }
      *param_2 = uVar2;
      bVar1 = *(byte *)(*(int *)(uVar2 + 0x10) + 0x18);
      while ((bVar1 & 2) != 2) {
        uVar2 = *(uint *)(*param_2 + 0x10);
        *param_2 = uVar2;
        bVar1 = *(byte *)(*(int *)(uVar2 + 0x10) + 0x18);
      }
    }
LAB_005ed895:
    piVar5 = (int *)*param_2;
  }
LAB_005ed8a3:
  param_2 = (uint *)piVar5;
  iVar9 = param_2[4];
  if ((*(byte *)(iVar9 + 0x18) & 2) == 2) {
    iVar9 = param_2[5];
  }
  *(uint *)(iVar9 + 0xc) = param_2[3];
  iVar8 = param_2[3];
  if ((*(byte *)(iVar8 + 0x18) & 2) == 2) {
    *(int *)(param_1 + 8) = iVar9;
  }
  else if (param_2 == (uint *)*(int **)(iVar8 + 0x10)) {
    *(int *)(iVar8 + 0x10) = iVar9;
  }
  else {
    *(int *)(iVar8 + 0x14) = iVar9;
  }
  if (param_2 != (uint *)piVar11) {
    *piVar11 = *param_2;
    piVar11[1] = param_2[1];
    piVar11[2] = param_2[2];
  }
  if ((*(byte *)(param_2 + 6) & 1) == 1) {
    if (*(int *)(param_1 + 8) != iVar9) {
      do {
        if ((*(byte *)(iVar9 + 0x18) & 1) != 1) break;
        iVar8 = *(int *)(iVar9 + 0xc);
        iVar7 = *(int *)(iVar8 + 0x10);
        if (iVar9 == iVar7) {
          iVar7 = *(int *)(iVar8 + 0x14);
          if ((~*(byte *)(iVar7 + 0x18) & 1) == 1) {
            *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) & 0xfe ^ 1;
            *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) = *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) & 0xfe
            ;
            FUN_005edc40(*(undefined4 *)(iVar9 + 0xc));
            iVar8 = *(int *)(iVar9 + 0xc);
            iVar7 = *(int *)(iVar8 + 0x14);
          }
          iVar4 = *(int *)(iVar7 + 0x10);
          if (((*(byte *)(iVar4 + 0x18) & 1) == 1) &&
             ((*(byte *)(*(int *)(iVar7 + 0x14) + 0x18) & 1) == 1)) {
            *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) & 0xfe;
            iVar9 = *(int *)(iVar9 + 0xc);
          }
          else {
            if ((*(byte *)(*(int *)(iVar7 + 0x14) + 0x18) & 1) == 1) {
              *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xfe ^ 1;
              *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) & 0xfe;
              FUN_005edc90(iVar7);
              iVar8 = *(int *)(iVar9 + 0xc);
              iVar7 = *(int *)(iVar8 + 0x14);
            }
            *(byte *)(iVar7 + 0x18) =
                 (*(byte *)(iVar8 + 0x18) ^ *(byte *)(iVar7 + 0x18)) & 1 ^ *(byte *)(iVar7 + 0x18);
            *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) =
                 *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) & 0xfe ^ 1;
            *(byte *)(*(int *)(iVar7 + 0x14) + 0x18) =
                 *(byte *)(*(int *)(iVar7 + 0x14) + 0x18) & 0xfe ^ 1;
            FUN_005edc40(*(undefined4 *)(iVar9 + 0xc));
            iVar9 = *(int *)(param_1 + 8);
          }
        }
        else {
          if ((~*(byte *)(iVar7 + 0x18) & 1) == 1) {
            *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) & 0xfe ^ 1;
            *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) = *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) & 0xfe
            ;
            FUN_005edc90(*(undefined4 *)(iVar9 + 0xc));
            iVar8 = *(int *)(iVar9 + 0xc);
            iVar7 = *(int *)(iVar8 + 0x10);
          }
          iVar4 = *(int *)(iVar7 + 0x14);
          if (((*(byte *)(iVar4 + 0x18) & 1) == 1) &&
             ((*(byte *)(*(int *)(iVar7 + 0x10) + 0x18) & 1) == 1)) {
            *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) & 0xfe;
            iVar9 = *(int *)(iVar9 + 0xc);
          }
          else {
            if ((*(byte *)(*(int *)(iVar7 + 0x10) + 0x18) & 1) == 1) {
              *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xfe ^ 1;
              *(byte *)(iVar7 + 0x18) = *(byte *)(iVar7 + 0x18) & 0xfe;
              FUN_005edc40(iVar7);
              iVar8 = *(int *)(iVar9 + 0xc);
              iVar7 = *(int *)(iVar8 + 0x10);
            }
            *(byte *)(iVar7 + 0x18) =
                 (*(byte *)(iVar8 + 0x18) ^ *(byte *)(iVar7 + 0x18)) & 1 ^ *(byte *)(iVar7 + 0x18);
            *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) =
                 *(byte *)(*(int *)(iVar9 + 0xc) + 0x18) & 0xfe ^ 1;
            *(byte *)(*(int *)(iVar7 + 0x10) + 0x18) =
                 *(byte *)(*(int *)(iVar7 + 0x10) + 0x18) & 0xfe ^ 1;
            FUN_005edc90(*(undefined4 *)(iVar9 + 0xc));
            iVar9 = *(int *)(param_1 + 8);
          }
        }
      } while (*(int *)(param_1 + 8) != iVar9);
    }
    *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe ^ 1;
  }
  if (param_2 != (uint *)piVar11) {
    *(byte *)(param_2 + 6) =
         (*(byte *)(piVar11 + 6) ^ *(byte *)(param_2 + 6)) & 1 ^ *(byte *)(param_2 + 6);
    iVar9 = piVar11[3];
    if (*(int **)(iVar9 + 0x10) == piVar11) {
      *(uint **)(iVar9 + 0x10) = param_2;
    }
    else if (*(int **)(iVar9 + 0x14) == piVar11) {
      *(uint **)(iVar9 + 0x14) = param_2;
    }
    param_2[3] = piVar11[3];
    if (*(int **)(piVar11[4] + 0xc) == piVar11) {
      *(uint **)(piVar11[4] + 0xc) = param_2;
    }
    param_2[4] = piVar11[4];
    if (*(int **)(piVar11[5] + 0xc) == piVar11) {
      *(uint **)(piVar11[5] + 0xc) = param_2;
    }
    param_2[5] = piVar11[5];
    if (*(int **)(*(int *)(param_1 + 0xc) + 0xc) == piVar11) {
      *(uint **)(*(int *)(param_1 + 0xc) + 0xc) = param_2;
    }
    if (*(int **)(*(int *)(param_1 + 0xc) + 0x10) == piVar11) {
      *(uint **)(*(int *)(param_1 + 0xc) + 0x10) = param_2;
    }
    if (*(int **)(*(int *)(param_1 + 0xc) + 0x14) == piVar11) {
      *(uint **)(*(int *)(param_1 + 0xc) + 0x14) = param_2;
    }
    if (*(int **)(param_1 + 8) == piVar11) {
      *(uint **)(param_1 + 8) = param_2;
    }
  }
  piVar11[3] = 0;
  piVar11[4] = 0;
  piVar11[5] = 0;
  for (piVar5 = *(int **)(param_1 + 0x10);
      (piVar5 != (int *)0x0 && ((piVar11 < piVar5 + 5 || (piVar5 + 0x37e < piVar11))));
      piVar5 = (int *)*piVar5) {
  }
  iVar9 = ((int)piVar11 + (-0x14 - (int)piVar5)) / 0x1c;
  iVar8 = (int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5;
  piVar5[iVar8 + 1] = piVar5[iVar8 + 1] & ~(1 << ((byte)iVar9 & 0x1f));
  *(int **)(param_1 + 0x14) = piVar5;
  iVar9 = 0;
  piVar11 = piVar5;
  do {
    piVar11 = piVar11 + 1;
    if (*piVar11 != 0) goto LAB_005edc21;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  piVar11 = *(int **)(param_1 + 0x10);
  if (piVar5 == piVar11) {
    *(int *)(param_1 + 0x10) = *piVar5;
  }
  else {
    for (piVar6 = (int *)*piVar11; piVar6 != piVar5; piVar6 = (int *)*piVar6) {
      piVar11 = piVar6;
    }
    *piVar11 = *piVar5;
  }
  if (*(int **)(param_1 + 0x14) == piVar5) {
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  pvVar10 = GlobalHandle(piVar5);
  GlobalUnlock(pvVar10);
  pvVar10 = GlobalHandle(piVar5);
  GlobalFree(pvVar10);
LAB_005edc21:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return 0;
}


