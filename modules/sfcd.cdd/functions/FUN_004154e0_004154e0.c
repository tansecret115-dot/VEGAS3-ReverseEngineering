/* Module: sfcd.cdd
   Function: FUN_004154e0
   Address: 004154e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004154e0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(param_2 + 0x1d78) != 0) {
    *(undefined1 *)((int)param_1 + 1) = 0x80;
    pbVar2 = (byte *)(param_1 + 1);
    pbVar4 = (byte *)(param_2 + 0x1d7d);
    do {
      bVar1 = pbVar4[-1];
      *pbVar2 = bVar1 << 4;
      *pbVar2 = *pbVar4 & 0xf | bVar1 << 4;
      pbVar2 = pbVar2 + 1;
      pbVar4 = pbVar4 + 2;
    } while ((int)(pbVar2 + (-4 - (int)param_1)) < 6);
    *(char *)((int)param_1 + 10) = *(char *)(param_2 + 0x1d88) << 4;
    return 0;
  }
  return 0;
}


