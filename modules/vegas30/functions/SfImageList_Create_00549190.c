/* Module: vegas30.exe
   Function: SfImageList_Create
   Address: 00549190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfImageList_Create(struct tSFIMAGELIST * *,struct tagBITMAPINFOHEADER *,void
   *,long,long) */

long SfImageList_Create(tSFIMAGELIST **param_1,tagBITMAPINFOHEADER *param_2,void *param_3,
                       long param_4,long param_5)

{
  tSFIMAGELIST *ptVar1;
  int iVar2;
  int iVar3;
  tSFIMAGELIST *ptVar4;
  
                    /* 0x149190  24
                       ?SfImageList_Create@@YGJPAPAUtSFIMAGELIST@@PAUtagBITMAPINFOHEADER@@PAXJJ@Z */
  *param_1 = (tSFIMAGELIST *)0x0;
  ptVar1 = calloc(1,0x448);
  if (ptVar1 == (tSFIMAGELIST *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    ptVar4 = ptVar1;
    for (iVar3 = 0x112; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)ptVar4 = 0;
      ptVar4 = ptVar4 + 4;
    }
    ptVar4 = ptVar1 + 0x444;
    iVar3 = _SfDibAlloc_28(ptVar4,0x1c,param_2->biWidth,param_2->biHeight,0,0,0);
    if ((-1 < iVar3) &&
       (iVar3 = _SfDibCopy_36(*(int *)ptVar4,0,0,0,param_2,param_3,0,0,3), -1 < iVar3)) {
      *(long *)ptVar1 = param_4;
      *(long *)(ptVar1 + 4) = param_5;
      *(int *)(ptVar1 + 8) = *(int *)(*(int *)ptVar4 + 8) / param_5;
      *(int *)(ptVar1 + 0xc) = *(int *)(*(int *)ptVar4 + 4) / param_4;
      *param_1 = ptVar1;
      iVar3 = FUN_00548ec0(ptVar1 + 0x10,param_4,param_5,0x1c);
      if (-1 < iVar3) {
        return iVar3;
      }
    }
  }
  if (*(int *)(ptVar1 + 0x444) != 0) {
    _SfDibFree_8(*(int *)(ptVar1 + 0x444),0);
  }
  FUN_00548f50(ptVar1 + 0x10);
  for (iVar2 = 0x112; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)ptVar1 = 0;
    ptVar1 = ptVar1 + 4;
  }
  return iVar3;
}


