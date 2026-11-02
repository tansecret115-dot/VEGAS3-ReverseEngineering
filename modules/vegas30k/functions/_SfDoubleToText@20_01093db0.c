/* Module: vegas30k.dll
   Function: _SfDoubleToText@20
   Address: 01093db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfDoubleToText_20(uchar *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                       int param_5)

{
  int iVar1;
  uchar *puVar2;
  float10 extraout_ST1;
  longlong lVar3;
  longlong lVar4;
  uchar local_40;
  uchar local_3f [63];
  
                    /* 0x93db0  905  _SfDoubleToText@20 */
  puVar2 = &local_40;
  if (8 < param_4) {
    param_4 = 9;
  }
  lVar3 = ftol();
  lVar4 = ftol();
  if ((extraout_ST1 < (float10)_DAT_011db3f0) && ((lVar3 != 0 || (lVar4 != 0)))) {
    local_40 = '-';
    puVar2 = local_3f;
  }
  iVar1 = _SfDWordLongToText_16(lVar3,puVar2,0);
  if (param_4 != 0) {
    _SfDWordLongToText_16(lVar4 + *(int *)(&UNK_011e26e8 + param_4 * 4),puVar2 + iVar1,0);
    puVar2[iVar1] = '.';
  }
  if (param_5 != 0) {
    _SfFormatGroupDecimalNumber_16(&local_40,param_1,0x40,param_4);
    return;
  }
  _mbscpy(param_1,&local_40);
  lstrlenA((LPCSTR)param_1);
  return;
}


