/* Module: vidcap30.exe
   Function: IsSpaceForExtractAll
   Address: 00533a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::IsSpaceForExtractAll(char const *,unsigned long) */

long CArchive2::IsSpaceForExtractAll(char *param_1,ulong param_2)

{
  DWORD DVar1;
  long lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 local_40 [64];
  
                    /* 0x133a50  55  ?IsSpaceForExtractAll@CArchive2@@QAGJPBDK@Z */
  if (*(int *)(param_1 + 0x24) == 0) {
    lVar2 = -0x7fffbffb;
  }
  else {
    DVar1 = GetFileAttributesA((LPCSTR)param_2);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      _SfGetRootPathFromFilePath_12(param_2,local_40,0x40);
      FUN_00536e70(0xaaaaaaa8,"IsSpaceForExtractAll",local_40);
      return -0x7ffb1ff3;
    }
    lVar2 = GetSizeExtractAll((__int64 *)param_1);
    if (-1 < lVar2) {
      uVar3 = _SfGetDiskFreeSpace_8(param_2,0x400);
      lVar4 = __alldiv(0,0,0x400,0);
      if ((lVar4 < 0x100000000) && ((lVar4 < 0 || ((uint)lVar4 <= uVar3)))) {
        return 0;
      }
      return 1;
    }
  }
  return lVar2;
}


