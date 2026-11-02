/* Module: vegas30k.dll
   Function: _SfGraph_SaveToMem@12
   Address: 01028050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

HRESULT _SfGraph_SaveToMem_12(undefined4 param_1,undefined4 *param_2,IStream *param_3)

{
  IStream *pcbRead;
  HRESULT HVar1;
  int iVar2;
  HGLOBAL pvVar3;
  IStreamVtbl *pv;
  IStream *unaff_EDI;
  IStream *cb;
  int *piVar4;
  IStream *pIStack_34;
  IStream *pIStack_30;
  undefined4 local_c;
  IStream *pIStack_8;
  undefined4 uStack_4;
  
                    /* 0x28050  1004  _SfGraph_SaveToMem@12 */
  pcbRead = param_3;
  *param_2 = 0;
  param_3->lpVtbl = (IStreamVtbl *)0x0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_3);
  if (HVar1 == 0) {
    local_c = 0;
    pIStack_30 = (IStream *)0x1028092;
    HVar1 = (*param_3->lpVtbl->Write)(param_3,&local_c,4,(ULONG *)0x0);
    if (HVar1 != 0) {
      (*param_3->lpVtbl->Release)();
      return HVar1;
    }
    iVar2 = _SfGraph_SaveToStream_8();
    if (iVar2 != 0) {
      (*param_3->lpVtbl->Release)();
      return iVar2;
    }
    pIStack_8 = (IStream *)0x0;
    uStack_4 = 0;
    pIStack_30 = param_3;
    pIStack_34 = (IStream *)0x10280f2;
    iVar2 = (*param_3->lpVtbl->Seek)();
    if (iVar2 != 0) {
      pIStack_34 = pIStack_8;
      (*pIStack_8->lpVtbl->Release)();
      return iVar2;
    }
    pIStack_34 = (IStream *)0x0;
    piVar4 = (int *)0x0;
    cb = pIStack_8;
    iVar2 = (*pIStack_8->lpVtbl->Seek)(pIStack_8,0,0,0);
    if (iVar2 != 0) {
      (*unaff_EDI->lpVtbl->Release)(unaff_EDI);
      return iVar2;
    }
    pIStack_34 = pIStack_30 + -1;
    (*unaff_EDI->lpVtbl->Write)(unaff_EDI,&pIStack_34,4,(ULONG *)0x0);
    pvVar3 = GlobalAlloc(2,(SIZE_T)pIStack_30);
    pv = GlobalLock(pvVar3);
    if (pv == (IStreamVtbl *)0x0) {
      (*unaff_EDI->lpVtbl->Release)(unaff_EDI);
      return -0x7ff8fff2;
    }
    (*unaff_EDI->lpVtbl->Seek)(unaff_EDI,0,0,0,0);
    HVar1 = (*pIStack_30->lpVtbl->Read)(pIStack_30,pv,(ULONG)cb,(ULONG *)pcbRead);
    if (HVar1 != 0) {
      pvVar3 = GlobalHandle(pv);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pv);
      GlobalFree(pvVar3);
      (**(code **)(*piVar4 + 8))(piVar4);
      return HVar1;
    }
    cb->lpVtbl = pv;
    (**(code **)(*piVar4 + 8))(piVar4);
    HVar1 = 0;
  }
  return HVar1;
}


