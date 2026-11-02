/* Module: sftrans1.dll
   Function: FUN_005362d0
   Address: 005362d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005362d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 3;
  uVar2 = (param_1[2] & 1) << 0x18;
  puVar3 = param_1;
  do {
    uVar1 = *puVar3;
    *puVar3 = uVar1 >> 1 | uVar2;
    uVar2 = uVar1 << 0x1f;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


