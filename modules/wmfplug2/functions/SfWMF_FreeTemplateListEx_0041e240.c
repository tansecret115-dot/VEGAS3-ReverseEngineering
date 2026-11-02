/* Module: wmfplug2.dll
   Function: SfWMF_FreeTemplateListEx
   Address: 0041e240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_FreeTemplateListEx(struct tSFLIST * *) */

long SfWMF_FreeTemplateListEx(tSFLIST **param_1)

{
  long lVar1;
  
                    /* 0x1e240  17  ?SfWMF_FreeTemplateListEx@@YGJPAPAUtSFLIST@@@Z */
  lVar1 = SfWMF_FreeTemplateList(*param_1);
  FUN_0042bfb0((int *)*param_1);
  *param_1 = (tSFLIST *)0x0;
  return lVar1;
}


