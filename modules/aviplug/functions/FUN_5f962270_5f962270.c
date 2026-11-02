/* Module: aviplug.dll
   Function: FUN_5f962270
   Address: 5f962270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f962270(uint param_1)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD lDistanceToMove;
  LONG local_18;
  DWORD local_14;
  LONG local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = param_1;
  hFile = CreateFileA((LPCSTR)(param_1 + 0xd8),0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return;
  }
  BVar2 = ReadFile(hFile,&local_c,0xc,&param_1,(LPOVERLAPPED)0x0);
  if ((((BVar2 != 0) && (0xb < param_1)) && (local_c == 0x46464952)) && (local_4 == 0x20495641)) {
    local_18 = 0;
    lDistanceToMove = SetFilePointer(hFile,local_8 + 8,&local_18,0);
    local_14 = 0x7fffffff - *(DWORD *)(uVar1 + 0x1e0);
    if ((local_18 <= (int)local_14 >> 0x1f) &&
       ((local_18 < (int)local_14 >> 0x1f || (lDistanceToMove <= local_14)))) {
      BVar2 = WriteFile(hFile,*(LPCVOID *)(uVar1 + 0x1dc),*(DWORD *)(uVar1 + 0x1e0),&param_1,
                        (LPOVERLAPPED)0x0);
      if ((BVar2 != 0) && (*(int *)(uVar1 + 0x1e0) <= (int)param_1)) {
        local_8 = local_8 + *(int *)(uVar1 + 0x1e0);
        local_14 = 4;
        local_10 = 0;
        SetFilePointer(hFile,4,&local_10,0);
        BVar2 = WriteFile(hFile,&local_8,4,&param_1,(LPOVERLAPPED)0x0);
        if ((BVar2 != 0) && (3 < param_1)) goto LAB_5f9623d8;
      }
      local_14 = lDistanceToMove;
      local_10 = local_18;
      SetFilePointer(hFile,lDistanceToMove,&local_10,0);
      SetEndOfFile(hFile);
    }
  }
LAB_5f9623d8:
  CloseHandle(hFile);
  return;
}


