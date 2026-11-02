/* Module: vegas30k.dll
   Function: FUN_0105a990
   Address: 0105a990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0105a990(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = DAT_0120e878;
  if (DAT_0120e878 != (int *)0x0) {
    iVar6 = *DAT_0120e878 + -1;
    if (-1 < iVar6) {
      piVar1 = DAT_0120e878 + 1;
      piVar3 = DAT_0120e878 + 2;
      do {
        iVar5 = *piVar1 * iVar6 + *piVar3;
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar5 + 8));
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar5 + 8));
        GlobalFree(pvVar4);
        _SfList_DeleteList_16(piVar2,iVar6,1,0);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    _SfList_Destroy_4(piVar2);
    DAT_0120e878 = (int *)0x0;
  }
  return;
}


