/* Module: vegas30.exe
   Function: FUN_005814b0
   Address: 005814b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005814b0(void)

{
  int iVar1;
  undefined4 local_154 [40];
  LOGFONTA local_b4 [3];
  
  if ((DAT_0065a04c == (HFONT)0x0) && (DAT_0065a050 == (HFONT)0x0)) {
    local_154[0] = 0x154;
    SystemParametersInfoA(0x29,0x154,local_154,0);
    DAT_0065a04c = CreateFontIndirectA(local_b4);
    iVar1 = (-(uint)(DAT_0065a04c != (HFONT)0x0) & 0x7ffb1ffd) + 0x8004e003;
    if (-1 < iVar1) {
      local_b4[0].lfWeight = 700;
      DAT_0065a050 = CreateFontIndirectA(local_b4);
      return (-(uint)(DAT_0065a050 != (HFONT)0x0) & 0x7ffb1ffd) + 0x8004e003;
    }
  }
  else {
    iVar1 = -0x7ffb1fe5;
  }
  return iVar1;
}


