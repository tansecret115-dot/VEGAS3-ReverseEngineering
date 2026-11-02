/* Module: vegas30k.dll
   Function: IsSpaceForExtractEntry
   Address: 0106d920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::IsSpaceForExtractEntry(int,int *,char const *,unsigned long) */

long CArchive2::IsSpaceForExtractEntry(int param_1,int *param_2,char *param_3,ulong param_4)

{
  long lVar1;
  DWORD DVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x6d920  128  ?IsSpaceForExtractEntry@CArchive2@@QAGJHPAHPBDK@Z */
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
        FUN_01070600(0xaaaaaaa0,"IsSpaceForExtractEntry",0);
        return -0x7ff8ffa9;
      }
      uVar3 = _SfGetDiskFreeSpace_8(param_4,0x400);
      lVar4 = __alldiv(local_8,local_4,0x400,0);
      if ((lVar4 < 0x100000000) && ((lVar4 < 0 || ((uint)lVar4 <= uVar3)))) {
        return 0;
      }
      return 1;
    }
  }
  return lVar1;
}


