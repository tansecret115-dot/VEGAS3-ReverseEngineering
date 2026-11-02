/* Module: vegas30.exe
   Function: FUN_004583a0
   Address: 004583a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004583a0(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (*(undefined4 **)(param_1 + 0xab0) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + 0xab0))(param_1,param_2);
  }
  return;
}


