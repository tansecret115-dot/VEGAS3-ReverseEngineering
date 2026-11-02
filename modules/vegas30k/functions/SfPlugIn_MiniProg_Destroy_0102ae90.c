/* Module: vegas30k.dll
   Function: SfPlugIn_MiniProg_Destroy
   Address: 0102ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfPlugIn_MiniProg_Destroy(void) */

void SfPlugIn_MiniProg_Destroy(void)

{
                    /* 0x2ae90  487  ?SfPlugIn_MiniProg_Destroy@@YGXXZ */
  if (DAT_012099f0 != (HWND)0x0) {
    DestroyWindow(DAT_012099f0);
  }
  DAT_012099f0 = (HWND)0x0;
  return;
}


