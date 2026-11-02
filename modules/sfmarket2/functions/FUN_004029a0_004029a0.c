/* Module: sfmarket2.dll
   Function: FUN_004029a0
   Address: 004029a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004029a0(int param_1)

{
  LPCVOID pMem;
  HANDLE hHandle;
  DWORD DVar1;
  HRESULT HVar2;
  int iVar3;
  BYTE *pBVar4;
  HGLOBAL pvVar5;
  ULARGE_INTEGER *unaff_EDI;
  uint uVar6;
  LPSTREAM local_10;
  LPSTREAM pIStack_c;
  HGLOBAL local_8;
  DWORD DStack_4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"SfMarket Shared Global State Guard");
    if (hHandle != (HANDLE)0x0) {
      DVar1 = WaitForSingleObject(hHandle,0xffffffff);
      if (DVar1 != 0x102) {
        local_10 = (IStream *)0x0;
        HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_10);
        if (-1 < HVar2) {
          iVar3 = FUN_0040fb60((void *)(param_1 + 0x1ba0),0,(int *)local_10);
          if (-1 < iVar3) {
            HVar2 = (*local_10->lpVtbl->Seek)
                              (local_10,(LARGE_INTEGER)0x200000000,(DWORD)&local_8,unaff_EDI);
            if (-1 < HVar2) {
              local_8 = (HGLOBAL)0x0;
              HVar2 = GetHGlobalFromStream(pIStack_c,&local_8);
              if (-1 < HVar2) {
                pBVar4 = GlobalLock(local_8);
                uVar6 = 2;
                iVar3 = FUN_00401340();
                FUN_004292a0(iVar3,uVar6,pBVar4,DStack_4);
                GlobalUnlock(local_8);
              }
            }
          }
          (*pIStack_c->lpVtbl->Release)(pIStack_c);
          pIStack_c = (LPSTREAM)0x0;
        }
        ReleaseMutex(hHandle);
      }
      CloseHandle(hHandle);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pMem = *(LPCVOID *)(param_1 + 0x1c);
  if (pMem != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(pMem);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pMem);
    GlobalFree(pvVar5);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int **)(param_1 + 0x1be4) != (int *)0x0) {
    FUN_00427800(*(int **)(param_1 + 0x1be4),0,-1,0);
    FUN_00428a70(*(int **)(param_1 + 0x1be4));
  }
  if (*(HKEY *)(param_1 + 0x1d0c) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(param_1 + 0x1d0c));
    *(undefined4 *)(param_1 + 0x1d0c) = 0;
  }
  FUN_0040f630((undefined4 *)(param_1 + 0x1ba0));
  return;
}


