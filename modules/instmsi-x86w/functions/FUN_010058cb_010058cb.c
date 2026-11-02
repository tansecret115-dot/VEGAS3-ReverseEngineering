/* Module: InstMsi-x86w.exe
   Function: FUN_010058cb
   Address: 010058cb
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010058cb(LPCSTR param_1)

{
  DWORD DVar1;
  CHAR local_108 [260];
  
  lstrcpyA(local_108,&DAT_0100ae84);
  FUN_01005a4d(local_108,param_1);
  DVar1 = GetFileAttributesA(local_108);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) != 0)) {
    LoadLibraryA(param_1);
  }
  else {
    LoadLibraryExA(local_108,(HANDLE)0x0,8);
  }
  return;
}


