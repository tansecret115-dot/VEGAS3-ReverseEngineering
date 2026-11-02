/* Module: vegas30.exe
   Function: FUN_005954d0
   Address: 005954d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005954d0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x10) & 0x20000) != 0) {
    iVar2 = 0;
    pbVar1 = (byte *)(param_1 + 0x15c);
    do {
      if (((float)_DAT_00610fd8 < *(float *)(pbVar1 + 4)) && ((*pbVar1 & 4) == 0)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 8;
    } while (iVar2 < 0x1a);
    iVar2 = 0;
    pbVar1 = (byte *)(param_1 + 0x5c);
    while ((*(float *)(pbVar1 + 4) <= (float)_DAT_00610fd8 || ((*pbVar1 & 4) != 0))) {
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 8;
      if (0x1f < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}


