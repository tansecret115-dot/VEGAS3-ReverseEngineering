/* Module: sfppack3.dll
   Function: FUN_5cc3d020
   Address: 5cc3d020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc3d020(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 < param_2) {
    iVar2 = param_2 - param_3;
    puVar1 = (undefined4 *)(param_1 + -4 + param_2 * 8);
    do {
      puVar1[1] = puVar1[-1];
      puVar1[2] = *puVar1;
      puVar1 = puVar1 + -2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_2 + 1;
}


