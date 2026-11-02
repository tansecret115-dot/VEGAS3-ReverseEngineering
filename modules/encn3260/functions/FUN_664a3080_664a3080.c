/* Module: encn3260.dll
   Function: FUN_664a3080
   Address: 664a3080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a3080(undefined4 *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_1[0x13] | 0x40) != 0) {
    iVar3 = *param_2;
    *param_2 = iVar3 + 1;
    iVar1 = param_2[1];
    if (iVar3 + 1 == iVar1) {
      param_2[1] = iVar1 * 2;
      pvVar2 = realloc((void *)param_2[2],iVar1 * 0xd8);
      param_2[2] = (int)pvVar2;
    }
    puVar4 = (undefined4 *)(param_2[2] + *param_2 * 0x6c);
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return 1;
}


