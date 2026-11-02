/* Module: sfcdi.dll
   Function: FUN_5bf10320
   Address: 5bf10320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf10320(char *param_1,LPCSTR param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *local_ac;
  byte *local_a8;
  uint local_a4;
  byte local_a0 [159];
  undefined1 local_1;
  
  local_ac = *(byte **)(param_1 + 0x18);
  lstrcpynA((LPSTR)local_a0,param_2,0xa0);
  local_a8 = local_a0;
  local_1 = 0;
  iVar1 = lstrlenA((LPCSTR)local_a0);
  uVar4 = iVar1 + 1;
  local_a4 = 0;
  if (uVar4 == 0) {
    *(byte **)(param_1 + 0x18) = local_ac;
    return;
  }
  do {
    uVar3 = *(uint *)(param_1 + 0x14);
    if (uVar4 <= *(uint *)(param_1 + 0x14)) {
      uVar3 = uVar4;
    }
    pbVar5 = local_a8;
    pbVar6 = local_ac + (0x10 - *(int *)(param_1 + 0x14));
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar6 = pbVar6 + 4;
    }
    uVar4 = uVar4 - uVar3;
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pbVar6 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    local_a8 = local_a8 + uVar3;
    local_a4 = local_a4 + uVar3;
    *(uint *)(param_1 + 0x14) = iVar1 - uVar3;
    if (uVar4 == 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    if (iVar1 - uVar3 == 0) {
      FUN_5bf102f0(local_ac);
      pbVar5 = local_ac + 0x12;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      FUN_5bf10280(param_1,pbVar5);
      if (uVar4 == 0) {
        *(byte **)(param_1 + 0x18) = pbVar5;
        return;
      }
      uVar3 = local_a4;
      if (0xe < local_a4) {
        uVar3 = 0xf;
      }
      local_ac[0x15] = (local_ac[0x15] ^ (byte)uVar3) & 0xf ^ local_ac[0x15];
      local_ac = pbVar5;
    }
  } while (uVar4 != 0);
  *(byte **)(param_1 + 0x18) = local_ac;
  return;
}


