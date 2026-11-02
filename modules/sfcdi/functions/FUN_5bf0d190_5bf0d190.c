/* Module: sfcdi.dll
   Function: FUN_5bf0d190
   Address: 5bf0d190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0d190(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  for (iVar1 = 0x59; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = param_3;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x168);
    puVar3 = param_1 + 2;
    for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  }
  return;
}


