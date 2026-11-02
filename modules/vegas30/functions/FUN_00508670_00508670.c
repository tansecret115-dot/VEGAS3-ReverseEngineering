/* Module: vegas30.exe
   Function: FUN_00508670
   Address: 00508670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508670(void)

{
  undefined1 local_4 [4];
  
  _SfVideoPlugin_EnumeratePlugins_8(&DAT_0064b464,DAT_00649e1c);
  FUN_005086d0(DAT_0064b464);
  DAT_0064b468 = _SfPlugIn_CreateList_12(local_4,1,0x1f5);
  FUN_005086c0(&DAT_0064b468);
  return 1;
}


