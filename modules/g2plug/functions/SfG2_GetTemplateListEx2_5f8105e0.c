/* Module: g2plug.dll
   Function: SfG2_GetTemplateListEx2
   Address: 5f8105e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_GetTemplateListEx2(struct tSFLIST * *) */

long SfG2_GetTemplateListEx2(tSFLIST **param_1)

{
  long lVar1;
  
                    /* 0x105e0  30  ?SfG2_GetTemplateListEx2@@YGJPAPAUtSFLIST@@@Z */
  lVar1 = FUN_5f81e2a0((int *)param_1,4,-1,-1,0x80000000);
  if (-1 < lVar1) {
    lVar1 = SfG2_GetTemplateListEx(*param_1,1);
    SfG2_GetTemplateListEx(*param_1,0);
  }
  return lVar1;
}


