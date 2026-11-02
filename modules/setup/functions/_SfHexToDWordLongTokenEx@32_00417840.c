/* Module: Setup.exe
   Function: _SfHexToDWordLongTokenEx@32
   Address: 00417840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8
_SfHexToDWordLongTokenEx_32
          (LPCSTR param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,undefined4 *param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0x17840  192  _SfHexToDWordLongTokenEx@32 */
  uVar1 = _SfHexToDWordToken_8(param_1,&param_1);
  uVar3 = 0;
  if (((uVar1 == 0) && (*param_1 != '\0')) && (iVar2 = _ismbcspace((int)*param_1), iVar2 == 0)) {
    uVar3 = param_3;
    uVar1 = param_2;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_1;
  }
  if (((param_5 < uVar3) || ((param_5 <= uVar3 && (param_4 <= uVar1)))) &&
     ((uVar3 < param_7 ||
      ((param_4 = param_6, param_5 = param_7, uVar3 <= param_7 &&
       (param_4 = param_6, param_5 = param_7, uVar1 <= param_6)))))) {
    param_4 = uVar1;
    param_5 = uVar3;
  }
  return CONCAT44(param_5,param_4);
}


