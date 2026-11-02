/* Module: mp3plug.dll
   Function: FUN_5f6b97c0
   Address: 5f6b97c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_5f6b97c0(HANDLE param_1,undefined4 *param_2)

{
  HANDLE hFile;
  DWORD lDistanceToMove;
  int iVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  BOOL BVar4;
  LPVOID lpBuffer;
  int local_10;
  int local_c;
  undefined4 local_8;
  DWORD local_4;
  
  hFile = param_1;
  lpBuffer = (LPVOID)0x0;
  *param_2 = 0;
  lDistanceToMove = SetFilePointer(param_1,0,(PLONG)0x0,1);
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  iVar1 = FUN_5f6c5ac0(hFile,&local_10,&local_8);
  if (-1 < iVar1) {
    local_c = local_10;
    uVar2 = FUN_5f6c5c90(hFile,0x6c746461,(int *)&param_1,&local_c);
    if ((int)uVar2 < 0) {
      SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
      return (LPVOID)0x0;
    }
    pvVar3 = GlobalAlloc(0x42,(SIZE_T)param_1);
    lpBuffer = GlobalLock(pvVar3);
    if (lpBuffer == (LPVOID)0x0) {
      SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
      return (LPVOID)0x0;
    }
    BVar4 = ReadFile(hFile,lpBuffer,(DWORD)param_1,&local_4,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar3);
      return (LPVOID)0x0;
    }
    *param_2 = param_1;
  }
  SetFilePointer(hFile,lDistanceToMove,(PLONG)0x0,0);
  return lpBuffer;
}


