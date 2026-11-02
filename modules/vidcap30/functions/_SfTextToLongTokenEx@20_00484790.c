/* Module: vidcap30.exe
   Function: _SfTextToLongTokenEx@20
   Address: 00484790
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfTextToLongTokenEx_20(char *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
                    /* 0x84790  644  _SfTextToLongTokenEx@20 */
  iVar1 = _SfTextToLongToken_8(param_1,&param_1);
  if ((iVar1 == 0) && (*param_1 != '\0')) {
    iVar2 = _ismbcspace((int)*param_1);
    if (iVar2 == 0) {
      iVar1 = param_2;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1;
  }
  if ((param_3 <= iVar1) && (param_3 = param_4, iVar1 <= param_4)) {
    param_3 = iVar1;
  }
  return param_3;
}


