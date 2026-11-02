/* Module: vegas30k.dll
   Function: FUN_010636e0
   Address: 010636e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010636e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 4))();
  if (-1 < iVar1) {
    iVar1 = FUN_01062d40(param_2,param_3,param_4,param_5,param_6,param_7);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
  }
  return iVar1;
}


