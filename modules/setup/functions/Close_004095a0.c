/* Module: Setup.exe
   Function: Close
   Address: 004095a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::Close(void) */

long CArchive2::Close(void)

{
  int iVar1;
  __int64 *dwFileAttributes;
  uint uVar2;
  __int64 *in_stack_00000004;
  _FILETIME local_18;
  _FILETIME local_10;
  _FILETIME local_8;
  
                    /* 0x95a0  7  ?Close@CArchive2@@QAGJXZ */
  uVar2 = 0;
  iVar1 = *(int *)((int)in_stack_00000004 + 0x24);
  if ((iVar1 == 2) || (iVar1 == 0)) {
    uVar2 = FUN_0040cb00(in_stack_00000004);
  }
  else if (iVar1 == 3) {
    uVar2 = FUN_00411630(in_stack_00000004);
  }
  else if (iVar1 == 4) {
    uVar2 = FUN_0040a330(in_stack_00000004);
  }
  dwFileAttributes = in_stack_00000004;
  if (*(HANDLE *)(in_stack_00000004 + 1) != (HANDLE)0x0) {
    GetFileTime(*(HANDLE *)(in_stack_00000004 + 1),&local_8,&local_10,&local_18);
    dwFileAttributes = (__int64 *)GetFileAttributesA((LPCSTR)(in_stack_00000004 + 0xcf));
    CloseHandle(*(HANDLE *)(in_stack_00000004 + 1));
    *(undefined4 *)(in_stack_00000004 + 1) = 0;
  }
  iVar1 = *(int *)((int)in_stack_00000004 + 0x24);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) ||
     ((iVar1 == 5 && (*(int *)((int)in_stack_00000004 + 0xc) != 0)))) {
    SetFileTime(*(HANDLE *)(in_stack_00000004 + 1),&local_8,&local_10,&local_18);
    SetFileAttributesA((LPCSTR)((int)in_stack_00000004 + 0x77c),(DWORD)dwFileAttributes);
    CloseHandle(*(HANDLE *)((int)in_stack_00000004 + 0xc));
    *(undefined4 *)((int)in_stack_00000004 + 0xc) = 0;
  }
  if ((-1 < (int)uVar2) &&
     (((iVar1 = *(int *)((int)in_stack_00000004 + 0x24), iVar1 == 2 || (iVar1 == 5)) || (iVar1 == 3)
      ))) {
    if ((int)in_stack_00000004[0x115] == 0) {
      DeleteFileA((LPCSTR)((int)in_stack_00000004 + 0x77c));
      uVar2 = 1;
    }
    else {
      DeleteFileA((LPCSTR)(in_stack_00000004 + 0xcf));
      rename((char *)((int)in_stack_00000004 + 0x77c),(char *)(in_stack_00000004 + 0xcf));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0x114) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x8a4) = 0;
  if (*(int **)(in_stack_00000004 + 2) != (int *)0x0) {
    _SfList_DeleteList_16(*(int **)(in_stack_00000004 + 2),0,-1,0);
    _SfList_Destroy_4(*(int **)(in_stack_00000004 + 2));
    *(undefined4 *)(in_stack_00000004 + 2) = 0;
  }
  FUN_004115f0((int)in_stack_00000004);
  return uVar2;
}


