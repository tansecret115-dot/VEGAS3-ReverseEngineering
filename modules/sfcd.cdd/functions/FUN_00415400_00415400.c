/* Module: sfcd.cdd
   Function: FUN_00415400
   Address: 00415400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00415400(undefined4 *param_1,undefined1 *param_2,undefined2 param_3,undefined4 param_4,
            undefined2 param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  
  puVar4 = param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)param_1 = *param_2;
  *(undefined1 *)((int)param_1 + 1) = 4;
  if ((*(uint *)(param_2 + 8) & 8) != 0) {
    *(undefined1 *)((int)param_1 + 1) = 6;
  }
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) | 1;
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar3 = 0;
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 4;
    do {
      *(undefined1 *)((int)param_1 + iVar3 + 0xd) = param_2[iVar3 + 0x20];
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    pbVar2 = (byte *)((int)param_1 + 0x12);
    pbVar5 = param_2 + 0x26;
    do {
      bVar1 = pbVar5[-1];
      *pbVar2 = bVar1 << 4;
      *pbVar2 = *pbVar5 & 0xf | bVar1 << 4;
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 2;
    } while ((int)(pbVar2 + (-0x12 - (int)param_1)) < 3);
    *(undefined1 *)((int)param_1 + 0x15) = param_2[0x2b] << 4;
  }
  if ((*(uint *)(param_2 + 8) & 2) == 0) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 3;
  }
  *(undefined2 *)((int)param_1 + 9) = param_3;
  *(undefined4 *)((int)param_1 + 5) = param_4;
  *(undefined2 *)((int)param_1 + 0xb) = param_5;
  FUN_0041f970((undefined1 *)((int)param_1 + 9),1);
  FUN_0041f970((undefined1 *)((int)param_1 + 0xb),1);
  FUN_0041f9a0((undefined1 *)((int)param_1 + 5),1);
  return 0;
}


