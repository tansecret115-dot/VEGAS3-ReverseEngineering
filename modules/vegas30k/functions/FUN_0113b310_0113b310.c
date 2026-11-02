/* Module: vegas30k.dll
   Function: FUN_0113b310
   Address: 0113b310
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0113b310(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = FUN_01136300(param_1);
  return iVar1 == 0;
}


