/* Module: aviplug.dll
   Function: FUN_5f951e20
   Address: 5f951e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f951e20(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((*(uint *)(param_1 + 0x1c1) & 0x200000) != 0) + 5;
  if (iVar3 != 0) {
    puVar1 = (uint *)(param_1 + 0x1c6);
    iVar2 = param_1 + 0xf9;
    do {
      param_1 = *puVar1 & 0xfffffaff | 0x200;
      *puVar1 = param_1;
      iVar3 = iVar3 + -1;
      param_1 = *(uint *)(iVar2 + 12000) & 0xfffffaff | 0x200;
      *(uint *)(iVar2 + 12000) = param_1;
      puVar1 = puVar1 + 6000;
      iVar2 = iVar2 + 24000;
    } while (iVar3 != 0);
  }
  return;
}


