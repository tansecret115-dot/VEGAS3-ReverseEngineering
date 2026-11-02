/* Module: aviplug.dll
   Function: FUN_5f951d30
   Address: 5f951d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f951d30(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_1;
  puVar2 = (uint *)(param_1 + 0x1c1);
  param_1._2_1_ = (byte)((uint)*(undefined4 *)(param_1 + 0x1c1) >> 0x10);
  if ((param_1._2_1_ & 0x20) != 0x20) {
    iVar4 = 6;
    puVar3 = (uint *)(uVar1 + 0x10e4);
    iVar5 = uVar1 + 0xf4;
    iVar6 = uVar1 + 0x1e4;
    do {
      param_1 = *puVar2 | 0x200000;
      *puVar2 = param_1;
      param_1 = *puVar3 | 0x200000;
      *puVar3 = param_1;
      param_1 = *(uint *)(iVar5 + 12000) | 0x200000;
      *(uint *)(iVar5 + 12000) = param_1;
      iVar4 = iVar4 + -1;
      param_1 = *(uint *)(iVar6 + 12000) | 0x200000;
      *(uint *)(iVar6 + 12000) = param_1;
      puVar2 = puVar2 + 6000;
      puVar3 = puVar3 + 6000;
      iVar5 = iVar5 + 24000;
      iVar6 = iVar6 + 24000;
    } while (iVar4 != 0);
  }
  return;
}


