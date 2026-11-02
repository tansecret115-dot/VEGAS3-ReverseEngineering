/* Module: encn3260.dll
   Function: FUN_66486700
   Address: 66486700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66486700(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x16c) + 4))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x58))
                    (*(int **)(param_1 + 0x34),param_2,param_3,param_4,param_5);
  (**(code **)(**(int **)(param_1 + 0x16c) + 8))();
  return uVar1;
}


