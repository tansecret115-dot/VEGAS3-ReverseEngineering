/* Module: vegas30.exe
   Function: FUN_005a18d0
   Address: 005a18d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005a18d0(uint *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uint *puVar11;
  undefined4 uVar12;
  int local_c;
  
  piVar3 = param_2;
  iVar4 = FUN_0057c190(*param_2,param_1,4);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 5,4);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  if ((*param_1 & 0x100) == 0) {
    puVar11 = param_1 + 2;
    uVar12 = 8;
  }
  else {
    puVar11 = param_1 + 4;
    uVar12 = 4;
  }
  iVar4 = FUN_0057c190(iVar5 + iVar4,puVar11,uVar12);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 6,8);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  if ((*param_1 & 4) != 0) {
    iVar5 = FUN_0057c190(iVar5 + iVar4,param_1 + 8,8);
    *param_2 = *param_2 + iVar5;
  }
  iVar4 = FUN_0057c190(*param_2,param_1 + 10,8);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x10,0x10);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x14,0x10);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x18,0x3f8);
  iVar5 = *param_2;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x11a,0x10);
  iVar5 = *param_2;
  puVar11 = param_1 + 0x11e;
  *param_2 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,puVar11,4);
  iVar5 = *param_2;
  param_2 = (int *)0x0;
  *piVar3 = iVar5 + iVar4;
  if (0 < (int)*puVar11) {
    local_c = 0;
    do {
      iVar7 = local_c + param_1[0x11f];
      iVar4 = FUN_0057c190(*piVar3,iVar7 + 8,0x10);
      iVar5 = *piVar3;
      piVar1 = (int *)(iVar7 + 0x18);
      *piVar3 = iVar5 + iVar4;
      iVar4 = FUN_0057c190(iVar5 + iVar4,piVar1,4);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      iVar4 = FUN_0057c190(iVar5 + iVar4,*(undefined4 *)(iVar7 + 0x1c),*piVar1);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      piVar2 = (int *)(iVar7 + 0x20);
      iVar4 = FUN_0057c190(iVar5 + iVar4,piVar2,4);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      iVar6 = FUN_0057c190(iVar5 + iVar4,*(undefined4 *)(iVar7 + 0x24),*piVar2);
      iVar6 = *piVar3 + iVar6;
      *piVar3 = iVar6;
      iVar5 = *piVar1;
      iVar4 = *piVar2;
      if (iVar5 == iVar4) {
        if (iVar5 == 0) {
          if (iVar4 != 0) goto LAB_005a1c12;
        }
        else {
          bVar10 = true;
          pcVar8 = *(char **)(iVar7 + 0x1c);
          pcVar9 = *(char **)(iVar7 + 0x24);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar10 = *pcVar8 == *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (!bVar10) {
            iVar5 = FUN_0057c190(iVar6,iVar7 + 0x28,8);
            *piVar3 = *piVar3 + iVar5;
          }
        }
      }
      else {
LAB_005a1c12:
        if (iVar4 != 0) {
          iVar5 = FUN_0057c190(iVar6,iVar7 + 0x28,8);
          *piVar3 = *piVar3 + iVar5;
        }
      }
      iVar4 = FUN_0057c190(*piVar3,iVar7 + 0x30,8);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      iVar4 = FUN_0057c190(iVar5 + iVar4,iVar7 + 0x38,4);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      if ((*(byte *)(iVar7 + 0x48) & 4) != 0) {
        iVar5 = FUN_0057c190(iVar5 + iVar4,iVar7 + 0x40,8);
        *piVar3 = *piVar3 + iVar5;
      }
      local_c = local_c + 0x50;
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < (int)*puVar11);
  }
  iVar5 = FUN_0057c190(*piVar3,param_1 + 0x120,4);
  param_2 = (int *)0x0;
  *piVar3 = *piVar3 + iVar5;
  if (0 < (int)param_1[0x120]) {
    local_c = 0;
    do {
      iVar7 = param_1[0x121] + local_c;
      iVar4 = FUN_0057c190(*piVar3,iVar7 + 8,0x10);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      piVar1 = (int *)(iVar7 + 0x18);
      iVar4 = FUN_0057c190(iVar5 + iVar4,piVar1,4);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      iVar4 = FUN_0057c190(iVar5 + iVar4,*(undefined4 *)(iVar7 + 0x1c),*piVar1);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      piVar2 = (int *)(iVar7 + 0x20);
      iVar4 = FUN_0057c190(iVar5 + iVar4,piVar2,4);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      iVar6 = FUN_0057c190(iVar5 + iVar4,*(undefined4 *)(iVar7 + 0x24),*piVar2);
      iVar6 = *piVar3 + iVar6;
      *piVar3 = iVar6;
      iVar5 = *piVar1;
      iVar4 = *piVar2;
      if (iVar5 == iVar4) {
        if (iVar5 == 0) {
          if (iVar4 != 0) goto LAB_005a1c32;
        }
        else {
          bVar10 = true;
          pcVar8 = *(char **)(iVar7 + 0x1c);
          pcVar9 = *(char **)(iVar7 + 0x24);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar10 = *pcVar8 == *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (!bVar10) {
            iVar5 = FUN_0057c190(iVar6,iVar7 + 0x28,8);
            *piVar3 = *piVar3 + iVar5;
          }
        }
      }
      else {
LAB_005a1c32:
        if (iVar4 != 0) {
          iVar5 = FUN_0057c190(iVar6,iVar7 + 0x28,8);
          *piVar3 = *piVar3 + iVar5;
        }
      }
      iVar4 = FUN_0057c190(*piVar3,iVar7 + 0x30,8);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      iVar4 = FUN_0057c190(iVar5 + iVar4,iVar7 + 0x38,4);
      iVar5 = *piVar3;
      *piVar3 = iVar5 + iVar4;
      if ((*(byte *)(iVar7 + 0x48) & 4) != 0) {
        iVar5 = FUN_0057c190(iVar5 + iVar4,iVar7 + 0x40,8);
        *piVar3 = *piVar3 + iVar5;
      }
      param_2 = (int *)((int)param_2 + 1);
      local_c = local_c + 0x50;
    } while ((int)param_2 < (int)param_1[0x120]);
  }
  iVar4 = FUN_0057c190(*piVar3,param_1 + 0x122,8);
  iVar5 = *piVar3;
  *piVar3 = iVar5 + iVar4;
  iVar4 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x124,0x40);
  iVar5 = *piVar3;
  *piVar3 = iVar5 + iVar4;
  iVar5 = FUN_0057c190(iVar5 + iVar4,param_1 + 0x135,4);
  *piVar3 = *piVar3 + iVar5;
  return;
}


