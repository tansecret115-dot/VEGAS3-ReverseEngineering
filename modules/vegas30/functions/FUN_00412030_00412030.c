/* Module: vegas30.exe
   Function: FUN_00412030
   Address: 00412030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00412030(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 local_40 [4];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c [11];
  
  iVar1 = _SfGetMetricBinary_16(DAT_00647200,param_2,local_40,0x40);
  if (iVar1 == 0x40) {
    uVar2 = 3;
    if ((*(uint *)(param_1 + 0xc) & 0x20) != 0) {
      uVar2 = 0x13;
    }
    *(uint *)(param_1 + 0xc) = ~uVar2 & *(uint *)(param_1 + 0xc) | local_3c & uVar2;
    *(undefined4 *)(param_1 + 0x44) = local_34;
    *(undefined4 *)(param_1 + 0x48) = local_30;
    *(undefined4 *)(param_1 + 0x10) = local_38;
    if (*param_3 < local_2c[0]) {
      local_2c[0] = *param_3;
    }
    puVar3 = local_2c;
    for (uVar2 = local_2c[0] >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    for (local_2c[0] = local_2c[0] & 3; local_2c[0] != 0; local_2c[0] = local_2c[0] - 1) {
      *(char *)param_3 = (char)*puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
      param_3 = (uint *)((int)param_3 + 1);
    }
    return 0;
  }
  return 1;
}


