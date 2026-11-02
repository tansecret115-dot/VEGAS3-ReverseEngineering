/* Module: vidcap30.exe
   Function: _SfDialogTemplateFromRCID@12
   Address: 004809b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDialogTemplateFromRCID_12(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  undefined4 uVar3;
  
                    /* 0x809b0  289  _SfDialogTemplateFromRCID@12 */
  iVar1 = _SfFindResource_12(param_1,param_2,5);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0;
  }
  hResData = (HGLOBAL)_SfLoadResource_8(param_1,iVar1);
  if (hResData != (HGLOBAL)0x0) {
    pvVar2 = LockResource(hResData);
    uVar3 = _SfSizeofResource_8(param_1,iVar1);
    *param_3 = pvVar2;
    return uVar3;
  }
  *param_3 = 0;
  return 0;
}


