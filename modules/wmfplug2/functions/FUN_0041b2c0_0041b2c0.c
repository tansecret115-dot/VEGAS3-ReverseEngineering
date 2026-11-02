/* Module: wmfplug2.dll
   Function: FUN_0041b2c0
   Address: 0041b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041b2c0(int param_1,LPCSTR param_2)

{
  HANDLE hFile;
  DWORD local_128;
  CHAR local_124 [292];
  
  hFile = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile,0,(PLONG)0x0,2);
    if (*(char *)(param_1 + 0x288) != '\0') {
      wsprintfA(local_124,"TITLE:\t%s\r\n",param_1 + 0x288);
      FUN_00418a90(hFile,local_124,&local_128);
    }
    if (*(char *)(param_1 + 0x38c) != '\0') {
      wsprintfA(local_124,"AUTHOR:\t%s\r\n",param_1 + 0x38c);
      FUN_00418a90(hFile,local_124,&local_128);
    }
    if (*(char *)(param_1 + 0x490) != '\0') {
      wsprintfA(local_124,"COPYRIGHT:\t%s\r\n",param_1 + 0x490);
      FUN_00418a90(hFile,local_124,&local_128);
    }
    if (*(char *)(param_1 + 0x594) != '\0') {
      wsprintfA(local_124,"DESCRIPTION:\t%s\r\n",param_1 + 0x594);
      FUN_00418a90(hFile,local_124,&local_128);
    }
    if (*(char *)(param_1 + 0x698) != '\0') {
      wsprintfA(local_124,"RATING:\t%s\r\n",param_1 + 0x698);
      FUN_00418a90(hFile,local_124,&local_128);
    }
    CloseHandle(hFile);
    return 0;
  }
  return 0x80004005;
}


