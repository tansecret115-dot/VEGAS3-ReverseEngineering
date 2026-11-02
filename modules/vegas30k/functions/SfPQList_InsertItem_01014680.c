/* Module: vegas30k.dll
   Function: SfPQList_InsertItem
   Address: 01014680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfPQList_InsertItem(struct tSFLIST *,int,struct cditemtag *,char *) */

int SfPQList_InsertItem(tSFLIST *param_1,int param_2,cditemtag *param_3,char *param_4)

{
  cditemtag *pcVar1;
  int iVar2;
  uchar *_Dest;
  cditemtag *pcVar3;
  
                    /* 0x14680  482  ?SfPQList_InsertItem@@YGHPAUtSFLIST@@HPAUcditemtag@@PAD@Z */
  if (param_4 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA(param_4);
    iVar2 = iVar2 + 1;
  }
  iVar2 = _SfList_AllocAndInsertItem_20(param_1,0,iVar2 + 0x28,param_2,0);
  if (iVar2 != 0) {
    return -1;
  }
  if (param_2 < 0) {
    if (param_1 == (tSFLIST *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1;
    }
    param_2 = iVar2 + -1;
  }
  pcVar1 = *(cditemtag **)(*(int *)(param_1 + 8) + param_2 * 4);
  pcVar3 = pcVar1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar3 = pcVar3 + 4;
  }
  _Dest = (uchar *)SfPQList_GetItemText(pcVar1);
  _mbscpy(_Dest,(uchar *)param_4);
  return param_2;
}


