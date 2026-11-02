/* Module: vegas30k.dll
   Function: _SfGraph_CreateFromMem@16
   Address: 01028200
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT _SfGraph_CreateFromMem_16(IStream *param_1,ULONG *param_2)

{
  IStream *pIVar1;
  ULONG *pUVar2;
  HRESULT HVar3;
  int *unaff_EDI;
  int *piVar4;
  ULONG cb;
  
  pUVar2 = param_2;
                    /* 0x28200  998  _SfGraph_CreateFromMem@16 */
  pIVar1 = param_1;
  param_1->lpVtbl = (IStreamVtbl *)0x0;
  cb = *param_2;
  HVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_1);
  if (HVar3 == 0) {
    HVar3 = (*param_1->lpVtbl->Write)(param_1,pUVar2 + 1,cb,(ULONG *)0x0);
    if (HVar3 != 0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      return HVar3;
    }
    piVar4 = (int *)0x0;
    HVar3 = (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,0,0,0);
    if (HVar3 == 0) {
      HVar3 = _SfGraph_CreateFromStream_12(pIVar1,piVar4,cb);
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return HVar3;
}


