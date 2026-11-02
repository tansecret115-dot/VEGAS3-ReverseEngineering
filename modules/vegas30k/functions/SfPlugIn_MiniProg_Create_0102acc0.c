/* Module: vegas30k.dll
   Function: SfPlugIn_MiniProg_Create
   Address: 0102acc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __stdcall SfPlugIn_MiniProg_Create(struct HSFLANG__ *,long) */

void SfPlugIn_MiniProg_Create(HSFLANG__ *param_1,long param_2)

{
  LPCDLGTEMPLATEA lpTemplate;
  HGLOBAL pvVar1;
  HWND hWnd;
  
                    /* 0x2acc0  486  ?SfPlugIn_MiniProg_Create@@YGXPAUHSFLANG__@@J@Z */
  hWnd = (HWND)0x0;
  if (param_2 == -1) {
    if ((DAT_012099ec & 1) == 0) {
      DAT_012099ec = DAT_012099ec | 1;
      _DAT_012041c8 = _SfGetString2_8(DAT_0120e5c8,0x1121);
      _DAT_012041cc = 0x50020000;
      _DAT_012041d0 = 4;
      _DAT_012041d4 = 7;
      _DAT_012041d6 = 0x17;
      _DAT_012041d8 = 0xac;
      _DAT_012041da = 8;
      _DAT_012041dc = 19999;
      _DAT_012041e0 = 0x82;
      _DAT_012041e4 = &DAT_011db13c;
    }
    lpTemplate = (LPCDLGTEMPLATEA)
                 _SfCreateDialogTemplate_12(DAT_0120e5c8,&DAT_011dbbe0,&DAT_012041b0);
    if (lpTemplate != (LPCDLGTEMPLATEA)0x0) {
      hWnd = CreateDialogIndirectParamA(DAT_0120e5c0,lpTemplate,(HWND)0x0,FUN_0102ade0,0);
      pvVar1 = GlobalHandle(lpTemplate);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(lpTemplate);
      GlobalFree(pvVar1);
    }
  }
  else {
    hWnd = (HWND)_SfCreateDialogParam_20(param_1,param_2 & 0xffff,0,FUN_0102ade0,0);
  }
  DAT_012099f0 = hWnd;
  if (hWnd != (HWND)0x0) {
    UpdateWindow(hWnd);
  }
  return;
}


