/* Module: Setup.exe
   Function: _SfTextToDWordLongTokenEx@32
   Address: 00417030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041708c) */
/* WARNING: Removing unreachable block (ram,0x0041709e) */

ulonglong _SfTextToDWordLongTokenEx_32
                    (LPCSTR param_1,ulonglong param_2,uint param_3,undefined4 param_4,uint param_5,
                    undefined4 param_6,undefined4 *param_7)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
                    /* 0x17030  341  _SfTextToDWordLongTokenEx@32 */
  uVar3 = _SfTextToDWordLongToken_8(param_1,&param_1);
  if (((uVar3 == 0) && (*param_1 != '\0')) && (iVar2 = _ismbcspace((int)*param_1), iVar2 == 0)) {
    uVar3 = param_2;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_1;
  }
  uVar1 = CONCAT44(param_4,param_3);
  if ((CONCAT44(param_4,param_3) <= uVar3) && (uVar1 = uVar3, CONCAT44(param_6,param_5) < uVar3)) {
    uVar1 = CONCAT44(param_6,param_5);
  }
  return uVar1;
}


