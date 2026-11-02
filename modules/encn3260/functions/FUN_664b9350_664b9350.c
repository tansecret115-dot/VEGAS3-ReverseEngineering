/* Module: encn3260.dll
   Function: FUN_664b9350
   Address: 664b9350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b9350(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (DAT_664f1d38 == (HMODULE)0x0) {
    DAT_664f1d38 = LoadLibraryA(s_msvfw32_dll_664e3b18);
    if (DAT_664f1d38 != (HMODULE)0x0) {
      DAT_664f1d3c = GetProcAddress(DAT_664f1d38,s_DrawDibOpen_664e3b0c);
      DAT_664f1d40 = GetProcAddress(DAT_664f1d38,s_DrawDibBegin_664e3afc);
      DAT_664f1d44 = GetProcAddress(DAT_664f1d38,s_DrawDibDraw_664e3af0);
      DAT_664f1d48 = GetProcAddress(DAT_664f1d38,s_DrawDibClose_664e3ae0);
      return 1;
    }
    uVar1 = 0;
    DAT_664f1d38 = (HMODULE)0x0;
  }
  return uVar1;
}


