/* Module: sfcd.cdd
   Function: FUN_00401230
   Address: 00401230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401230(int param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  uint local_c [2];
  uint local_4;
  
  if (*(int *)(param_1 + 8) == 2) {
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0x1d78) == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x38) + -1;
  *(int *)(param_1 + 0x38) = iVar3;
  if (iVar3 != 0) {
    return 0;
  }
  pcVar5 = (char *)(*(int *)(param_1 + 0x2c) + 0x1d7c);
  *(undefined4 *)(param_1 + 0x38) = 0x4b;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  if (*(int *)(param_1 + 8) == 1) {
    iVar3 = FUN_0041f490(*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x20));
    *param_2 = *(char *)(iVar3 + 8) << 4 | *param_2 & 0xf;
    FUN_0041eec0(local_c,*(uint *)(param_1 + 0x10));
    param_2[9] = (byte)local_4;
    FUN_0041f150(param_2 + 9,local_4 & 0xff);
  }
  pbVar4 = param_2 + 1;
  *param_2 = *param_2 & 0xf2 | 2;
  iVar3 = 6;
  do {
    cVar2 = *pcVar5;
    pbVar1 = (byte *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    *pbVar4 = *pbVar1 & 0xf | cVar2 << 4;
    pbVar4 = pbVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *pbVar4 = *pcVar5 << 4;
  return 1;
}


