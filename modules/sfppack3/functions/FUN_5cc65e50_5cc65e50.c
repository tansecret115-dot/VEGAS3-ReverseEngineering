/* Module: sfppack3.dll
   Function: FUN_5cc65e50
   Address: 5cc65e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cc65e50(uchar *param_1,undefined4 param_2,undefined4 param_3,UINT param_4,int param_5)

{
  int iVar1;
  uchar *puVar2;
  float10 extraout_ST1;
  longlong lVar3;
  longlong lVar4;
  uchar local_40;
  uchar local_3f [63];
  
  puVar2 = &local_40;
  if (8 < param_4) {
    param_4 = 9;
  }
  lVar3 = ftol();
  lVar4 = ftol();
  if ((extraout_ST1 < (float10)_DAT_5cc87cd8) && ((lVar3 != 0 || (lVar4 != 0)))) {
    local_40 = '-';
    puVar2 = local_3f;
  }
  iVar1 = FUN_5cc65d90((uint)lVar3,(int)((ulonglong)lVar3 >> 0x20),puVar2,0);
  if (param_4 != 0) {
    FUN_5cc65d90((uint)(lVar4 + *(int *)(&UNK_5cc8d7fc + param_4 * 4)),
                 (int)((ulonglong)(lVar4 + *(int *)(&UNK_5cc8d7fc + param_4 * 4)) >> 0x20),
                 puVar2 + iVar1,0);
    puVar2[iVar1] = '.';
  }
  if (param_5 != 0) {
    FUN_5cc65a20((LPCSTR)&local_40,(LPCSTR)param_1,0x40,param_4);
    return;
  }
  _mbscpy(param_1,&local_40);
  lstrlenA((LPCSTR)param_1);
  return;
}


