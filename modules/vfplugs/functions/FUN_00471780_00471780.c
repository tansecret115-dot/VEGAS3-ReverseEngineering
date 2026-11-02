/* Module: vfplugs.dll
   Function: FUN_00471780
   Address: 00471780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00471780(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (3 < (int)param_3[4]) {
    param_3[4] = 0;
  }
  piVar1 = *(int **)(param_1 + 0x308);
  if ((param_2 <= *piVar1 + -1) && (-1 < param_2)) {
    uVar3 = piVar1[1];
    puVar4 = (undefined4 *)(uVar3 * param_2 + piVar1[2]);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return 1;
  }
  return 0;
}


