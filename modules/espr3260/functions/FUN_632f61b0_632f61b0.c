/* Module: espr3260.dll
   Function: FUN_632f61b0
   Address: 632f61b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f61b0(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = param_3;
  for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar5 = (int)param_1 >> 8 & 1;
  uVar1 = uVar5 + ((int)param_1 >> 4 & 0xfU) * 3;
  uVar5 = (param_1 & 0xf) * 3 + 1 + uVar5;
  uVar2 = uVar1;
  if ((param_1 & 0x200) != 0) {
    uVar2 = uVar5;
    uVar5 = uVar1;
  }
  if (uVar2 < 0x30) {
    iVar4 = uVar2 * 4;
    do {
      iVar3 = iVar4 + 4;
      *(float *)((int)param_3 + iVar4) =
           *(float *)(param_2 + iVar4 + uVar2 * -4) + *(float *)((int)param_3 + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < 0xc0);
  }
  if (uVar5 < 0x30) {
    iVar4 = uVar5 * 4;
    do {
      iVar3 = iVar4 + 4;
      *(float *)((int)param_3 + iVar4) =
           *(float *)((int)param_3 + iVar4) - *(float *)(param_2 + iVar4 + uVar5 * -4);
      iVar4 = iVar3;
    } while (iVar3 < 0xc0);
  }
  return;
}


