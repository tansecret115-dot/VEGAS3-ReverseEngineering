/* Module: wavplug.dll
   Function: FUN_5f3968b0
   Address: 5f3968b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3968b0(undefined4 *param_1,LPCSTR param_2,HWND param_3,DLGPROC param_4,LPARAM param_5)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPCDLGTEMPLATEA lpTemplate;
  HWND pHVar1;
  
  if (((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
      (hResInfo = FindResourceExA((HMODULE)param_1[0x4e],(LPCSTR)0x5,param_2,
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


