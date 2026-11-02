/* Module: g2plug.dll
   Function: SfG2_FreeTemplateListEx
   Address: 5f8106e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_FreeTemplateListEx(struct tSFLIST * *) */

long SfG2_FreeTemplateListEx(tSFLIST **param_1)

{
  long lVar1;
  
                    /* 0x106e0  25  ?SfG2_FreeTemplateListEx@@YGJPAPAUtSFLIST@@@Z */
  if (*param_1 != (tSFLIST *)0x0) {
    lVar1 = SfG2_FreeTemplateList(*param_1);
    FUN_5f81e1d0((int *)*param_1);
    *param_1 = (tSFLIST *)0x0;
    return lVar1;
  }
  return 0;
}


