/* Module: vegas30.exe
   Function: FUN_0052b9d0
   Address: 0052b9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052b9d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 1;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x10) & 0x10) == 0)) {
    iVar6 = FUN_0047c7d0(param_2 + 0x638,param_3);
    if (iVar6 != 0) {
      return 1;
    }
    FUN_004e9f70(param_1,0x4a,0);
    if (*(int *)(param_2 + 4) == 2) {
      uVar7 = 0x1e;
    }
    else {
      if (*(int *)(param_2 + 4) != 3) goto LAB_0052ba29;
      uVar7 = 0xf;
    }
    FUN_004ea250(param_1,param_2,uVar7,0);
LAB_0052ba29:
    iVar6 = FUN_0052bb10(param_1,param_2,param_3);
    if (-1 < iVar6) {
      FUN_004eb2b0(param_1);
    }
    FUN_004ea040(param_1,0);
    return iVar6;
  }
  piVar3 = (int *)FUN_005b87b0(param_1);
  if ((piVar3 == (int *)0x0) || (iVar1 = *piVar3, iVar1 < 1)) {
    return 1;
  }
  FUN_004e9f70(param_1,0x4b,0);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar3[2] + iVar5 * 4);
      if (((*(byte *)(iVar2 + 0x10) & 0x10) != 0) &&
         (iVar4 = FUN_0047c7d0(iVar2 + 0x638,param_3), iVar4 == 0)) {
        if (*(int *)(iVar2 + 4) == 2) {
          uVar7 = 0x1e;
LAB_0052bac8:
          FUN_004ea250(param_1,iVar2,uVar7,0);
        }
        else if (*(int *)(iVar2 + 4) == 3) {
          uVar7 = 0xf;
          goto LAB_0052bac8;
        }
        iVar6 = FUN_0052bb10(param_1,iVar2,param_3);
        if (iVar6 < 0) goto LAB_0052baf4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    if (iVar6 < 0) goto LAB_0052baf4;
  }
  FUN_004eb2b0(param_1);
LAB_0052baf4:
  FUN_004ea040(param_1,0);
  return iVar6;
}


