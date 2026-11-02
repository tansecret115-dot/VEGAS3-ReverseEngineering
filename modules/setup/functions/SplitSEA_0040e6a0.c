/* Module: Setup.exe
   Function: SplitSEA
   Address: 0040e6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::SplitSEA(char const *,unsigned long) */

long CArchive2::SplitSEA(char *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  undefined3 extraout_var;
  HANDLE pvVar7;
  undefined3 extraout_var_00;
  long lVar8;
  code *pcVar9;
  longlong lVar10;
  uint in_stack_0000000c;
  int local_398;
  uint local_390;
  uchar local_38c [260];
  uchar local_288 [260];
  uchar local_184 [128];
  BYTE local_104 [260];
  
                    /* 0xe6a0  65  ?SplitSEA@CArchive2@@QAGJPBDK@Z */
  local_398 = 0;
  iVar4 = GetArchiveSEAStatus();
  if (iVar4 == 0) {
    FUN_00410c30(param_1,0xaaaaaaa4,(uchar *)"SplitSEA",(uchar *)(param_1 + 0x678));
    local_398 = -0x7ffb1ff9;
  }
  else {
    DVar5 = GetFileSize(*(HANDLE *)(param_1 + 8),&local_390);
    uVar6 = _SfGetDiskFreeSpace_8((uchar *)param_2,0x400);
    lVar10 = __alldiv(DVar5,local_390,0x400,0);
    pcVar9 = _mbscpy_exref;
    if ((0xffffffff < lVar10) || ((-1 < lVar10 && (uVar6 < (uint)lVar10)))) {
      _SfGetRootPathFromFilePath_12((uchar *)param_2,local_184,0x80);
      FUN_00410c30(param_1,0xaaaaaaa8,(uchar *)"SplitSEA",local_184);
      return -0x7ffb1f38;
    }
    _mbscpy(local_38c,(uchar *)param_2);
    _SfAddSlashToPathName_8(local_38c,0x104);
    _mbscat(local_38c,(uchar *)"Seastub.exe");
    if ((((in_stack_0000000c & 4) != 0) ||
        (bVar3 = _SfDoesFileExist_4((LPCSTR)local_38c), CONCAT31(extraout_var,bVar3) == 0)) ||
       (iVar4 = FUN_0040ae00(param_1,(LPCSTR)local_38c), iVar4 == 0)) {
      pvVar7 = CreateFileA((LPCSTR)local_38c,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                           (HANDLE)0x0);
      if (pvVar7 == (HANDLE)0xffffffff) {
        FUN_00410c30(param_1,0xaaaaaaa2,(uchar *)"SplitSEA",local_38c);
        return -0x7ffb1ffa;
      }
      local_398 = FUN_00409fe0(*(HANDLE *)(param_1 + 8),0,0,*(uint *)(param_1 + 0x890),
                               *(int *)(param_1 + 0x894),pvVar7,0,0);
      CloseHandle(pvVar7);
      pcVar9 = _mbscpy_exref;
      if (local_398 < 0) {
        return local_398;
      }
    }
    (*pcVar9)(local_104,param_2);
    _SfAddSlashToPathName_8(local_104,0x104);
    _SfGetFileNamePtrA_4(param_1 + 0x468);
    SfPrintF(local_288,"%s%s");
    if ((((in_stack_0000000c & 4) != 0) ||
        (bVar3 = _SfDoesFileExist_4((LPCSTR)local_288), CONCAT31(extraout_var_00,bVar3) == 0)) ||
       (iVar4 = FUN_0040ae00(param_1,(LPCSTR)local_288), iVar4 == 0)) {
      pvVar7 = CreateFileA((LPCSTR)local_288,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                           (HANDLE)0x0);
      *(HANDLE *)(param_1 + 0xc) = pvVar7;
      if (pvVar7 == (HANDLE)0xffffffff) {
        FUN_00410c30(param_1,0xaaaaaaa2,(uchar *)"SplitSEA",local_288);
        local_398 = -0x7ffb1ffa;
      }
      else {
        (*pcVar9)(param_1 + 0x77c,local_288);
        local_398 = FUN_00409fe0(*(HANDLE *)(param_1 + 8),*(LONG *)(param_1 + 0x890),
                                 *(LONG *)(param_1 + 0x894),
                                 *(uint *)(param_1 + 0x4c) + *(uint *)(param_1 + 0x44),
                                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48) +
                                 (uint)CARRY4(*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x44)),
                                 *(HANDLE *)(param_1 + 0xc),0,0);
      }
    }
    uVar6 = *(uint *)(param_1 + 0x44);
    uVar1 = *(uint *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x48);
    param_1[0x890] = '\0';
    param_1[0x891] = '\0';
    param_1[0x892] = '\0';
    param_1[0x893] = '\0';
    *(uint *)(param_1 + 0x18) = uVar6 + uVar1;
    param_1[0x894] = '\0';
    param_1[0x895] = '\0';
    param_1[0x896] = '\0';
    param_1[0x897] = '\0';
    *(uint *)(param_1 + 0x1c) = iVar2 + iVar4 + (uint)CARRY4(uVar6,uVar1);
    iVar4 = GetMultiVolumeStatus();
    if (iVar4 == 1) {
      param_1[0x468] = '\0';
    }
    if (-1 < local_398) {
      lVar8 = FUN_0040cdb0(param_1,*(uint *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
      return lVar8;
    }
  }
  return local_398;
}


