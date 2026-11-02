/* Module: vegas30k.dll
   Function: FUN_011b3a00
   Address: 011b3a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b3a00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (*(int **)(param_1 + 0x1a0) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x1a0);
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 4) * iVar7;
        iVar2 = *(int *)(iVar5 + 0xc + iVar4);
        puVar6 = (uint *)(iVar5 + iVar4);
        puVar6[1] = 0;
        puVar8 = (undefined4 *)(iVar2 + *(int *)(param_1 + 0x1a4));
        puVar6[2] = (uint)puVar8;
        for (uVar3 = *puVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        iVar7 = iVar7 + 1;
        puVar6[4] = 0xffffffff;
        puVar6[5] = 0;
      } while (iVar7 < iVar1);
      return 0;
    }
  }
  return 0;
}


