/* Module: vegas30.exe
   Function: FUN_00508880
   Address: 00508880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508880(void)

{
  if (DAT_0064b464 != 0) {
    _SfList_Destroy_4(DAT_0064b464);
    DAT_0064b464 = 0;
  }
  if (DAT_0064b468 != 0) {
    _SfPlugIn_FreeList_4(DAT_0064b468);
    DAT_0064b468 = 0;
  }
  return 1;
}


