/* Module: vegas30.exe
   Function: FUN_0058ef50
   Address: 0058ef50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058ef50(int param_1)

{
  int iVar1;
  
  iVar1 = _SfList_CreateExZ_32(param_1 + 0x10,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < iVar1) {
    iVar1 = _SfList_CreateExZ_32(param_1 + 0x14,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (-1 < iVar1) {
      iVar1 = _SfQueueInitialize_4(param_1 + 0x18);
      if (iVar1 == 0) {
        return -0x7ffb1ffd;
      }
      iVar1 = _SfQueueInitialize_4(param_1 + 0x3c);
      iVar1 = (-(uint)(iVar1 != 0) & 0x7ffb1ffd) + 0x8004e003;
    }
  }
  return iVar1;
}


