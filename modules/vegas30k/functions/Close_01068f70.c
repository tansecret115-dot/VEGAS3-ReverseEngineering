/* Module: vegas30k.dll
   Function: Close
   Address: 01068f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::Close(void) */

long CArchive2::Close(void)

{
  int iVar1;
  DWORD dwFileAttributes;
  int iVar2;
  DWORD in_stack_00000004;
  _FILETIME local_18;
  _FILETIME local_10;
  _FILETIME local_8;
  
                    /* 0x68f70  25  ?Close@CArchive2@@QAGJXZ */
  iVar2 = 0;
  iVar1 = *(int *)(in_stack_00000004 + 0x24);
  if ((iVar1 == 2) || (iVar1 == 0)) {
    iVar2 = FUN_0106c4d0();
  }
  else if (iVar1 == 3) {
    iVar2 = FUN_01071000();
  }
  else if (iVar1 == 4) {
    iVar2 = FUN_01069d00();
  }
  dwFileAttributes = in_stack_00000004;
  if (*(HANDLE *)(in_stack_00000004 + 8) != (HANDLE)0x0) {
    GetFileTime(*(HANDLE *)(in_stack_00000004 + 8),&local_8,&local_10,&local_18);
    dwFileAttributes = GetFileAttributesA((LPCSTR)(in_stack_00000004 + 0x678));
    CloseHandle(*(HANDLE *)(in_stack_00000004 + 8));
    *(undefined4 *)(in_stack_00000004 + 8) = 0;
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x24);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) ||
     ((iVar1 == 5 && (*(int *)(in_stack_00000004 + 0xc) != 0)))) {
    SetFileTime(*(HANDLE *)(in_stack_00000004 + 8),&local_8,&local_10,&local_18);
    SetFileAttributesA((LPCSTR)(in_stack_00000004 + 0x77c),dwFileAttributes);
    CloseHandle(*(HANDLE *)(in_stack_00000004 + 0xc));
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  }
  if ((-1 < iVar2) &&
     (((iVar1 = *(int *)(in_stack_00000004 + 0x24), iVar1 == 2 || (iVar1 == 5)) || (iVar1 == 3)))) {
    if (*(int *)(in_stack_00000004 + 0x8a8) == 0) {
      DeleteFileA((LPCSTR)(in_stack_00000004 + 0x77c));
      iVar2 = 1;
    }
    else {
      DeleteFileA((LPCSTR)(in_stack_00000004 + 0x678));
      rename((char *)(in_stack_00000004 + 0x77c),(LPCSTR)(in_stack_00000004 + 0x678));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0x8a0) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x8a4) = 0;
  if (*(int *)(in_stack_00000004 + 0x10) != 0) {
    _SfList_DeleteList_16(*(int *)(in_stack_00000004 + 0x10),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(in_stack_00000004 + 0x10));
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  }
  FUN_01070fc0();
  return iVar2;
}


