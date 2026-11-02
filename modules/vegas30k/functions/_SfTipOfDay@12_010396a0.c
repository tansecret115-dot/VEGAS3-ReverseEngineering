/* Module: vegas30k.dll
   Function: _SfTipOfDay@12
   Address: 010396a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfTipOfDay_12(HWND param_1,int param_2,int param_3)

{
  HINSTANCE hInstance;
  LPCDLGTEMPLATEA hDialogTemplate;
  HGLOBAL pvVar1;
  uint uVar2;
  
                    /* 0x396a0  1233  _SfTipOfDay@12 */
  if ((param_3 != 0) || (*(int *)(param_2 + 0x10) != 0)) {
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 4)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 4);
    }
    hInstance = DAT_0120e5c0;
    if (param_1 != (HWND)0x0) {
      hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
    }
    if ((DAT_0120e334 & 1) == 0) {
      DAT_0120e334 = DAT_0120e334 | 1;
      _DAT_01205578 = _SfGetString2_8(DAT_0120e5c8,0x1066);
      _DAT_0120557c = 0;
      _DAT_01205580 = 0;
    }
    hDialogTemplate =
         (LPCDLGTEMPLATEA)_SfCreateDialogTemplate_12(DAT_0120e5c8,&DAT_01205560,&DAT_011dcb28);
    if (hDialogTemplate != (LPCDLGTEMPLATEA)0x0) {
      DialogBoxIndirectParamA(hInstance,hDialogTemplate,param_1,FUN_01039550,param_2);
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


