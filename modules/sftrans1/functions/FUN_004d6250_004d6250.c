/* Module: sftrans1.dll
   Function: FUN_004d6250
   Address: 004d6250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6250(uchar *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

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
  if ((extraout_ST1 < (float10)_DAT_00555910) && ((lVar3 != 0 || (lVar4 != 0)))) {
    local_40 = '-';
    puVar2 = local_3f;
  }
  iVar1 = FUN_004d6190(lVar3,puVar2,0);
  if (param_4 != 0) {
    FUN_004d6190(lVar4 + *(int *)(&UNK_0056af88 + param_4 * 4),puVar2 + iVar1,0);
    puVar2[iVar1] = '.';
  }
  if (param_5 != 0) {
    FUN_004d5e20(&local_40,param_1,0x40,param_4);
    return;
  }
  _mbscpy(param_1,&local_40);
  lstrlenA((LPCSTR)param_1);
  return;
}


