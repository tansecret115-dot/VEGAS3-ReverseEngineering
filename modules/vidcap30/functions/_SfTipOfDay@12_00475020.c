/* Module: vidcap30.exe
   Function: _SfTipOfDay@12
   Address: 00475020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfTipOfDay_12(HWND param_1,int param_2,int param_3)

{
  HINSTANCE hInstance;
  LPCDLGTEMPLATEA hDialogTemplate;
  HGLOBAL pvVar1;
  uint uVar2;
  
                    /* 0x75020  653  _SfTipOfDay@12 */
  if ((param_3 != 0) || (*(int *)(param_2 + 0x10) != 0)) {
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 4)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 4);
    }
    hInstance = DAT_005c16d0;
    if (param_1 != (HWND)0x0) {
      hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
    }
    if ((DAT_005bc42c & 1) == 0) {
      DAT_005bc42c = DAT_005bc42c | 1;
      _DAT_005b65a0 = _SfGetString2_8(DAT_005c16d8,0x1066);
      _DAT_005b65a4 = 0;
      _DAT_005b65a8 = 0;
    }
    hDialogTemplate =
         (LPCDLGTEMPLATEA)_SfCreateDialogTemplate_12(DAT_005c16d8,&DAT_005b6588,&DAT_005935e0);
    if (hDialogTemplate != (LPCDLGTEMPLATEA)0x0) {
      DialogBoxIndirectParamA(hInstance,hDialogTemplate,param_1,(DLGPROC)&LAB_00474ed0,param_2);
      pvVar1 = GlobalHandle(hDialogTemplate);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(hDialogTemplate);
      GlobalFree(pvVar1);
    }
    uVar2 = *(int *)(param_2 + 0xc) + 1;
    *(uint *)(param_2 + 0xc) = uVar2;
    if (*(uint *)(param_2 + 8) < uVar2) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 4);
    }
  }
  return;
}


