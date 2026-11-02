/* Module: mp3plug.dll
   Function: FUN_5f68c9c0
   Address: 5f68c9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68c9c0(LPCWSTR param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *hFile;
  int iVar1;
  DWORD local_110;
  DWORD local_10c;
  DWORD local_108;
  CHAR local_104 [260];
  
  WideCharToMultiByte(0,0,param_1,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  hFile = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hFile != (undefined4 *)0xffffffff) {
    local_10c = GetFileSize(hFile,&local_110);
    local_108 = local_110;
    iVar1 = FUN_5f68a990(hFile,param_2,&local_10c,param_3);
    CloseHandle(hFile);
    return iVar1;
  }
  return -0x7ffb1ff9;
}


