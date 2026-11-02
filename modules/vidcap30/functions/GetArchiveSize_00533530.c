/* Module: vidcap30.exe
   Function: GetArchiveSize
   Address: 00533530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __int64 __stdcall CArchive2::GetArchiveSize(void) */

__int64 CArchive2::GetArchiveSize(void)

{
  HANDLE hFile;
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  bool bVar4;
  int in_stack_00000004;
  DWORD local_110 [2];
  DWORD local_108;
  CHAR local_104 [260];
  
                    /* 0x133530  18  ?GetArchiveSize@CArchive2@@QAG_JXZ */
  DVar2 = 0xffffffff;
  local_108 = 0xffffffff;
  if (*(int *)(in_stack_00000004 + 0x24) != 0) {
    if (*(HANDLE *)(in_stack_00000004 + 8) != (HANDLE)0x0) {
      DVar2 = GetFileSize(*(HANDLE *)(in_stack_00000004 + 8),local_110);
      local_108 = local_110[0];
    }
    if ((1 < *(uint *)(in_stack_00000004 + 0x898)) &&
       (uVar3 = 2, 1 < *(uint *)(in_stack_00000004 + 0x898))) {
      while( true ) {
        FUN_00536d50(in_stack_00000004 + 0x468,uVar3,local_104);
        hFile = CreateFileA(local_104,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
        if (hFile == (HANDLE)0xffffffff) break;
        DVar1 = GetFileSize(hFile,local_110);
        bVar4 = CARRY4(DVar2,DVar1);
        DVar2 = DVar2 + DVar1;
        local_108 = local_108 + local_110[0] + (uint)bVar4;
        CloseHandle(hFile);
        uVar3 = uVar3 + 1;
        if (*(uint *)(in_stack_00000004 + 0x898) < uVar3) {
          return CONCAT44(local_108,DVar2);
        }
      }
      FUN_00536e70(0xaaaaaaad,"GetArchiveSize",local_104);
    }
  }
  return CONCAT44(local_108,DVar2);
}


