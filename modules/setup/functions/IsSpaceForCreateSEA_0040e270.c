/* Module: Setup.exe
   Function: IsSpaceForCreateSEA
   Address: 0040e270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040e368) */
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
  uchar local_104 [260];
  
                    /* 0xe270  44  ?IsSpaceForCreateSEA@CArchive2@@QAGJPBD0@Z */
  if (*(int *)(param_1 + 0x24) == 4) {
    _SfGetPathNameFromFilePath_12((uchar *)param_2,local_104,0x104);
    DVar1 = GetFileAttributesA((LPCSTR)local_104);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      FUN_00410c30(param_1,0xaaaaaaae,(uchar *)"IsSpaceForSEA",local_104);
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
      if (lVar6 <= (longlong)uVar5) {
        return 0;
      }
      return 1;
    }
  }
  else {
    lVar2 = -0x7fffbffb;
  }
  return lVar2;
}


