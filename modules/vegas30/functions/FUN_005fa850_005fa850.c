/* Module: vegas30.exe
   Function: FUN_005fa850
   Address: 005fa850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005fa850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),1);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))
                    (*(int **)(param_1 + 0x10),unaff_retaddr,param_1,param_2,param_3,param_4,param_5
                    );
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
  return uVar1;
}


