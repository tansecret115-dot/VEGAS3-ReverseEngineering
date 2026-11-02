/* Module: dsetup.dll
   Function: DirectXSetupIsJapan
   Address: 00402680
   Source: Ghidra pseudocode (Stage 10 batch) */


bool DirectXSetupIsJapan(void)

{
  LCID LVar1;
  
                    /* 0x2680  6  DirectXSetupIsJapan */
  LVar1 = GetSystemDefaultLCID();
  return (bool)('\x01' - (LVar1 != 0x411));
}


