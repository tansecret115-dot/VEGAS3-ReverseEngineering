/* Module: Setup.exe
   Function: _SfDialogTemplateFromRCID@12
   Address: 0041c820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDialogTemplateFromRCID_12(undefined4 *param_1,LPCSTR param_2,undefined4 *param_3)

{
  HRSRC pHVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  undefined4 uVar3;
  
                    /* 0x1c820  104  _SfDialogTemplateFromRCID@12 */
  pHVar1 = (HRSRC)_SfFindResource_12(param_1,param_2,(LPCSTR)0x5);
  if (pHVar1 == (HRSRC)0x0) {
    *param_3 = 0;
    return 0;
  }
  hResData = (HGLOBAL)_SfLoadResource_8(param_1,pHVar1);
  if (hResData != (HGLOBAL)0x0) {
    pvVar2 = LockResource(hResData);
    uVar3 = _SfSizeofResource_8(param_1,pHVar1);
    *param_3 = pvVar2;
    return uVar3;
  }
  *param_3 = 0;
  return 0;
}


