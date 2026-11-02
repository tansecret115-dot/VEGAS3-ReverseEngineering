/* Module: vegas30k.dll
   Function: _SfCreateDialogParam@20
   Address: 010c3b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfCreateDialogParam_20
               (undefined4 *param_1,LPCSTR param_2,HWND param_3,DLGPROC param_4,LPARAM param_5)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPCDLGTEMPLATEA lpTemplate;
  HWND pHVar1;
  
                    /* 0xc3b80  795  _SfCreateDialogParam@20 */
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],&DAT_00000005,param_2,
                                  *(WORD *)(param_1 + 0x4f)), hResInfo != (HRSRC)0x0)) &&
     (hResData = LoadResource((HMODULE)param_1[0x4e],hResInfo), hResData != (HGLOBAL)0x0)) {
    lpTemplate = LockResource(hResData);
    pHVar1 = CreateDialogIndirectParamA((HINSTANCE)param_1[0x4e],lpTemplate,param_3,param_4,param_5)
    ;
    if (pHVar1 != (HWND)0x0) {
      return;
    }
  }
  CreateDialogParamA((HINSTANCE)*param_1,param_2,param_3,param_4,param_5);
  return;
}


