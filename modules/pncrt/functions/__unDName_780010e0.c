/* Module: pncrt.dll
   Function: __unDName
   Address: 780010e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl
__unDName(undefined1 *param_1,char *param_2,int param_3,int param_4,undefined *param_5,
         undefined2 param_6)

{
  DName *pDVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90 [2];
  uint local_88 [2];
  uint local_80 [2];
  undefined4 local_78 [11];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined4 local_3c [11];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
                    /* 0x10e0  147  __unDName */
  if (param_4 == 0) {
    return (undefined1 *)0x0;
  }
  _DAT_78041a90 = param_4;
  DAT_78041a94 = (code *)param_5;
  _DAT_78041aa0 = 0;
  DAT_78041a98 = (undefined4 *)0x0;
  _DAT_78041a9c = (undefined4 *)0x0;
  FUN_78006450(local_4c,3);
  FUN_78006450(local_44,1);
  local_78[0] = 0xffffffff;
  FUN_78006450(local_10,3);
  FUN_78006450(local_8,1);
  DAT_78041ab4 = param_1;
  DAT_78041a88 = local_78;
  DAT_78041ab8 = param_3;
  DAT_78041aa4 = local_3c;
  local_9c = local_9c & 0xffffff80;
  local_3c[0] = 0xffffffff;
  DAT_78041ab0 = param_2;
  local_94 = local_94 & 0xffffff80;
  DAT_78041aac = param_2;
  _DAT_78041abc = CONCAT22(DAT_78041abc_2,param_6);
  local_a0 = 0;
  local_98 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '?') {
      if (param_2[1] == '@') {
        DAT_78041aac = param_2 + 2;
        pDVar1 = (DName *)FUN_78001320(local_80);
        puVar3 = local_88;
        puVar2 = FUN_780062b0(local_90,"CV: ");
        FUN_78006750(puVar2,puVar3,pDVar1);
        puVar3 = local_88;
      }
      else {
        if (param_2[1] != '$') goto LAB_78001230;
        puVar3 = FUN_780020d0(local_90);
      }
    }
    else {
LAB_78001230:
      puVar3 = FUN_78001320(local_90);
    }
    FUN_78006b80(&local_a0,puVar3);
  }
  if ((local_9c & 0xf) == 3) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    if (((*DAT_78041aac == '\0') || ((_DAT_78041abc & 0x1000) != 0)) && ((local_9c & 0xf) != 1)) {
      FUN_78006b80(&local_98,&local_a0);
    }
    else {
      FUN_78006b50(&local_98,DAT_78041ab0);
    }
    if (DAT_78041ab4 == (undefined1 *)0x0) {
      iVar4 = FUN_78006500((DName *)&local_98);
      DAT_78041ab8 = iVar4 + 1;
      DAT_78041ab4 = (undefined1 *)FUN_78006050(&DAT_78041a90,DAT_78041ab8,1);
      puVar5 = DAT_78041ab4;
      if (DAT_78041ab4 == (undefined1 *)0x0) goto LAB_780012d6;
    }
    FUN_78006530(&local_98,DAT_78041ab4,DAT_78041ab8);
    puVar5 = DAT_78041ab4;
  }
LAB_780012d6:
  puVar2 = DAT_78041a98;
  if (DAT_78041a94 != (code *)0x0) {
    while (_DAT_78041a9c = puVar2, DAT_78041a98 = _DAT_78041a9c, _DAT_78041a9c != (undefined4 *)0x0)
    {
      DAT_78041a98 = (undefined4 *)*_DAT_78041a9c;
      (*DAT_78041a94)(_DAT_78041a9c);
      puVar2 = DAT_78041a98;
    }
  }
  return puVar5;
}


