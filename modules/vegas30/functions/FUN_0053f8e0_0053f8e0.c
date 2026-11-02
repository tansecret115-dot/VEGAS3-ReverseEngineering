/* Module: vegas30.exe
   Function: FUN_0053f8e0
   Address: 0053f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053f8e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_005b83b0(param_1,1);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x22c);
  }
  FUN_005b84d0(param_1,1);
  return uVar1;
}


