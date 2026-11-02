/* Module: Setup.exe
   Function: _SfHexToDWordTokenEx@20
   Address: 004176d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfHexToDWordTokenEx_20
               (LPCSTR param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x176d0  194  _SfHexToDWordTokenEx@20 */
  uVar1 = _SfHexToDWordToken_8(param_1,&param_1);
  if ((uVar1 == 0) && (*param_1 != '\0')) {
    iVar2 = _ismbcspace((int)*param_1);
    if (iVar2 == 0) {
      uVar1 = param_2;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1;
  }
  if ((param_3 <= uVar1) && (param_3 = param_4, uVar1 <= param_4)) {
    param_3 = uVar1;
  }
  return param_3;
}


