/* Module: vegas30.exe
   Function: FUN_00566bb0
   Address: 00566bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00566bb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x50))(*(int **)(param_1 + 0x18),0,0x3ff00000);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x38))
            (*(int **)(param_1 + 0x18),unaff_ESI,unaff_retaddr,param_1,param_2,param_3,param_4);
  return;
}


