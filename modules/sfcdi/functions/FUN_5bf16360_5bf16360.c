/* Module: sfcdi.dll
   Function: FUN_5bf16360
   Address: 5bf16360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf16360(int *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  *param_4 = -1;
  if (0 < *param_1) {
    puVar2 = (undefined4 *)param_1[2];
    do {
      puVar4 = (undefined4 *)*puVar2;
      if ((param_2 == puVar4[1]) && (param_3 == puVar4[2])) {
        for (iVar3 = 0x53; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_5 = *puVar4;
          puVar4 = puVar4 + 1;
          param_5 = param_5 + 1;
        }
        *param_4 = iVar1;
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *param_1);
  }
  return 0x8004e00a;
}


