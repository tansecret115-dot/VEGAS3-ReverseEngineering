/* Module: sfcd.cdd
   Function: FUN_00405bf0
   Address: 00405bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405bf0(undefined4 *param_1,undefined2 param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)param_1 = param_2;
  FUN_0041f970((undefined1 *)param_1,1);
  *(undefined1 *)((int)param_1 + 2) = 0;
  if ((*(uint *)(param_3 + 8) & 8) != 0) {
    *(undefined1 *)((int)param_1 + 2) = 8;
  }
  if ((*(uint *)(param_3 + 8) & 1) != 0) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 1;
  }
  if ((*(uint *)(param_3 + 8) & 2) != 0) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 2;
  }
  if ((*(uint *)(param_3 + 8) & 4) != 0) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 4;
  }
  if (*(int *)(param_3 + 0x1c) != 0) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 0x80;
    pcVar3 = (char *)(param_3 + 0x20);
    do {
      pcVar4 = pcVar3 + 1;
      (pcVar3 + -param_3 + -0x1d)[(int)param_1] = *pcVar3 + -0x30;
      pcVar3 = pcVar4;
    } while ((int)(pcVar4 + -param_3 + -0x20) < 5);
    pbVar2 = (byte *)(param_1 + 2);
    pbVar5 = (byte *)(param_3 + 0x26);
    do {
      bVar1 = pbVar5[-1];
      *pbVar2 = bVar1 << 4;
      *pbVar2 = *pbVar5 & 0xf | bVar1 << 4;
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 2;
    } while ((int)(pbVar2 + (-8 - (int)param_1)) < 3);
    *(char *)((int)param_1 + 0xb) = *(char *)(param_3 + 0x2b) << 4;
  }
  return 0;
}


