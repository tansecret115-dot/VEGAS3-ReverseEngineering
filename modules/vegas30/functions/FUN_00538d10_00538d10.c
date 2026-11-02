/* Module: vegas30.exe
   Function: FUN_00538d10
   Address: 00538d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00538d10(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 0xc) == 400) {
    iVar1 = FUN_00445d30(param_1,0xffffffff);
    piVar2 = *(int **)(iVar1 + 0x60);
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar2;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        if ((*(byte *)(piVar2[2] + 0x20 + piVar2[1] * iVar4) & 2) != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar1;
      } while (iVar4 < iVar1);
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0x191) {
    FUN_0050c130(param_1);
    piVar2 = (int *)FUN_00522a00(0xffffffff);
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar2;
    }
    if (0 < iVar1) {
      pbVar3 = (byte *)(piVar2[2] + 0x14);
      iVar4 = iVar1;
      do {
        if ((*pbVar3 & 2) != 0) {
          iVar5 = iVar5 + 1;
        }
        pbVar3 = pbVar3 + piVar2[1];
        iVar4 = iVar4 + -1;
        iVar6 = iVar1;
      } while (iVar4 != 0);
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  return iVar5;
}


