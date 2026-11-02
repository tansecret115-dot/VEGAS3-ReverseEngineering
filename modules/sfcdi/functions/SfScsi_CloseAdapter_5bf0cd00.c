/* Module: sfcdi.dll
   Function: SfScsi_CloseAdapter
   Address: 5bf0cd00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_CloseAdapter(struct HSFSCSIADAPTER__ *) */

int SfScsi_CloseAdapter(HSFSCSIADAPTER__ *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0xcd00  95  ?SfScsi_CloseAdapter@@YGHPAUHSFSCSIADAPTER__@@@Z */
  if (param_1 == (HSFSCSIADAPTER__ *)0x0) {
    return 0;
  }
  FUN_5bf0c050((uint *)param_1);
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


