/* Module: vegas30.exe
   Function: FUN_004e9230
   Address: 004e9230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e9230(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_005b8630(param_2);
  iVar1 = FUN_005b51d0();
  FUN_0043b250(param_1,0x9d08,-(iVar1 != 0) & 4);
  iVar1 = FUN_005b51d0();
  FUN_0043b250(param_1,0x9d09,-(iVar1 != 0) & 4);
  return;
}


