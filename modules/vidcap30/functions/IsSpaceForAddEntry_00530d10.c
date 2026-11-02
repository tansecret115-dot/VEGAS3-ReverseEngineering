/* Module: vidcap30.exe
   Function: IsSpaceForAddEntry
   Address: 00530d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00530e27) */
/* public: long __stdcall CArchive2::IsSpaceForAddEntry(char const *,unsigned long) */

long CArchive2::IsSpaceForAddEntry(char *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulonglong uVar3;
  __int64 _Var4;
  longlong lVar5;
  undefined8 local_114;
  uint local_10c;
  undefined1 local_104 [260];
  
                    /* 0x130d10  53  ?IsSpaceForAddEntry@CArchive2@@QAGJPBDK@Z */
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 2)) {
    return -0x7fffbffb;
  }
  local_114._0_4_ = 0;
  local_114._4_4_ = 0;
  lVar1 = GetSizeAddEntry(param_1,(__int64 *)param_2,(ulong)&local_114);
  if (lVar1 < 0) {
    return lVar1;
  }
  _SfGetRootPathFromFilePath_12(param_1 + 0x678,local_104,0x104);
  local_10c = _SfGetDiskFreeSpace_8(local_104,0x400);
  iVar2 = lstrcmpiA(param_1 + 0x8b8,"FAT32");
  if (iVar2 != 0) {
    iVar2 = lstrcmpiA(param_1 + 0x8b8,(LPCSTR)&PTR_LAB_0058c2a8);
    uVar3 = (ulonglong)local_10c;
    if (iVar2 != 0) goto LAB_00530de7;
  }
  _CIpow();
  uVar3 = ftol();
LAB_00530de7:
  local_10c = (uint)uVar3;
  if (*(int *)(param_1 + 0x24) == 2) {
    _Var4 = GetArchiveSize();
    local_114 = _Var4 + CONCAT44(local_114._4_4_,(undefined4)local_114);
  }
  lVar5 = __alldiv(local_114,0x400,0);
  if (CONCAT44((int)(uVar3 >> 0x20),local_10c) < lVar5) {
    return 1;
  }
  return 0;
}


