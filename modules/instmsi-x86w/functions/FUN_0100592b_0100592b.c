/* Module: InstMsi-x86w.exe
   Function: FUN_0100592b
   Address: 0100592b
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0100592b(HMODULE param_1,LPCSTR param_2,HWND param_3,DLGPROC param_4,int param_5,int param_6
                )

{
  HRSRC hResInfo;
  LPCDLGTEMPLATEA hDialogTemplate;
  int iVar1;
  
  iVar1 = -1;
  hResInfo = FindResourceA(param_1,param_2,(LPCSTR)0x5);
  if ((hResInfo != (HRSRC)0x0) &&
     (hDialogTemplate = LoadResource(param_1,hResInfo), hDialogTemplate != (LPCDLGTEMPLATEA)0x0)) {
    if (param_5 == 0) {
      param_5 = 0;
    }
    iVar1 = DialogBoxIndirectParamA(param_1,hDialogTemplate,param_3,param_4,param_5);
    FreeResource(hDialogTemplate);
  }
  if (iVar1 == -1) {
    FUN_01003cb8((HWND)0x0,0x4fb,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    iVar1 = param_6;
  }
  return iVar1;
}


