/* Module: sfcdi.dll
   Function: SfScsi_Close
   Address: 5bf0cc10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_Close(struct HSFSCSIPORT__ *) */

int SfScsi_Close(HSFSCSIPORT__ *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0xcc10  94  ?SfScsi_Close@@YGHPAUHSFSCSIPORT__@@@Z */
  if (param_1 == (HSFSCSIPORT__ *)0x0) {
    return 0;
  }
  FUN_5bf0c050((uint *)param_1);
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


