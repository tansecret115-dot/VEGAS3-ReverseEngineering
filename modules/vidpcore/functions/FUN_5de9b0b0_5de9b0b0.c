/* Module: vidpcore.dll
   Function: FUN_5de9b0b0
   Address: 5de9b0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de9b0b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = 0;
  iVar3 = *param_1;
  if (0 < iVar3) {
    piVar4 = (int *)(param_2 + 8);
    do {
      if (*piVar4 == param_3) break;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar1 < iVar3);
  }
  if (iVar1 < iVar3) {
    *param_1 = iVar3 + -1;
    puVar5 = (undefined4 *)(param_2 + (iVar1 * 3 + 3) * 4);
    puVar6 = (undefined4 *)(param_2 + iVar1 * 0xc);
    for (uVar2 = ((iVar3 + -1) - iVar1) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return;
}


