/* Module: sfs4rw.dll
   Function: FUN_00475b00
   Address: 00475b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475b00(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_00475c60(param_1,param_2);
  return;
}


