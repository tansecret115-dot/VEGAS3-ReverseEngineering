/* Module: sfcd.cdd
   Function: FUN_0041b290
   Address: 0041b290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041b290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

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
      puVar2 = param_3 + 4;
      *param_3 = param_1[0x24c];
      param_3[1] = param_1[0x24d];
      param_3[2] = param_1[0x24e];
      param_3[3] = param_1[0x24f];
    }
    param_1 = param_1 + 0x250;
    param_2 = param_2 + 0x24c;
    param_3 = puVar2;
  }
  return;
}


