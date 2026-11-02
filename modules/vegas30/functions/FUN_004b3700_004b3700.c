/* Module: vegas30.exe
   Function: FUN_004b3700
   Address: 004b3700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004b3700(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_2 == 0x447) {
    uVar1 = FUN_004b3680(param_1,param_5);
    return uVar1;
  }
  if (param_2 != 0x46a) {
    return 1;
  }
  uVar1 = FUN_004b36f0(param_1,param_5);
  return uVar1;
}


