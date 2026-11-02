/* Module: erv33260.dll
   Function: FUN_6707f240
   Address: 6707f240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707f240(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0xa4) * *(int *)(param_1 + 0xa0) != 0) {
    iVar3 = 0;
    do {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x8c) + 5 + iVar3);
      iVar3 = iVar3 + 0xc;
      bVar2 = *pbVar1;
      uVar4 = uVar4 + 1;
      *pbVar1 = bVar2 >> 4 | bVar2 & 0xf0;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xa4) * *(int *)(param_1 + 0xa0)));
  }
  return;
}


