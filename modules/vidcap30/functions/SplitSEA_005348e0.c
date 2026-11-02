/* Module: vidcap30.exe
   Function: SplitSEA
   Address: 005348e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::SplitSEA(char const *,unsigned long) */

long CArchive2::SplitSEA(char *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  HANDLE pvVar6;
  undefined4 uVar7;
  long lVar8;
  code *pcVar9;
  longlong lVar10;
  uint in_stack_0000000c;
  int local_398;
  DWORD local_390;
  uchar local_38c [260];
  CHAR local_288 [260];
  undefined1 local_184 [128];
  undefined1 local_104 [260];
  
                    /* 0x1348e0  141  ?SplitSEA@CArchive2@@QAGJPBDK@Z */
  local_398 = 0;
  iVar3 = GetArchiveSEAStatus();
  if (iVar3 == 0) {
    FUN_00536e70(0xaaaaaaa4,"SplitSEA",param_1 + 0x678);
    local_398 = -0x7ffb1ff9;
  }
  else {
    DVar4 = GetFileSize(*(HANDLE *)(param_1 + 8),&local_390);
    uVar5 = _SfGetDiskFreeSpace_8(param_2,0x400);
    lVar10 = __alldiv(DVar4,local_390,0x400,0);
    pcVar9 = _mbscpy_exref;
    if ((0xffffffff < lVar10) || ((-1 < lVar10 && (uVar5 < (uint)lVar10)))) {
      _SfGetRootPathFromFilePath_12(param_2,local_184,0x80);
      FUN_00536e70(0xaaaaaaa8,"SplitSEA",local_184);
      return -0x7ffb1f38;
    }
    _mbscpy(local_38c,(uchar *)param_2);
    _SfAddSlashToPathName_8(local_38c,0x104);
    _mbscat(local_38c,(uchar *)"Seastub.exe");
    if ((((in_stack_0000000c & 4) != 0) || (iVar3 = _SfDoesFileExist_4(local_38c), iVar3 == 0)) ||
       (iVar3 = FUN_00531040(local_38c), iVar3 == 0)) {
      pvVar6 = CreateFileA((LPCSTR)local_38c,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                           (HANDLE)0x0);
      if (pvVar6 == (HANDLE)0xffffffff) {
        FUN_00536e70(0xaaaaaaa2,"SplitSEA",local_38c);
        return -0x7ffb1ffa;
      }
      local_398 = FUN_00530220(*(undefined4 *)(param_1 + 8),0,0,*(undefined4 *)(param_1 + 0x890),
                               *(undefined4 *)(param_1 + 0x894),pvVar6,0,0);
      CloseHandle(pvVar6);
      pcVar9 = _mbscpy_exref;
      if (local_398 < 0) {
        return local_398;
      }
    }
    (*pcVar9)(local_104,param_2);
    _SfAddSlashToPathName_8(local_104,0x104);
    uVar7 = _SfGetFileNamePtrA_4(param_1 + 0x468);
    SfPrintF(local_288,&DAT_00586f0c,local_104,uVar7);
    if ((((in_stack_0000000c & 4) != 0) || (iVar3 = _SfDoesFileExist_4(local_288), iVar3 == 0)) ||
       (iVar3 = FUN_00531040(local_288), iVar3 == 0)) {
      pvVar6 = CreateFileA(local_288,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      *(HANDLE *)(param_1 + 0xc) = pvVar6;
      if (pvVar6 == (HANDLE)0xffffffff) {
        FUN_00536e70(0xaaaaaaa2,"SplitSEA",local_288);
        local_398 = -0x7ffb1ffa;
      }
      else {
        (*pcVar9)(param_1 + 0x77c,local_288);
        local_398 = FUN_00530220(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x890),
                                 *(undefined4 *)(param_1 + 0x894),
                                 *(uint *)(param_1 + 0x4c) + *(uint *)(param_1 + 0x44),
                                 *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48) +
                                 (uint)CARRY4(*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x44)),
                                 *(undefined4 *)(param_1 + 0xc),0,0);
      }
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    uVar1 = *(uint *)(param_1 + 0x4c);
    iVar3 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x48);
    param_1[0x890] = '\0';
    param_1[0x891] = '\0';
    param_1[0x892] = '\0';
    param_1[0x893] = '\0';
    *(uint *)(param_1 + 0x18) = uVar5 + uVar1;
    param_1[0x894] = '\0';
    param_1[0x895] = '\0';
    param_1[0x896] = '\0';
    param_1[0x897] = '\0';
    *(uint *)(param_1 + 0x1c) = iVar2 + iVar3 + (uint)CARRY4(uVar5,uVar1);
    iVar3 = GetMultiVolumeStatus();
    if (iVar3 == 1) {
      param_1[0x468] = '\0';
    }
    if (-1 < local_398) {
      lVar8 = FUN_00532ff0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      return lVar8;
    }
  }
  return local_398;
}


