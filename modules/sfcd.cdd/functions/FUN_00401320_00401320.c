/* Module: sfcd.cdd
   Function: FUN_00401320
   Address: 00401320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401320(int param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_c [2];
  uint local_4;
  
  if (*(int *)(param_1 + 8) != 1) {
    return 0;
  }
  iVar2 = FUN_0041f490(*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x20));
  if (*(int *)(iVar2 + 0x1c) == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x3c) + -1;
  *(int *)(param_1 + 0x3c) = iVar3;
  if (iVar3 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0x4b;
  pbVar7 = (byte *)(iVar2 + 0x20);
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
  *param_2 = *(char *)(iVar2 + 8) << 4 | *param_2 & 0xf;
  FUN_0041eec0(local_c,*(uint *)(param_1 + 0x10));
  param_2[9] = (byte)local_4;
  FUN_0041f150(param_2 + 9,local_4 & 0xff);
  iVar2 = 5;
  *param_2 = *param_2 & 0xf3 | 3;
  uVar6 = 0;
  do {
    uVar6 = uVar6 << 6 | *pbVar7 - 0x30;
    pbVar7 = pbVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar5 = 0;
  pbVar8 = param_2 + 1;
  do {
    cVar1 = (char)uVar5;
    uVar5 = uVar5 + 8;
    pbVar4 = pbVar8 + 1;
    *pbVar8 = (byte)((uVar6 << 2) >> (0x18U - cVar1 & 0x1f));
    pbVar8 = pbVar4;
  } while (uVar5 < 0x20);
  iVar2 = 3;
  do {
    pbVar8 = pbVar7 + 1;
    *pbVar4 = *pbVar7 << 4;
    pbVar7 = pbVar7 + 2;
    *pbVar4 = *pbVar4 | *pbVar8 - 0x30;
    pbVar4 = pbVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *pbVar4 = *pbVar7 << 4;
  return 1;
}


