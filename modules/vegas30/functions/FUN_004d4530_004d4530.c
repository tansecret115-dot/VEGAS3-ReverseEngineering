/* Module: vegas30.exe
   Function: FUN_004d4530
   Address: 004d4530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d4530(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  SHORT SVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(iVar2 + 0xbc8) == 0) || (iVar5 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8)), iVar5 == 0))
  {
    iVar5 = 0;
  }
  else {
    iVar5 = _DAT_00000000;
    if (*(int *)(iVar2 + 0xbc8) != 0) {
      piVar6 = (int *)FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
      iVar5 = *piVar6;
    }
  }
  SVar3 = GetKeyState(0x10);
  if (((SVar3 < 0) ||
      ((iVar7 = FUN_005c6340(*(undefined4 *)(iVar2 + 0xbc8)), iVar7 == 0 && (DAT_0064b000 == 0))))
     && (iVar7 = FUN_005e3b70(*(undefined4 *)(iVar2 + 0xbc8),DAT_00647624), iVar7 == 0)) {
    return -0x7fffbffc;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      param_1 = *(int *)(*(int *)(iVar4 + 8) + iVar7 * 4);
      if ((*(int *)(param_1 + 4) == 2) && ((*(byte *)(param_1 + 0x10) & 0x80) != 0)) {
        return 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  iVar4 = FUN_005ce780(&param_1,DAT_0064b138,2,0xffffffff,0);
  if (-1 < iVar4) {
    FUN_004cb540(iVar2,*(undefined4 *)(param_1 + 0x18),0,1);
    uVar1 = *(undefined4 *)(iVar2 + 0xbc8);
    FUN_004e9f70(uVar1,0xf,0);
    FUN_004ea250(uVar1,param_1,0xb,0);
    FUN_004eb2b0(uVar1);
    FUN_004ea040(uVar1,0);
    iVar4 = FUN_004d2fd0(iVar2,param_1,*(undefined4 *)(param_1 + 0x18));
    if (-1 < iVar4) {
      iVar4 = FUN_004c7de0(iVar2,param_1,1);
    }
  }
  return iVar4;
}


