/* Module: vegas30k.dll
   Function: _SfTextToLongLongTokenEx@32
   Address: 010946c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8
_SfTextToLongLongTokenEx_32
          (char *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7,
          undefined4 *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x946c0  1222  _SfTextToLongLongTokenEx@32 */
  uVar1 = _SfTextToLongToken_8(param_1,&param_1);
  iVar3 = (int)uVar1 >> 0x1f;
  if (((uVar1 == 0) && (*param_1 != '\0')) && (iVar2 = _ismbcspace((int)*param_1), iVar2 == 0)) {
    iVar3 = param_3;
    uVar1 = param_2;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_1;
  }
  if (((param_5 < iVar3) || ((param_5 <= iVar3 && (param_4 <= uVar1)))) &&
     ((iVar3 < param_7 ||
      ((param_4 = param_6, param_5 = param_7, iVar3 <= param_7 &&
       (param_4 = param_6, param_5 = param_7, uVar1 <= param_6)))))) {
    param_4 = uVar1;
    param_5 = iVar3;
  }
  return CONCAT44(param_5,param_4);
}


