/* Module: rmme3260.dll
   Function: FUN_6624e7d0
   Address: 6624e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624e7d0(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (DAT_6627e540 == (HMODULE)0x0) {
    DAT_6627e540 = LoadLibraryA(s_msvfw32_dll_66270600);
    if (DAT_6627e540 != (HMODULE)0x0) {
      DAT_6627e544 = GetProcAddress(DAT_6627e540,s_DrawDibOpen_662705f4);
      DAT_6627e548 = GetProcAddress(DAT_6627e540,s_DrawDibBegin_662705e4);
      DAT_6627e54c = GetProcAddress(DAT_6627e540,s_DrawDibDraw_662705d8);
      DAT_6627e550 = GetProcAddress(DAT_6627e540,s_DrawDibClose_662705c8);
      return 1;
    }
    uVar1 = 0;
    DAT_6627e540 = (HMODULE)0x0;
  }
  return uVar1;
}


