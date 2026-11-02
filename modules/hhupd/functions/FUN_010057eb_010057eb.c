/* Module: hhupd.exe
   Function: FUN_010057eb
   Address: 010057eb
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010057eb(DWORD param_1,undefined4 param_2,LPCSTR param_3,LPCVOID param_4)

{
  HANDLE hFile;
  BOOL BVar1;
  CHAR local_110 [260];
  DWORD local_c;
  undefined4 local_8;
  
  local_8 = 1;
  local_c = 0;
  lstrcpyA(local_110,&DAT_0100ae84);
  FUN_010059ea(local_110,param_3);
  hFile = CreateFileA(local_110,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    BVar1 = WriteFile(hFile,param_4,param_1,&local_c,(LPOVERLAPPED)0x0);
    if ((BVar1 != 0) && (param_1 == local_c)) goto LAB_01005870;
  }
  DAT_0100b704 = 0x80070052;
  local_8 = 0;
LAB_01005870:
  if (hFile != (HANDLE)0xffffffff) {
    CloseHandle(hFile);
  }
  return local_8;
}


