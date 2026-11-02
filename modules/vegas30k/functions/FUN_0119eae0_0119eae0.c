/* Module: vegas30k.dll
   Function: FUN_0119eae0
   Address: 0119eae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0119eae0(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x4b8) + 0x60))(*(int **)(param_1 + 0x4b8),param_2,0);
  FUN_0119e310(param_1,param_2,unaff_retaddr,param_1,param_2);
  return;
}


