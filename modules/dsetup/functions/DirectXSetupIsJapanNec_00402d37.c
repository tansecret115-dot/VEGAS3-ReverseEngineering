/* Module: dsetup.dll
   Function: DirectXSetupIsJapanNec
   Address: 00402d37
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXSetupIsJapanNec(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x2d37  7  DirectXSetupIsJapanNec */
  bVar1 = DirectXSetupIsJapan();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    bVar1 = FUN_004027c8();
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      return 1;
    }
  }
  return 0;
}


