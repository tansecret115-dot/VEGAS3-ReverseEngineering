/* Module: sftrans1.dll
   Function: FUN_005477b0
   Address: 005477b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005477b0(void)

{
  int iVar1;
  undefined4 local_154 [40];
  LOGFONTA local_b4 [3];
  
  if ((DAT_0062247c == (HFONT)0x0) && (DAT_00622480 == (HFONT)0x0)) {
    local_154[0] = 0x154;
    SystemParametersInfoA(0x29,0x154,local_154,0);
    DAT_0062247c = CreateFontIndirectA(local_b4);
    iVar1 = (-(uint)(DAT_0062247c != (HFONT)0x0) & 0x7ffb1ffd) + 0x8004e003;
    if (-1 < iVar1) {
      local_b4[0].lfWeight = 700;
      DAT_00622480 = CreateFontIndirectA(local_b4);
      return (-(uint)(DAT_00622480 != (HFONT)0x0) & 0x7ffb1ffd) + 0x8004e003;
    }
  }
  else {
    iVar1 = -0x7ffb1fe5;
  }
  return iVar1;
}


