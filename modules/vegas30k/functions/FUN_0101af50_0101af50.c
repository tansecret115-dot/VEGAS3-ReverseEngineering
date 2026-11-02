/* Module: vegas30k.dll
   Function: FUN_0101af50
   Address: 0101af50
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_0101af50(HANDLE param_1,undefined4 *param_2)

{
  HANDLE hFile;
  DWORD lDistanceToMove;
  int iVar1;
  HGLOBAL pvVar2;
  BOOL BVar3;
  LPVOID lpBuffer;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [4];
  DWORD local_4;
  
  hFile = param_1;
  lpBuffer = (LPVOID)0x0;
  *param_2 = 0;
  lDistanceToMove = SetFilePointer(param_1,0,(PLONG)0x0,1);
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  iVar1 = riff_ReadFileID(hFile,&local_10,local_8);
  if (-1 < iVar1) {
    local_c = local_10;
    iVar1 = riff_FindListChunk(hFile,0x6c746461,&param_1,&local_c);
    if (iVar1 < 0) {
      SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
      return (LPVOID)0x0;
    }
    pvVar2 = GlobalAlloc(0x42,(SIZE_T)param_1);
    lpBuffer = GlobalLock(pvVar2);
    if (lpBuffer == (LPVOID)0x0) {
      SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
      return (LPVOID)0x0;
    }
    BVar3 = ReadFile(hFile,lpBuffer,(DWORD)param_1,&local_4,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
      pvVar2 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar2);
      return (LPVOID)0x0;
    }
    *param_2 = param_1;
  }
  SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
  return lpBuffer;
}


