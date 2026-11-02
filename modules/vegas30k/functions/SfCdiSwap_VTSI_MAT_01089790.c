/* Module: vegas30k.dll
   Function: SfCdiSwap_VTSI_MAT
   Address: 01089790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfCdiSwap_VTSI_MAT(struct tagVTSI_MAT *) */

void SfCdiSwap_VTSI_MAT(tagVTSI_MAT *param_1)

{
                    /* 0x89790  335  ?SfCdiSwap_VTSI_MAT@@YGXPAUtagVTSI_MAT@@@Z */
  FUN_010861b0(param_1 + 0xc,1);
  FUN_010861b0(param_1 + 0x1c,1);
  FUN_010861b0(param_1 + 0x80,1);
  FUN_010861b0(param_1 + 0xc0,10);
  return;
}


