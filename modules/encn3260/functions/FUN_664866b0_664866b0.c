/* Module: encn3260.dll
   Function: FUN_664866b0
   Address: 664866b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664866b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x16c) + 4))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x50))
                    (*(int **)(param_1 + 0x34),param_2,param_3,param_4);
  (**(code **)(**(int **)(param_1 + 0x16c) + 8))();
  return uVar1;
}


