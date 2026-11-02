/* Module: vegas30.exe
   Function: FUN_005a1360
   Address: 005a1360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005a1360(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int local_10;
  int local_c;
  int *local_8;
  int *local_4;
  
  piVar2 = param_2;
  iVar3 = FUN_0057c190(*param_2,param_1,4);
  iVar4 = *param_2;
  piVar1 = (int *)(param_1 + 8);
  *param_2 = iVar4 + iVar3;
  iVar4 = FUN_0057c190(iVar4 + iVar3,piVar1,4);
  iVar3 = 0;
  *param_2 = *param_2 + iVar4;
  if (0 < *piVar1) {
    do {
      FUN_005a18d0(param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  piVar1 = (int *)(param_1 + 0x9c0);
  iVar4 = FUN_0057c190(*param_2,piVar1,4);
  local_c = 0;
  *param_2 = *param_2 + iVar4;
  if (0 < *piVar1) {
    do {
      FUN_005a18d0(param_2);
      local_c = local_c + 1;
    } while (local_c < *piVar1);
  }
  iVar4 = FUN_0057c190(*param_2,param_1 + 0x1378,4);
  *param_2 = *param_2 + iVar4;
  if (*(int *)(param_1 + 0x137c) != 0) {
    FUN_005a1270(param_2);
  }
  piVar1 = (int *)(param_1 + 5000);
  local_4 = piVar1;
  iVar3 = FUN_0057c190(*param_2,piVar1,4);
  iVar4 = *param_2;
  param_2 = (int *)0x0;
  *piVar2 = iVar4 + iVar3;
  if (0 < *piVar1) {
    local_c = 0;
    do {
      iVar6 = local_c + *(int *)(param_1 + 0x138c);
      iVar3 = FUN_0057c190(*piVar2,iVar6 + 8,0x10);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      piVar1 = (int *)(iVar6 + 0x18);
      iVar3 = FUN_0057c190(iVar4 + iVar3,piVar1,4);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      iVar3 = FUN_0057c190(iVar4 + iVar3,*(undefined4 *)(iVar6 + 0x1c),*piVar1);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      local_8 = (int *)(iVar6 + 0x20);
      iVar3 = FUN_0057c190(iVar4 + iVar3,local_8,4);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      iVar5 = FUN_0057c190(iVar4 + iVar3,*(undefined4 *)(iVar6 + 0x24),*local_8);
      iVar5 = *piVar2 + iVar5;
      *piVar2 = iVar5;
      iVar4 = *piVar1;
      iVar3 = *local_8;
      if (iVar4 == iVar3) {
        if (iVar4 == 0) {
          if (iVar3 != 0) goto LAB_005a16d9;
        }
        else {
          bVar9 = true;
          pcVar7 = *(char **)(iVar6 + 0x1c);
          pcVar8 = *(char **)(iVar6 + 0x24);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar9 = *pcVar7 == *pcVar8;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if (!bVar9) {
            iVar4 = FUN_0057c190(iVar5,iVar6 + 0x28,8);
            *piVar2 = *piVar2 + iVar4;
          }
        }
      }
      else {
LAB_005a16d9:
        if (iVar3 != 0) {
          iVar4 = FUN_0057c190(iVar5,iVar6 + 0x28,8);
          *piVar2 = *piVar2 + iVar4;
        }
      }
      iVar3 = FUN_0057c190(*piVar2,iVar6 + 0x30,8);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      iVar3 = FUN_0057c190(iVar4 + iVar3,iVar6 + 0x38,4);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      if ((*(byte *)(iVar6 + 0x48) & 4) != 0) {
        iVar4 = FUN_0057c190(iVar4 + iVar3,iVar6 + 0x40,8);
        *piVar2 = *piVar2 + iVar4;
      }
      local_c = local_c + 0x50;
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < *local_4);
  }
  iVar3 = FUN_0057c190(*piVar2,param_1 + 0x1390,4);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar3 = FUN_0057c190(iVar4 + iVar3,param_1 + 0x1394,4);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar3 = FUN_0057c190(iVar4 + iVar3,param_1 + 0x1398,0x10);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar4 = FUN_0057c190(iVar4 + iVar3,(int *)(param_1 + 0x13a8),4);
  param_2 = (int *)0x0;
  *piVar2 = *piVar2 + iVar4;
  if (0 < *(int *)(param_1 + 0x13a8)) {
    local_c = 0;
    do {
      iVar6 = local_c + *(int *)(param_1 + 0x13ac);
      iVar3 = FUN_0057c190(*piVar2,iVar6 + 8,0x10);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      piVar1 = (int *)(iVar6 + 0x18);
      iVar3 = FUN_0057c190(iVar4 + iVar3,piVar1,4);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      iVar3 = FUN_0057c190(iVar4 + iVar3,*(undefined4 *)(iVar6 + 0x1c),*piVar1);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      local_8 = (int *)(iVar6 + 0x20);
      iVar3 = FUN_0057c190(iVar4 + iVar3,local_8,4);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      iVar5 = FUN_0057c190(iVar4 + iVar3,*(undefined4 *)(iVar6 + 0x24),*local_8);
      iVar5 = *piVar2 + iVar5;
      *piVar2 = iVar5;
      iVar4 = *piVar1;
      iVar3 = *local_8;
      if (iVar4 == iVar3) {
        if (iVar4 == 0) {
          if (iVar3 != 0) goto LAB_005a16f9;
        }
        else {
          bVar9 = true;
          pcVar7 = *(char **)(iVar6 + 0x1c);
          pcVar8 = *(char **)(iVar6 + 0x24);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar9 = *pcVar7 == *pcVar8;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if (!bVar9) {
            iVar4 = FUN_0057c190(iVar5,iVar6 + 0x28,8);
            *piVar2 = *piVar2 + iVar4;
          }
        }
      }
      else {
LAB_005a16f9:
        if (iVar3 != 0) {
          iVar4 = FUN_0057c190(iVar5,iVar6 + 0x28,8);
          *piVar2 = *piVar2 + iVar4;
        }
      }
      iVar3 = FUN_0057c190(*piVar2,iVar6 + 0x30,8);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      iVar3 = FUN_0057c190(iVar4 + iVar3,iVar6 + 0x38,4);
      iVar4 = *piVar2;
      *piVar2 = iVar4 + iVar3;
      if ((*(byte *)(iVar6 + 0x48) & 4) != 0) {
        iVar4 = FUN_0057c190(iVar4 + iVar3,iVar6 + 0x40,8);
        *piVar2 = *piVar2 + iVar4;
      }
      param_2 = (int *)((int)param_2 + 1);
      local_c = local_c + 0x50;
    } while ((int)param_2 < *(int *)(param_1 + 0x13a8));
  }
  iVar5 = 0;
  iVar3 = FUN_0057c190(*piVar2,param_1 + 0x13b0,4);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar3 = FUN_0057c190(iVar4 + iVar3,param_1 + 0x13b4,0x10);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar3 = FUN_0057c190(iVar4 + iVar3,param_1 + 0x13c4,0x10);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  iVar3 = FUN_0057c190(iVar4 + iVar3,param_1 + 0x13d4,0x5c);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + iVar3;
  if (*(int **)(param_1 + 0x1440) == (int *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = **(int **)(param_1 + 0x1440);
  }
  iVar4 = FUN_0057c190(iVar4 + iVar3,&local_10,4);
  *piVar2 = *piVar2 + iVar4;
  if (0 < local_10) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1440) + 8) + iVar5 * 4);
      iVar6 = FUN_0057c190(*piVar2,iVar4,0x5c);
      iVar3 = *piVar2;
      *piVar2 = iVar3 + iVar6;
      iVar6 = FUN_0057c190(iVar3 + iVar6,iVar4 + 0x5c,4);
      iVar3 = *piVar2;
      *piVar2 = iVar3 + iVar6;
      iVar6 = FUN_0057c190(iVar3 + iVar6,iVar4 + 0x60,4);
      iVar3 = *piVar2;
      *piVar2 = iVar3 + iVar6;
      iVar6 = FUN_0057c190(iVar3 + iVar6,iVar4 + 100,4);
      iVar3 = *piVar2;
      *piVar2 = iVar3 + iVar6;
      iVar4 = FUN_0057c190(iVar3 + iVar6,(undefined4 *)(iVar4 + 0x68),*(undefined4 *)(iVar4 + 0x68))
      ;
      iVar5 = iVar5 + 1;
      *piVar2 = *piVar2 + iVar4;
    } while (iVar5 < local_10);
  }
  iVar4 = FUN_0057c190(*piVar2,param_1 + 0x1444,8);
  *piVar2 = *piVar2 + iVar4;
  return;
}


