/* Module: vegas30.exe
   Function: FUN_00500410
   Address: 00500410
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00500410(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00500460(param_2);
  if ((-1 < (int)uVar1) && (param_1 != 0)) {
    FUN_005d8080(DAT_00647624,0,FUN_005d42f0,FUN_005d40e0,FUN_005d3890,param_2);
    uVar1 = (uint)(*(int *)(param_2 + 0x810) != 0);
  }
  return uVar1;
}


