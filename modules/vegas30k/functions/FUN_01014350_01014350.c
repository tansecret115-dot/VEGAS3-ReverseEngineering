/* Module: vegas30k.dll
   Function: FUN_01014350
   Address: 01014350
   Source: Ghidra pseudocode (Stage 10 batch) */


cditemtag * FUN_01014350(uint *param_1,uint param_2,cditemtag *param_3,uchar *param_4)

{
  cditemtag *pcVar1;
  int iVar2;
  uchar *_Dest;
  
  if ((param_1 == (uint *)0x0) || (*param_1 == 0)) {
    return param_3;
  }
  if (*param_1 <= param_2) {
    return param_3;
  }
  if (param_4 == (uchar *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_4);
    iVar2 = iVar2 + 1;
  }
  iVar2 = _SfList_ReAllocItem_12(param_1,param_2,iVar2 + 0x28);
  if (iVar2 != 0) {
    return (cditemtag *)0x0;
  }
  pcVar1 = *(cditemtag **)(param_1[2] + param_2 * 4);
  if (param_4 == (uchar *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_4);
    iVar2 = iVar2 + 1;
  }
  *(int *)(pcVar1 + 0x24) = iVar2;
  _Dest = (uchar *)SfPQList_GetItemText(pcVar1);
  _mbscpy(_Dest,param_4);
  return pcVar1;
}


