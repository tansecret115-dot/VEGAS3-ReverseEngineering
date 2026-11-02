/* Module: sfcd.cdd
   Function: FUN_0041a790
   Address: 0041a790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a790(uint *param_1,uint *param_2,int *param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  param_1[3] = 99;
  FUN_0041f970((undefined1 *)param_2,1);
  *param_1 = (uint)*(byte *)((int)param_2 + 2);
  bVar1 = *(byte *)((int)param_2 + 3);
  param_1[1] = (uint)bVar1;
  uVar4 = *param_2;
  if ((ushort)uVar4 < 2) {
    return 0x8004e0ce;
  }
  *param_3 = ((uint)bVar1 - *param_1) + 1;
  for (uVar4 = (ushort)uVar4 - 2 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar5 = param_2 + 2;
    FUN_0041f9a0((undefined1 *)puVar5,1);
    bVar1 = *(byte *)((int)param_2 + 6);
    if ((bVar1 == 0) || (99 < bVar1)) {
      if ((bVar1 == 0xa2) || (bVar1 == 0xaa)) {
        uVar2 = *puVar5;
        if ((param_4 & 0x20) == 0) {
          param_1[0x763] = uVar2;
        }
        else {
          local_4 = uVar2 & 0xff;
          local_8 = uVar2 >> 8 & 0xff;
          local_c = uVar2 >> 0x10 & 0xff;
          FUN_0041ef20((int *)(param_1 + 0x763),(int *)&local_c);
        }
      }
    }
    else {
      puVar3 = (uint *)FUN_0041f490((int)param_1,bVar1 - 1);
      uVar2 = *puVar5;
      if ((param_4 & 0x20) == 0) {
        puVar3[5] = uVar2;
      }
      else {
        local_10 = uVar2 & 0xff;
        local_14 = uVar2 >> 8 & 0xff;
        local_18 = uVar2 >> 0x10 & 0xff;
        FUN_0041ef20((int *)(puVar3 + 5),(int *)&local_18);
      }
      bVar1 = *(byte *)((int)param_2 + 5);
      puVar3[2] = bVar1 & 0xf;
      *puVar3 = (uint)*(byte *)((int)param_2 + 6);
      if ((bVar1 & 4) == 0) {
        puVar3[3] = 0;
      }
      else {
        puVar3[3] = 1;
      }
    }
    param_2 = puVar5;
  }
  return 0;
}


