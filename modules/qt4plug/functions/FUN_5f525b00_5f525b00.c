/* Module: qt4plug.dll
   Function: FUN_5f525b00
   Address: 5f525b00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f525b00(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    param_3 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_3);
  }
  return param_3 == 0;
}


