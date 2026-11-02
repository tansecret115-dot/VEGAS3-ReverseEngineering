/* Module: vegas30.exe
   Function: FUN_004aa200
   Address: 004aa200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa200(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = 0;
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar1) {
    uVar4 = param_1 + 0x70;
    bVar5 = uVar1 != 0;
    do {
      if (*(int *)((-(uint)bVar5 & uVar4) + 0x10) == param_2) {
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x68;
      bVar5 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return iVar2;
}


