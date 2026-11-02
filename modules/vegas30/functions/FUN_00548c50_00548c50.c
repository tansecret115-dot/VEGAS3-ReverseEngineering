/* Module: vegas30.exe
   Function: FUN_00548c50
   Address: 00548c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00548c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xb0) != 0)) {
    uVar1 = FUN_005824a0(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}


