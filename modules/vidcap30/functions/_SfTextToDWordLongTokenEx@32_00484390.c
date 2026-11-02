/* Module: vidcap30.exe
   Function: _SfTextToDWordLongTokenEx@32
   Address: 00484390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004843ec) */
/* WARNING: Removing unreachable block (ram,0x004843fe) */

ulonglong _SfTextToDWordLongTokenEx_32
                    (char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
                    /* 0x84390  636  _SfTextToDWordLongTokenEx@32 */
  uVar3 = _SfTextToDWordLongToken_8(param_1,&param_1);
  if ((uVar3 == 0) && (*param_1 != '\0')) {
    iVar2 = _ismbcspace((int)*param_1);
    if (iVar2 == 0) {
      uVar3 = CONCAT44(param_3,param_2);
    }
  }
  uVar1 = CONCAT44(param_5,param_4);
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_1;
  }
  if ((CONCAT44(param_5,param_4) <= uVar3) && (uVar1 = uVar3, CONCAT44(param_7,param_6) < uVar3)) {
    uVar1 = CONCAT44(param_7,param_6);
  }
  return uVar1;
}


