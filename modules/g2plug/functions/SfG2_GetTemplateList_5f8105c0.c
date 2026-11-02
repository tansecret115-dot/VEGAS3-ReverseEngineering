/* Module: g2plug.dll
   Function: SfG2_GetTemplateList
   Address: 5f8105c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_GetTemplateList(struct tSFLIST *) */

long SfG2_GetTemplateList(tSFLIST *param_1)

{
  long lVar1;
  
                    /* 0x105c0  29  ?SfG2_GetTemplateList@@YGJPAUtSFLIST@@@Z */
  lVar1 = SfG2_GetTemplateListEx(param_1,1);
  SfG2_GetTemplateListEx(param_1,0);
  return lVar1;
}


