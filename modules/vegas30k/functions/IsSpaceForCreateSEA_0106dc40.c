/* Module: vegas30k.dll
   Function: IsSpaceForCreateSEA
   Address: 0106dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0106dd38) */
/* public: long __stdcall CArchive2::IsSpaceForCreateSEA(char const *,char const *) */

long CArchive2::IsSpaceForCreateSEA(char *param_1,char *param_2)

{
  DWORD DVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  __int64 *in_stack_0000000c;
  CHAR local_104 [260];
  
                    /* 0x6dc40  126  ?IsSpaceForCreateSEA@CArchive2@@QAGJPBD0@Z */
  if (*(int *)(param_1 + 0x24) == 4) {
    _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
    DVar1 = GetFileAttributesA(local_104);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      FUN_01070600(0xaaaaaaae,"IsSpaceForSEA",local_104);
      return -0x7ffb1ff3;
    }
    lVar2 = GetSizeCreateSEA(param_1,in_stack_0000000c);
    if (-1 < lVar2) {
      uVar3 = _SfGetDiskFreeSpace_8(local_104,0x400);
      uVar5 = (ulonglong)uVar3;
      iVar4 = lstrcmpiA(param_1 + 0x8b8,"FAT32");
      if ((iVar4 == 0) || (iVar4 = lstrcmpiA(param_1 + 0x8b8,"FAT"), iVar4 == 0)) {
        _CIpow();
        uVar5 = ftol();
      }
      lVar6 = __alldiv(0,0,0x400,0);
      if ((longlong)uVar5 < lVar6) {
        return 1;
      }
      return 0;
    }
  }
  else {
    lVar2 = -0x7fffbffb;
  }
  return lVar2;
}


