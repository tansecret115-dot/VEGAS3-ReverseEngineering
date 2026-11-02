/* Module: vegas30.exe
   Function: FUN_005088e0
   Address: 005088e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005088e0(void)

{
  undefined1 local_4 [4];
  
  if (DAT_0064b464 != 0) {
    _SfList_Destroy_4(DAT_0064b464);
    DAT_0064b464 = 0;
  }
  if (DAT_0064b468 != 0) {
    _SfPlugIn_FreeList_4(DAT_0064b468);
    DAT_0064b468 = 0;
  }
  _SfVideoPlugin_EnumeratePlugins_8(&DAT_0064b464,DAT_00649e1c);
  FUN_005086d0(DAT_0064b464);
  DAT_0064b468 = _SfPlugIn_CreateList_12(local_4,1,0x1f5);
  FUN_005086c0(&DAT_0064b468);
  FUN_005088c0();
  return 1;
}


