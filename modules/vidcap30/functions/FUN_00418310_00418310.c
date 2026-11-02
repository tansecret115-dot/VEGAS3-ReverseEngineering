/* Module: vidcap30.exe
   Function: FUN_00418310
   Address: 00418310
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00418310(void)

{
  EnumSystemLocalesA((LOCALE_ENUMPROCA)&LAB_004182e0,1);
  return DAT_005bc2b4 != 0;
}


