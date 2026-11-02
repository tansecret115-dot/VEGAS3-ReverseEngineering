/* Module: vegas30k.dll
   Function: _SfGraph_CreateFromFile@8
   Address: 01028460
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT _SfGraph_CreateFromFile_8(IStream *param_1,HANDLE param_2)

{
  IStream *pIVar1;
  HANDLE hFile;
  BOOL BVar2;
  HGLOBAL pvVar3;
  int *lpBuffer;
  HRESULT HVar4;
  int iVar5;
  int *unaff_EBP;
  int *piVar6;
  SIZE_T local_4;
  
  hFile = param_2;
                    /* 0x28460  997  _SfGraph_CreateFromFile@8 */
  pIVar1 = param_1;
  param_1->lpVtbl = (IStreamVtbl *)0x0;
  local_4 = 0;
  BVar2 = ReadFile(param_2,&local_4,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 1;
  }
  pvVar3 = GlobalAlloc(2,local_4);
  lpBuffer = GlobalLock(pvVar3);
  if (lpBuffer == (int *)0x0) {
    SetFilePointer(hFile,local_4,(PLONG)0x0,1);
    return -0x7ff8fff2;
  }
  BVar2 = ReadFile(hFile,lpBuffer,local_4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar3);
    return 1;
  }
  HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_1);
  if (HVar4 == 0) {
    piVar6 = lpBuffer;
    HVar4 = (*param_1->lpVtbl->Write)(param_1,lpBuffer,local_4,(ULONG *)0x0);
    if (HVar4 != 0) {
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar3);
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      return HVar4;
    }
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar3);
    iVar5 = (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,0,0,0,0);
    if (iVar5 != 0) {
      (**(code **)(*piVar6 + 8))(piVar6);
      return iVar5;
    }
    HVar4 = _SfGraph_CreateFromStream_12(pIVar1,piVar6,0);
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  return HVar4;
}


