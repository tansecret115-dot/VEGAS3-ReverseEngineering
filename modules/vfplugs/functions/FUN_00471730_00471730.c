/* Module: vfplugs.dll
   Function: FUN_00471730
   Address: 00471730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00471730(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_3 != (undefined4 *)0x0) && (param_1 != 0)) {
    piVar1 = *(int **)(param_1 + 0x308);
    if ((param_2 <= *piVar1 + -1) && (-1 < param_2)) {
      puVar3 = (undefined4 *)(piVar1[1] * param_2 + piVar1[2]);
      for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
      return 1;
    }
  }
  return 0;
}


