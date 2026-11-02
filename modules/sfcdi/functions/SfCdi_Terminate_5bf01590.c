/* Module: sfcdi.dll
   Function: SfCdi_Terminate
   Address: 5bf01590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCdi_Terminate(struct HINSTANCE__ *) */

int SfCdi_Terminate(HINSTANCE__ *param_1)

{
                    /* 0x1590  75  ?SfCdi_Terminate@@YGHPAUHINSTANCE__@@@Z */
  FUN_5bf07210();
  FUN_5bf07ee0();
  FUN_5bf08350();
  SfScsi_Terminate();
  FUN_5bf0eef0();
  FUN_5bf0f600();
  if (DAT_5bf65ff0 != (int *)0x0) {
    FUN_5bf2b040(DAT_5bf65ff0);
  }
  DAT_5bf65ff0 = (int *)0x0;
  if (DAT_5bf65ff4 != (int *)0x0) {
    FUN_5bf2b040(DAT_5bf65ff4);
  }
  DAT_5bf65ff4 = (int *)0x0;
  FUN_5bf286b0(DAT_5bf65fc4);
  DAT_5bf65fc4 = (int *)0x0;
  FUN_5bf22510(DAT_5bf65fc0);
  DAT_5bf65fc0 = (void *)0x0;
  return 1;
}


