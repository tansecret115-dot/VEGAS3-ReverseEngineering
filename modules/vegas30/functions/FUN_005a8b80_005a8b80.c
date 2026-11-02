/* Module: vegas30.exe
   Function: FUN_005a8b80
   Address: 005a8b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a8b80(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if ((*param_1 & 0x20) == 0) {
    if ((*(int *)(param_1 + 0x4b8) == 0) || (*(int *)(param_1 + 0x4b8) == -1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  if (*(int *)(param_1 + 0x488) == 0x3f800000) {
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x478)) {
      pbVar2 = (byte *)(*(int *)(param_1 + 0x47c) + 0x48);
      do {
        if ((*pbVar2 & 1) != 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        pbVar2 = pbVar2 + 0x50;
      } while (iVar1 < *(int *)(param_1 + 0x478));
    }
    iVar1 = 0;
    if (*(int *)(param_1 + 0x480) < 1) {
      return 0;
    }
    pbVar2 = (byte *)(*(int *)(param_1 + 0x484) + 0x48);
    while ((*pbVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 0x50;
      if (*(int *)(param_1 + 0x480) <= iVar1) {
        return 0;
      }
    }
  }
  return 1;
}


