/* Module: wmfplug2.dll
   Function: SfWMF_WriteScriptFile
   Address: 0041aed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_WriteScriptFile(char const *,struct SFASF3_PARAMS *) */

long SfWMF_WriteScriptFile(char *param_1,SFASF3_PARAMS *param_2)

{
  long lVar1;
  
                    /* 0x1aed0  40  ?SfWMF_WriteScriptFile@@YGJPBDPAUSFASF3_PARAMS@@@Z */
  lVar1 = FUN_0041af00((int)param_2,param_1);
  if (-1 < lVar1) {
    lVar1 = FUN_0041b130((int)param_2,param_1);
    if (-1 < lVar1) {
      lVar1 = FUN_0041b2c0((int)param_2,param_1);
    }
  }
  return lVar1;
}


