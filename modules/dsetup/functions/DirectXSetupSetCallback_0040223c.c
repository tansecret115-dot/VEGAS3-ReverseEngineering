/* Module: dsetup.dll
   Function: DirectXSetupSetCallback
   Address: 0040223c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXSetupSetCallback(undefined4 param_1)

{
                    /* 0x223c  10  DirectXSetupSetCallback */
  if (DAT_0040aa84 == (code *)0x0) {
    DAT_0040aa68 = param_1;
  }
  else {
    (*DAT_0040aa84)(param_1);
  }
  return 0;
}


