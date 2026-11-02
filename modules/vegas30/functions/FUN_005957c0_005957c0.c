/* Module: vegas30.exe
   Function: FUN_005957c0
   Address: 005957c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005957c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 0xf4;
  do {
    iVar1 = _SfList_CreateExZ_32(param_1 + -4,4,0xffffffff,0xffffffff,0,0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = _SfList_CreateExZ_32(param_1,4,0xffffffff,0xffffffff,0,0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = _SfQueueInitialize_4(param_1 + 4);
    if (iVar1 == 0) {
      return -0x7ffb1ffd;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x38;
  } while (uVar2 < 3);
  return 0;
}


