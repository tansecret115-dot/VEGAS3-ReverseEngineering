/* Module: vegas30k.dll
   Function: _SfGraph_SaveToFile@12
   Address: 01028290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

HRESULT _SfGraph_SaveToFile_12(void)

{
  HRESULT HVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID lpBuffer;
  int *piVar4;
  IStream **hFile;
  LPDWORD lpNumberOfBytesWritten;
  int *piVar5;
  IStream *pIStack_34;
  int iVar6;
  IStream *local_10;
  undefined4 local_c;
  int aiStack_8 [2];
  
                    /* 0x28290  1003  _SfGraph_SaveToFile@12 */
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_10);
  if (HVar1 == 0) {
    local_c = 0;
    pIStack_34 = (IStream *)0x10282c5;
    HVar1 = (*local_10->lpVtbl->Write)(local_10,&local_c,4,(ULONG *)0x0);
    if (HVar1 != 0) {
      (*local_10->lpVtbl->Release)();
      return HVar1;
    }
    iVar2 = _SfGraph_SaveToStream_8();
    if (iVar2 != 0) {
      (*local_10->lpVtbl->Release)();
      return iVar2;
    }
    piVar4 = aiStack_8;
    aiStack_8[0] = 0;
    aiStack_8[1] = 0;
    iVar6 = 0;
    pIStack_34 = local_10;
    iVar2 = (*local_10->lpVtbl->Seek)();
    if (iVar2 != 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      return iVar2;
    }
    piVar5 = (int *)0x0;
    lpNumberOfBytesWritten = (LPDWORD)0x0;
    iVar2 = (**(code **)(*piVar4 + 0x14))(piVar4,0,0,0);
    if (iVar2 != 0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      return iVar2;
    }
    pIStack_34 = (IStream *)(iVar6 + -4);
    hFile = &pIStack_34;
    (**(code **)(*piVar5 + 0x10))(piVar5,hFile,4,0);
    pvVar3 = GlobalAlloc(2,(SIZE_T)lpNumberOfBytesWritten);
    lpBuffer = GlobalLock(pvVar3);
    if (lpBuffer == (LPVOID)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      return -0x7ff8fff2;
    }
    piVar5 = (int *)0x0;
    (**(code **)(*piVar4 + 0x14))(piVar4,0,0,0);
    iVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,lpBuffer,hFile,lpNumberOfBytesWritten);
    if (iVar2 != 0) {
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar3);
      (**(code **)(*piVar4 + 8))(piVar4);
      return iVar2;
    }
    WriteFile(hFile,lpBuffer,*lpNumberOfBytesWritten,lpNumberOfBytesWritten,(LPOVERLAPPED)0x0);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar3);
    (**(code **)(*piVar4 + 8))(piVar4);
    HVar1 = 0;
  }
  return HVar1;
}


