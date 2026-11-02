/* Module: vegas30.exe
   Function: FUN_005faa70
   Address: 005faa70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005faa70(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(*(int **)(param_1 + 0xc),1);
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))
                    (*(int **)(param_1 + 0xc),unaff_retaddr,param_1);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(*(int **)(param_1 + 0xc),0);
  return uVar1;
}


