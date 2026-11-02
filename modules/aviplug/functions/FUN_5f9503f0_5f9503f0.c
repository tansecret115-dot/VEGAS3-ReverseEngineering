/* Module: aviplug.dll
   Function: FUN_5f9503f0
   Address: 5f9503f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9503f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_5f94fbb0(param_2);
  if ((*(int *)(param_1 + 0xc) != 0) && (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0)) {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    puVar3 = param_2;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_5f94fb40(*(int *)(param_1 + 0x1c),(int)param_2);
    if (iVar1 < 0) {
      FUN_5f94fbb0(param_2);
    }
    return iVar1;
  }
  return -0x7ffbfdf7;
}


