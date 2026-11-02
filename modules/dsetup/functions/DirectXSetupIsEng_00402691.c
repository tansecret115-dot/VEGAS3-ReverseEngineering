/* Module: dsetup.dll
   Function: DirectXSetupIsEng
   Address: 00402691
   Source: Ghidra pseudocode (Stage 10 batch) */


bool DirectXSetupIsEng(void)

{
  LCID LVar1;
  
                    /* 0x2691  15  DirectXSetupIsEng */
  LVar1 = GetSystemDefaultLCID();
  return (bool)('\x01' - (LVar1 != 0x409));
}


