/* Module: vegas30.exe
   Function: FUN_005db2e0
   Address: 005db2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005db2e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 0xa4) == 0) {
    return 0;
  }
  iVar1 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&param_4);
  if (iVar1 < 0) {
    return 0x8004e009;
  }
  uVar2 = FUN_005dac40(param_1,param_2,DAT_0062a720,DAT_0062a724,DAT_0062a728,DAT_0062a72c,param_3);
  if (-1 < (int)uVar2) {
    uVar2 = riff64_CompleteChunk(param_1,param_4,param_5);
    uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
  }
  return uVar2;
}


