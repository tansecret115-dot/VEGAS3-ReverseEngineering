/* Module: vegas30.exe
   Function: FUN_005f8b10
   Address: 005f8b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_005f8b10(void)

{
  DWORD DVar1;
  CHAR local_104 [260];
  
  if (DAT_0065e294 == 0) {
    DAT_0065e180 = 0;
    DVar1 = GetModuleFileNameA(DAT_006471fc,local_104,0x104);
    if (DVar1 != 0) {
      _SfGetPathNameFromFilePath_12(local_104,&DAT_0065e180,0x104);
      _mbscat(&DAT_0065e180,"Vegas Video Profiles.INI");
      DAT_0065e294 = 1;
    }
  }
  return &DAT_0065e180;
}


