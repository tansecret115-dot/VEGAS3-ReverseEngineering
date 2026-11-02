/* Module: vegas30.exe
   Function: FUN_004aa400
   Address: 004aa400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa400(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar1) {
    param_1 = param_1 + 0x70;
    bVar4 = uVar1 != 0;
    do {
      if (((bVar4) && (param_1 != 0)) && (*(int *)(param_1 + 8) == param_2)) {
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 0x68;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return iVar2;
}


