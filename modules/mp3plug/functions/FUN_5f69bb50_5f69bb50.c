/* Module: mp3plug.dll
   Function: FUN_5f69bb50
   Address: 5f69bb50
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __thiscall FUN_5f69bb50(void *this,HANDLE param_1)

{
  HANDLE hFile;
  uint uVar1;
  int iVar2;
  uint dwBytes;
  HGLOBAL pvVar3;
  undefined1 *lpBuffer;
  BOOL BVar4;
  DWORD DVar5;
  undefined1 *unaff_EDI;
  uint local_10;
  DWORD local_c;
  int local_8;
  DWORD local_4;
  
  uVar1 = FUN_5f69bad0((int)this);
  hFile = param_1;
  local_c = 0;
  if (param_1 == (HANDLE)0xffffffff) {
    DVar5 = GetLastError();
    return DVar5;
  }
  param_1 = (HANDLE)GetFileSize(param_1,(LPDWORD)0x0);
  iVar2 = FUN_5f69a280(hFile,(uint *)&param_1,(int *)&local_10,&local_8);
  dwBytes = -(uint)(iVar2 != 0) & local_10;
  if (dwBytes < uVar1) {
    FUN_5f69bc40(hFile,uVar1 - dwBytes,unaff_EDI);
    dwBytes = uVar1;
  }
  pvVar3 = GlobalAlloc(0x42,dwBytes);
  lpBuffer = GlobalLock(pvVar3);
  FUN_5f69bda0(this,lpBuffer,dwBytes);
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  BVar4 = WriteFile(hFile,lpBuffer,dwBytes,&local_4,(LPOVERLAPPED)0x0);
  DVar5 = local_c;
  if (BVar4 == 0) {
    DVar5 = GetLastError();
  }
  pvVar3 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar3);
  return DVar5;
}


