/* Module: vegas30k.dll
   Function: FUN_01138c00
   Address: 01138c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138c00(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = _SfPlugIn_CreateList_12(param_2 + 4,1,0);
  *(undefined4 *)(param_2 + 8) = uVar1;
  FUN_011384e0(param_1);
  FUN_01138590(param_1,0);
  FUN_01138770(param_1);
  FUN_01137eb0(param_1);
  FUN_01138a00(param_1);
  return;
}


