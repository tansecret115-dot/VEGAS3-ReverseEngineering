/* Module: sfmarket2.dll
   Function: FUN_0041b050
   Address: 0041b050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041b050(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = *param_1 >> 0x18 & 1;
  iVar4 = 3;
  puVar3 = param_1 + 2;
  do {
    uVar1 = *puVar3;
    *puVar3 = uVar1 * 2 | uVar2;
    uVar2 = uVar1 >> 0x1f;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + -1;
  } while (iVar4 != 0);
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


