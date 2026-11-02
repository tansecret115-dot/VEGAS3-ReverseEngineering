/* Module: wmfplug2.dll
   Function: FUN_0041af00
   Address: 0041af00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041af00(int param_1,LPCSTR param_2)

{
  HANDLE hFile;
  int iVar1;
  DWORD local_10;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x27c);
  if (iVar1 < 1) {
    return 0;
  }
  local_c = iVar1;
  hFile = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile,0,(PLONG)0x0,2);
    FUN_00418a90(hFile,s_start_marker_table_004887fc,&local_10);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        if (*(char *)(*(int *)(param_1 + 0x278) + 0x108 + iVar1) != '\0') {
          FUN_00418a90(hFile,";",&local_10);
          FUN_00418a90(hFile," ",&local_10);
          FUN_00418a90(hFile,(char *)(*(int *)(param_1 + 0x278) + 0x108 + iVar1),&local_10);
          FUN_00418a90(hFile,"\r\n",&local_10);
        }
        FUN_0041b060(hFile);
        FUN_00418a90(hFile,(char *)(*(int *)(param_1 + 0x278) + 4 + iVar1),&local_10);
        FUN_00418a90(hFile,"\r\n",&local_10);
        iVar1 = iVar1 + 0x208;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    FUN_00418a90(hFile,s_end_marker_table_00488814,&local_10);
    CloseHandle(hFile);
    return 0;
  }
  return 0x80004005;
}


