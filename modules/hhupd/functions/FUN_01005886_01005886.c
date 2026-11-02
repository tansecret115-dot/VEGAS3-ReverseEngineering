/* Module: hhupd.exe
   Function: FUN_01005886
   Address: 01005886
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01005886(LPCSTR param_1)

{
  DWORD DVar1;
  CHAR local_108 [260];
  
  lstrcpyA(local_108,&DAT_0100ae84);
  FUN_010059ea(local_108,param_1);
  DVar1 = GetFileAttributesA(local_108);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) != 0)) {
    LoadLibraryA(param_1);
  }
  else {
    LoadLibraryExA(local_108,(HANDLE)0x0,8);
  }
  return;
}


