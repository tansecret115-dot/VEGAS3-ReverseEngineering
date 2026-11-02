/* Module: wmfplug2.dll
   Function: FUN_004446b0
   Address: 004446b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

int FUN_004446b0(undefined4 param_1,IStream *param_2,DWORD param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPCSTR pCVar3;
  LSTATUS LVar4;
  LPBYTE lpData;
  HANDLE hFile;
  LPVOID lpBuffer;
  BOOL BVar5;
  ULARGE_INTEGER *unaff_ESI;
  DWORD local_10;
  LPCSTR local_c;
  DWORD local_8;
  int *local_4;
  
  iVar1 = FUN_004414b0((LPCWSTR)param_2);
  if (iVar1 < 0) {
    return -0x7fff0001;
  }
  local_8 = 0x104;
  pvVar2 = GlobalAlloc(0x40,0x104);
  pCVar3 = GlobalLock(pvVar2);
  local_c = pCVar3;
  LVar4 = RegEnumValueA((HKEY)0x0,param_3,pCVar3,&local_8,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                        (LPDWORD)0x0);
  if (LVar4 == 0) {
    LVar4 = RegQueryValueExA((HKEY)0x0,pCVar3,(LPDWORD)0x0,&local_10,(LPBYTE)0x0,&param_3);
    if ((LVar4 == 0) && (1 < param_3)) {
      pvVar2 = GlobalAlloc(0x42,param_3);
      lpData = GlobalLock(pvVar2);
      if (lpData == (LPBYTE)0x0) {
        iVar1 = -0x7ff8fff2;
        goto LAB_0044492c;
      }
      param_2 = (IStream *)0x0;
      LVar4 = RegQueryValueExA((HKEY)0x0,local_c,(LPDWORD)0x0,&local_10,lpData,&param_3);
      if ((LVar4 == 0) && (1 < param_3)) {
        if (local_10 == 1) {
          hFile = CreateFileA((LPCSTR)lpData,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                              (HANDLE)0x0);
          if (hFile == (HANDLE)0xffffffff) {
            iVar1 = -0x7ffb1ff9;
          }
          else {
            param_3 = SetFilePointer(hFile,0,(PLONG)0x0,2);
            SetFilePointer(hFile,0,(PLONG)0x0,0);
            pvVar2 = GlobalAlloc(2,param_3);
            lpBuffer = GlobalLock(pvVar2);
            if (lpBuffer != (LPVOID)0x0) {
              BVar5 = ReadFile(hFile,lpBuffer,param_3,(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
              if (BVar5 != 0) {
                iVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_2);
                if (-1 < iVar1) {
                  iVar1 = (*param_2->lpVtbl->Write)(param_2,lpBuffer,param_3,(ULONG *)0x0);
                  if (iVar1 < 0) {
                    (*param_2->lpVtbl->Release)(param_2);
                    param_2 = (IStream *)0x0;
                  }
                }
              }
              pvVar2 = GlobalHandle(lpBuffer);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(lpBuffer);
              GlobalFree(pvVar2);
            }
            CloseHandle(hFile);
          }
        }
        else {
          if (local_10 != 3) goto LAB_004448c0;
          iVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_2);
          if (-1 < iVar1) {
            iVar1 = (*param_2->lpVtbl->Write)(param_2,lpData,param_3,(ULONG *)0x0);
            if (iVar1 < 0) {
              (*param_2->lpVtbl->Release)(param_2);
              param_2 = (IStream *)0x0;
            }
          }
        }
      }
      else {
LAB_004448c0:
        iVar1 = -0x7fff0001;
      }
      pvVar2 = GlobalHandle(lpData);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(lpData);
      GlobalFree(pvVar2);
      if (param_2 != (IStream *)0x0) {
        (*param_2->lpVtbl->Seek)(param_2,(LARGE_INTEGER)0x0,0,unaff_ESI);
        iVar1 = (*(param_2[1].lpVtbl)->SetSize)(param_2 + 1,param_5,param_3,0x1000000);
        (**(code **)(*local_4 + 8))(local_4);
      }
      goto LAB_0044492c;
    }
  }
  iVar1 = -0x7fff0001;
LAB_0044492c:
  pCVar3 = local_c;
  pvVar2 = GlobalHandle(local_c);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pCVar3);
  GlobalFree(pvVar2);
  RegCloseKey((HKEY)0x0);
  return iVar1;
}


