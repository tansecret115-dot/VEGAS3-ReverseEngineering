/* Module: aviplug.dll
   Function: FUN_5f9420f0
   Address: 5f9420f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9420f0(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 *local_c;
  undefined1 *local_8;
  int local_4;
  
  puVar3 = param_1;
  local_4 = *(int *)(param_1 + 0x44) / 2;
  if (0 < local_4) {
    local_8 = param_2 + 0xf8;
    local_c = param_2 + 0xf3;
    param_1 = param_2 + 0x1c5;
    puVar5 = param_2 + 0xf9;
    puVar7 = param_2 + 0xf4;
    puVar6 = (uint *)(param_2 + 0x1c6);
    puVar4 = (uint *)(param_2 + 0x1c1);
    param_2 = param_2 + 0x1c0;
    do {
      uVar1 = *puVar4;
      *param_2 = 0x60;
      uVar2 = *(uint *)(puVar3 + 0x4c);
      *puVar4 = uVar1 & uVar2;
      *puVar4 = *(uint *)(puVar3 + 0x48) | uVar1 & uVar2;
      puVar4 = puVar4 + 6000;
      *param_1 = 0x61;
      *puVar6 = *puVar6 & *(uint *)(puVar3 + 0x54);
      *puVar6 = *puVar6 | *(uint *)(puVar3 + 0x50);
      uVar1 = *(uint *)(puVar7 + 12000);
      local_c[12000] = 0x60;
      uVar2 = *(uint *)(puVar3 + 0x4c);
      *(uint *)(puVar7 + 12000) = uVar1 & uVar2;
      *(uint *)(puVar7 + 12000) = *(uint *)(puVar3 + 0x48) | uVar1 & uVar2;
      local_8[12000] = 0x61;
      *(uint *)(puVar5 + 12000) = *(uint *)(puVar5 + 12000) & *(uint *)(puVar3 + 0x54);
      local_8 = local_8 + 24000;
      *(uint *)(puVar5 + 12000) = *(uint *)(puVar5 + 12000) | *(uint *)(puVar3 + 0x50);
      param_2 = param_2 + 24000;
      param_1 = param_1 + 24000;
      local_c = local_c + 24000;
      local_4 = local_4 + -1;
      puVar5 = puVar5 + 24000;
      puVar6 = puVar6 + 6000;
      puVar7 = puVar7 + 24000;
    } while (local_4 != 0);
  }
  return;
}


