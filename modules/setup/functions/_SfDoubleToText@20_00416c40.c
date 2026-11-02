/* Module: Setup.exe
   Function: _SfDoubleToText@20
   Address: 00416c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfDoubleToText_20(uchar *param_1,undefined4 param_2,undefined4 param_3,UINT param_4,
                       int param_5)

{
  int iVar1;
  uchar *puVar2;
  float10 extraout_ST1;
  longlong lVar3;
  longlong lVar4;
  uchar local_40;
  uchar local_3f [63];
  
                    /* 0x16c40  114  _SfDoubleToText@20 */
  puVar2 = &local_40;
  if (8 < param_4) {
    param_4 = 9;
  }
  lVar3 = ftol();
  lVar4 = ftol();
  if ((extraout_ST1 < (float10)_DAT_00439678) && ((lVar3 != 0 || (lVar4 != 0)))) {
    local_40 = '-';
    puVar2 = local_3f;
  }
  iVar1 = _SfDWordLongToText_16((uint)lVar3,(int)((ulonglong)lVar3 >> 0x20),puVar2,0);
  if (param_4 != 0) {
    _SfDWordLongToText_16
              ((uint)(lVar4 + *(int *)(&UNK_00439578 + param_4 * 4)),
               (int)((ulonglong)(lVar4 + *(int *)(&UNK_00439578 + param_4 * 4)) >> 0x20),
               puVar2 + iVar1,0);
    puVar2[iVar1] = '.';
  }
  if (param_5 != 0) {
    _SfFormatGroupDecimalNumber_16((LPCSTR)&local_40,(LPCSTR)param_1,0x40,param_4);
    return;
  }
  _mbscpy(param_1,&local_40);
  lstrlenA((LPCSTR)param_1);
  return;
}


