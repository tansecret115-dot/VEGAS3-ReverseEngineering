/* Module: Setup.exe
   Function: IsSpaceForExtractEntry
   Address: 0040df50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::IsSpaceForExtractEntry(int,int *,char const *,unsigned long) */

long CArchive2::IsSpaceForExtractEntry(int param_1,int *param_2,char *param_3,ulong param_4)

{
  long lVar1;
  DWORD DVar2;
  uint uVar3;
  longlong lVar4;
  uint local_8;
  uint local_4;
  
                    /* 0xdf50  46  ?IsSpaceForExtractEntry@CArchive2@@QAGJHPAHPBDK@Z */
  if (*(int *)(param_1 + 0x24) == 0) {
    lVar1 = -0x7fffbffb;
  }
  else {
    local_8 = 0;
    local_4 = 0;
    lVar1 = GetSizeExtractEntry(param_1,param_2,(__int64 *)param_3,(ulong)&local_8);
    if (-1 < lVar1) {
      DVar2 = GetFileAttributesA((LPCSTR)param_4);
      if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
        FUN_00410c30((void *)param_1,0xaaaaaaa0,(uchar *)"IsSpaceForExtractEntry",(uchar *)0x0);
        return -0x7ff8ffa9;
      }
      uVar3 = _SfGetDiskFreeSpace_8((uchar *)param_4,0x400);
      lVar4 = __alldiv(local_8,local_4,0x400,0);
      if ((lVar4 < 0x100000000) && ((lVar4 < 0 || ((uint)lVar4 <= uVar3)))) {
        return 0;
      }
      return 1;
    }
  }
  return lVar1;
}


