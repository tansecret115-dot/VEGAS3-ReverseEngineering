/* Module: g2plug.dll
   Function: SfG2GetResampleRate
   Address: 5f80f170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2GetResampleRate(struct _GUID *) */

long SfG2GetResampleRate(_GUID *param_1)

{
  long lVar1;
  SFG2_PARAMS local_674 [324];
  uint local_530;
  
                    /* 0xf170  20  ?SfG2GetResampleRate@@YGJPAU_GUID@@@Z */
  lVar1 = G2LoadRegistryTemplate(param_1,local_674,(SFG2TEMPLATE_DESCRIPTION *)0x0);
  return local_530 & (lVar1 < 0) - 1;
}


