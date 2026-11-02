/* Module: oggplug.dll
   Function: FUN_00435f60
   Address: 00435f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00435f60(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar3 = param_2;
  FUN_00441e10(param_2,0x564342,0x18);
  FUN_00441e10(param_2,*param_1,0x10);
  FUN_00441e10(param_2,param_1[1],0x18);
  uVar1 = param_1[1];
  uVar5 = 1;
  if (1 < (int)uVar1) {
    piVar6 = (int *)param_1[2];
    do {
      if ((*piVar6 == 0) || (piVar6[1] < *piVar6)) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while ((int)uVar5 < (int)uVar1);
  }
  if (uVar5 == uVar1) {
    iVar8 = 0;
    FUN_00441e10(param_2,1,1);
    FUN_00441e10(param_2,*(int *)param_1[2] - 1,5);
    iVar7 = 1;
    if (1 < (int)param_1[1]) {
      do {
        iVar4 = *(int *)(param_1[2] + iVar7 * 4);
        iVar2 = *(int *)(param_1[2] + iVar7 * 4 + -4);
        if (iVar2 < iVar4) {
          param_2 = (int *)(iVar4 - iVar2);
          do {
            iVar4 = FUN_00435290(param_1[1] - iVar8);
            FUN_00441e10(piVar3,iVar7 - iVar8,iVar4);
            param_2 = (int *)((int)param_2 + -1);
            iVar8 = iVar7;
          } while (param_2 != (int *)0x0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_1[1]);
    }
    iVar4 = FUN_00435290(param_1[1] - iVar8);
    FUN_00441e10(piVar3,iVar7 - iVar8,iVar4);
  }
  else {
    FUN_00441e10(param_2,0,1);
    uVar1 = param_1[1];
    uVar5 = 0;
    if (0 < (int)uVar1) {
      piVar6 = (int *)param_1[2];
      do {
        if (*piVar6 == 0) break;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    if (uVar5 == uVar1) {
      FUN_00441e10(param_2,0,1);
      iVar8 = 0;
      if (0 < (int)param_1[1]) {
        do {
          FUN_00441e10(param_2,*(int *)(param_1[2] + iVar8 * 4) - 1,5);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)param_1[1]);
      }
    }
    else {
      FUN_00441e10(param_2,1,1);
      iVar8 = 0;
      if (0 < (int)param_1[1]) {
        do {
          if (*(int *)(param_1[2] + iVar8 * 4) == 0) {
            FUN_00441e10(param_2,0,1);
          }
          else {
            FUN_00441e10(param_2,1,1);
            FUN_00441e10(param_2,*(int *)(param_1[2] + iVar8 * 4) - 1,5);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)param_1[1]);
      }
    }
  }
  FUN_00441e10(piVar3,param_1[3],4);
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    if ((((int)uVar1 < 1) || (2 < (int)uVar1)) || (param_1[8] == 0)) {
      return 0xffffffff;
    }
    FUN_00441e10(piVar3,param_1[4],0x20);
    FUN_00441e10(piVar3,param_1[5],0x20);
    FUN_00441e10(piVar3,param_1[6] - 1,4);
    FUN_00441e10(piVar3,param_1[7],1);
    if (param_1[3] == 1) {
      iVar8 = FUN_004356b0((int *)param_1);
    }
    else if (param_1[3] == 2) {
      iVar8 = param_1[1] * *param_1;
    }
    else {
      iVar8 = -1;
    }
    iVar7 = 0;
    if (0 < iVar8) {
      do {
        uVar1 = *(uint *)(param_1[8] + iVar7 * 4);
        uVar5 = (int)uVar1 >> 0x1f;
        FUN_00441e10(piVar3,(uVar1 ^ uVar5) - uVar5,param_1[6]);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
    }
  }
  return 0;
}


