/* Module: mcplugrw.dll
   Function: FUN_00434df0
   Address: 00434df0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00434df0(void *param_1)

{
  int iVar1;
  void *dwFileAttributes;
  uint uVar2;
  _FILETIME local_18;
  _FILETIME local_10;
  _FILETIME local_8;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)param_1 + 0x24);
  if ((iVar1 == 2) || (iVar1 == 0)) {
    uVar2 = FUN_00438350(param_1);
  }
  else if (iVar1 == 3) {
    uVar2 = FUN_0043ce80(param_1);
  }
  else if (iVar1 == 4) {
    uVar2 = FUN_00435b80(param_1);
  }
  dwFileAttributes = param_1;
  if (*(HANDLE *)((int)param_1 + 8) != (HANDLE)0x0) {
    GetFileTime(*(HANDLE *)((int)param_1 + 8),&local_8,&local_10,&local_18);
    dwFileAttributes = (void *)GetFileAttributesA((LPCSTR)((int)param_1 + 0x678));
    CloseHandle(*(HANDLE *)((int)param_1 + 8));
    *(undefined4 *)((int)param_1 + 8) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x24);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) ||
     ((iVar1 == 5 && (*(int *)((int)param_1 + 0xc) != 0)))) {
    SetFileTime(*(HANDLE *)((int)param_1 + 8),&local_8,&local_10,&local_18);
    SetFileAttributesA((LPCSTR)((int)param_1 + 0x77c),(DWORD)dwFileAttributes);
    CloseHandle(*(HANDLE *)((int)param_1 + 0xc));
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  if ((-1 < (int)uVar2) &&
     (((iVar1 = *(int *)((int)param_1 + 0x24), iVar1 == 2 || (iVar1 == 5)) || (iVar1 == 3)))) {
    if (*(int *)((int)param_1 + 0x8a8) == 0) {
      DeleteFileA((LPCSTR)((int)param_1 + 0x77c));
      uVar2 = 1;
    }
    else {
      DeleteFileA((LPCSTR)((int)param_1 + 0x678));
      rename((char *)((int)param_1 + 0x77c),(LPCSTR)((int)param_1 + 0x678));
    }
  }
  *(undefined4 *)((int)param_1 + 0x8a0) = 0;
  *(undefined4 *)((int)param_1 + 0x8a4) = 0;
  if (*(int **)((int)param_1 + 0x10) != (int *)0x0) {
    FUN_00423d80(*(int **)((int)param_1 + 0x10),0,-1,0);
    FUN_00424ff0(*(int **)((int)param_1 + 0x10));
    *(undefined4 *)((int)param_1 + 0x10) = 0;
  }
  FUN_0043ce40((int)param_1);
  return uVar2;
}


