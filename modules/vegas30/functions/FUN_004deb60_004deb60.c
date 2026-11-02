/* Module: vegas30.exe
   Function: FUN_004deb60
   Address: 004deb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004deb60(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_2[6] != 0 || param_2[7] != 0) {
      FUN_004543c0(param_1,param_2[4],param_2[5],param_2[6],param_2[7],1);
      FUN_00458370(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
      FUN_00453280(param_1,param_2[8],param_2[9],param_2[10],param_2[0xb],1);
    }
    puVar5 = (undefined4 *)(param_1 + 0xbd8);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = param_2 + 0x10;
    puVar6 = (undefined4 *)(param_1 + 0xbd8);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    bVar1 = false;
    *(undefined4 *)(param_1 + 0xc28) = param_2[0x24];
    *(undefined4 *)(param_1 + 0xc2c) = param_2[0x25];
    *(undefined4 *)(param_1 + 0xc34) = param_2[0x27];
    iVar3 = *(int *)(param_1 + 0xd94);
    bVar2 = false;
    *(undefined4 *)(param_1 + 0xc30) = 0;
    if (0 < iVar3) {
      piVar4 = (int *)(param_1 + 0xd88);
      do {
        if (*(int *)(*piVar4 + 4) == 2) {
          bVar1 = true;
        }
        else if (*(int *)(*piVar4 + 4) == 3) {
          bVar2 = true;
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = param_2[0xe];
    param_2[0xe] = 0xffffffff;
    if (iVar3 == 0) {
      if ((bVar2) && (bVar1)) {
        *(undefined4 *)(param_1 + 0xd98) = 0;
      }
    }
    else if (iVar3 == 1) {
      if (bVar2) {
        *(undefined4 *)(param_1 + 0xd98) = 1;
        FUN_004df2c0(param_1);
        return;
      }
    }
    else if ((iVar3 == 2) && (bVar1)) {
      *(undefined4 *)(param_1 + 0xd98) = 2;
      FUN_004df2c0(param_1);
      return;
    }
    FUN_004df2c0(param_1);
  }
  return;
}


