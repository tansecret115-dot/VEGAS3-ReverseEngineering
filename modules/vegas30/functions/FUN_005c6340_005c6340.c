/* Module: vegas30.exe
   Function: FUN_005c6340
   Address: 005c6340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005c6340(int param_1)

{
  uint uVar1;
  
  FUN_005b83b0(param_1,0);
  uVar1 = *(uint *)(param_1 + 0xc2c);
  FUN_005b84d0(param_1,0);
  return uVar1 & 1;
}


