/* Module: vegas30.exe
   Function: FUN_004aa1a0
   Address: 004aa1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa1a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 8);
  uVar6 = 0;
  param_1 = 0;
  iVar3 = 0;
  if (0 < (int)uVar1) {
    bVar7 = uVar1 != 0;
    iVar5 = iVar2 + 0x70;
    do {
      if (((bVar7) && (iVar5 != 0)) && (uVar4 = 0, iVar3 = iVar2 + 0x70, 0 < (int)uVar6)) {
        do {
          if (((uVar4 < uVar1) && (iVar3 != 0)) &&
             (*(int *)(iVar3 + 0x10) == *(int *)(iVar5 + 0x10))) goto LAB_004aa1e8;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x68;
        } while ((int)uVar4 < (int)uVar6);
      }
      param_1 = param_1 + 1;
LAB_004aa1e8:
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x68;
      bVar7 = uVar6 < uVar1;
      iVar3 = param_1;
    } while ((int)uVar6 < (int)uVar1);
  }
  return iVar3;
}


