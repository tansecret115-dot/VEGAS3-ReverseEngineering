/* Module: vegas30.exe
   Function: FUN_0043d470
   Address: 0043d470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0043d470(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x14));
  if (sVar1 == param_3) {
    *(size_t *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
    return 0;
  }
  return 0x8004e009;
}


