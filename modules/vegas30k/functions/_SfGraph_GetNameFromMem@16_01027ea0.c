/* Module: vegas30k.dll
   Function: _SfGraph_GetNameFromMem@16
   Address: 01027ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

HRESULT _SfGraph_GetNameFromMem_16(ULONG *param_1)

{
  ULONG cb;
  HRESULT HVar1;
  int iVar2;
  int *piVar3;
  IStream *This;
  IStream *pStm;
  IStream *local_114 [67];
  LPSTR pCStack_8;
  int iStack_4;
  
                    /* 0x27ea0  1000  _SfGraph_GetNameFromMem@16 */
  cb = *param_1;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_114);
  if (HVar1 == 0) {
    HVar1 = (*local_114[0]->lpVtbl->Write)(local_114[0],param_1 + 1,cb,(ULONG *)0x0);
    if (HVar1 != 0) {
      (*local_114[0]->lpVtbl->Release)();
      return HVar1;
    }
    pStm = (IStream *)0x0;
    This = (IStream *)0x0;
    piVar3 = (int *)0x0;
    iVar2 = (*local_114[0]->lpVtbl->Seek)(local_114[0],0,0);
    if (iVar2 != 0) {
      (*pStm->lpVtbl->Release)(pStm);
      return iVar2;
    }
    ReadClassStm(pStm,(CLSID *)&stack0xfffffedc);
    HVar1 = _SfAudio_CreateGraphObject_4(&stack0xfffffed4);
    if (HVar1 == 0) {
      HVar1 = (*This->lpVtbl->Seek)(This,pStm);
      if (HVar1 < 0) {
        (**(code **)(*piVar3 + 0x28))(piVar3,&stack0xfffffee4);
        if ((&stack0x00000000 == (undefined1 *)0x114) || ((short)local_114[0] != 0)) {
          WideCharToMultiByte(0,0,(LPCWSTR)local_114,-1,pCStack_8,iStack_4,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (pCStack_8 != (LPSTR)0x0) {
          *pCStack_8 = '\0';
        }
        pCStack_8[iStack_4 + -1] = '\0';
        (*This->lpVtbl->Release)(This);
        HVar1 = 0;
      }
      else {
        (**(code **)(*piVar3 + 0x24))(piVar3,&stack0xfffffee4);
        if ((&stack0x00000000 == (undefined1 *)0x114) || ((short)local_114[0] != 0)) {
          WideCharToMultiByte(0,0,(LPCWSTR)local_114,-1,pCStack_8,iStack_4,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (pCStack_8 != (LPSTR)0x0) {
          *pCStack_8 = '\0';
        }
        pCStack_8[iStack_4 + -1] = '\0';
        (*This->lpVtbl->Release)(This);
      }
    }
    (*pStm->lpVtbl->Release)(pStm);
  }
  return HVar1;
}


