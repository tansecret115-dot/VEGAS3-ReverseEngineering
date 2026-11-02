/* Module: vegas30.exe
   Function: FUN_004aa240
   Address: 004aa240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa240(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = 0;
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar1) {
    pbVar3 = (byte *)(param_1 + 0x70);
    bVar5 = uVar1 != 0;
    do {
      if ((((bVar5) && (pbVar3 != (byte *)0x0)) && (*(int *)(pbVar3 + 0x10) == param_2)) &&
         ((*pbVar3 & 0x40) == 0)) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 + 1;
      pbVar3 = pbVar3 + 0x68;
      bVar5 = uVar4 < uVar1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return iVar2;
}


