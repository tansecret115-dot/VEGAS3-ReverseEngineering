/* Module: sfcd.cdd
   Function: FUN_0041b2f0
   Address: 0041b2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041b2f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    puVar2 = param_1;
    puVar3 = param_2;
    for (iVar1 = 0x24c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = param_3;
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((int)param_3 + 0x126);
      puVar3 = param_1 + 0x24c;
      for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
      *(undefined2 *)param_3 = *(undefined2 *)puVar3;
    }
    param_1 = (undefined4 *)((int)param_1 + 0xa56);
    param_2 = param_2 + 0x24c;
    param_3 = puVar2;
  }
  return;
}


