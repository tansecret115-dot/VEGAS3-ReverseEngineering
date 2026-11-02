/* Module: encn3260.dll
   Function: FUN_66486810
   Address: 66486810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66486810(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x16c) + 4))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x60))
                    (*(int **)(param_1 + 0x34),param_2,param_3);
  (**(code **)(**(int **)(param_1 + 0x16c) + 8))();
  return uVar1;
}


