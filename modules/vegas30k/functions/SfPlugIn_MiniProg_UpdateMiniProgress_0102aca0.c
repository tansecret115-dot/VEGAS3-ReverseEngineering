/* Module: vegas30k.dll
   Function: SfPlugIn_MiniProg_UpdateMiniProgress
   Address: 0102aca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfPlugIn_MiniProg_UpdateMiniProgress(char const *) */

void SfPlugIn_MiniProg_UpdateMiniProgress(char *param_1)

{
                    /* 0x2aca0  488  ?SfPlugIn_MiniProg_UpdateMiniProgress@@YGXPBD@Z */
  if (DAT_012099f0 != 0) {
    SfSetDlgItemText(DAT_012099f0,19999,param_1);
  }
  return;
}


