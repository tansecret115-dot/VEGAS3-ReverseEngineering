/* Module: vegas30k.dll
   Function: _SfDSFilter_LoadPreset@12
   Address: 01028f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDSFilter_LoadPreset_12(int *param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  LSTATUS LVar2;
  HANDLE hFile;
  HGLOBAL pvVar3;
  LPVOID lpBuffer;
  BOOL BVar4;
  HRESULT HVar5;
  ULARGE_INTEGER *unaff_EBX;
  LPSTREAM local_414;
  DWORD local_410;
  HKEY local_40c;
  DWORD local_408;
  DWORD local_404;
  BYTE local_400 [1024];
  
                    /* 0x28f80  806  _SfDSFilter_LoadPreset@12 */
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  local_40c = (HKEY)0x0;
  iVar1 = FUN_01028690(param_1,&local_40c,0,param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
  local_410 = 0x400;
  LVar2 = RegQueryValueExA(local_40c,param_2,(LPDWORD)0x0,&local_408,local_400,&local_410);
  HVar5 = 0;
  if (LVar2 != 0) goto LAB_0102915f;
  local_414 = (IStream *)0x0;
  if (local_408 == 1) {
    hFile = CreateFileA((LPCSTR)local_400,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                       );
    if (hFile == (HANDLE)0xffffffff) {
      HVar5 = -0x7ffb1ff9;
    }
    else {
      local_410 = SetFilePointer(hFile,0,(PLONG)0x0,2);
      SetFilePointer(hFile,0,(PLONG)0x0,0);
      pvVar3 = GlobalAlloc(2,local_410);
      lpBuffer = GlobalLock(pvVar3);
      if (lpBuffer != (LPVOID)0x0) {
        BVar4 = ReadFile(hFile,lpBuffer,local_410,&local_404,(LPOVERLAPPED)0x0);
        if (BVar4 != 0) {
          HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_414);
          if (HVar5 == 0) {
            HVar5 = (*local_414->lpVtbl->Write)(local_414,lpBuffer,local_410,(ULONG *)0x0);
            if (HVar5 != 0) {
              (*local_414->lpVtbl->Release)(local_414);
              local_414 = (IStream *)0x0;
            }
          }
        }
        pvVar3 = GlobalHandle(lpBuffer);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(lpBuffer);
        GlobalFree(pvVar3);
      }
      CloseHandle(hFile);
    }
    goto LAB_0102912a;
  }
  if (local_408 != 3) goto LAB_0102915f;
  HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_414);
  if (HVar5 == 0) {
    HVar5 = (*local_414->lpVtbl->Write)(local_414,local_400,local_410,(ULONG *)0x0);
    if (HVar5 == 0) goto LAB_0102912a;
  }
  else {
LAB_0102912a:
    if (local_414 == (IStream *)0x0) goto LAB_0102915f;
    (*local_414->lpVtbl->Seek)(local_414,(LARGE_INTEGER)0x0,0,unaff_EBX);
    HVar5 = (**(code **)(*param_1 + 0x14))(param_1,local_410);
    if (HVar5 == 1) {
      HVar5 = 0;
    }
  }
  (*local_414->lpVtbl->Release)(local_414);
LAB_0102915f:
  RegCloseKey(local_40c);
  return HVar5;
}


