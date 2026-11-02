/* Module: Setup.exe
   Function: IsSpaceForAddEntry
   Address: 0040aad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040abe7) */
/* public: long __stdcall CArchive2::IsSpaceForAddEntry(char const *,unsigned long) */

long CArchive2::IsSpaceForAddEntry(char *param_1,ulong param_2)

{
  longlong lVar1;
  long lVar2;
  int iVar3;
  ulonglong uVar4;
  __int64 _Var5;
  longlong lVar6;
  undefined8 local_114;
  uint local_10c;
  uchar local_104 [260];
  
                    /* 0xaad0  43  ?IsSpaceForAddEntry@CArchive2@@QAGJPBDK@Z */
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 2)) {
    return -0x7fffbffb;
  }
  local_114._0_4_ = 0;
  local_114._4_4_ = 0;
  lVar2 = GetSizeAddEntry(param_1,(__int64 *)param_2,(ulong)&local_114);
  if (lVar2 < 0) {
    return lVar2;
  }
  _SfGetRootPathFromFilePath_12((uchar *)(param_1 + 0x678),local_104,0x104);
  local_10c = _SfGetDiskFreeSpace_8(local_104,0x400);
  iVar3 = lstrcmpiA(param_1 + 0x8b8,"FAT32");
  if (iVar3 != 0) {
    iVar3 = lstrcmpiA(param_1 + 0x8b8,"FAT");
    uVar4 = (ulonglong)local_10c;
    if (iVar3 != 0) goto LAB_0040aba7;
  }
  _CIpow();
  uVar4 = ftol();
LAB_0040aba7:
  local_10c = (uint)uVar4;
  lVar1 = CONCAT44(local_114._4_4_,(uint)local_114);
  if (*(int *)(param_1 + 0x24) == 2) {
    _Var5 = GetArchiveSize();
    lVar1 = _Var5 + CONCAT44(local_114._4_4_,(uint)local_114);
  }
  local_114._4_4_ = (uint)((ulonglong)lVar1 >> 0x20);
  local_114._0_4_ = (uint)lVar1;
  lVar6 = __alldiv((uint)local_114,local_114._4_4_,0x400,0);
  local_114 = lVar1;
  if (CONCAT44((int)(uVar4 >> 0x20),local_10c) < lVar6) {
    return 1;
  }
  return 0;
}


