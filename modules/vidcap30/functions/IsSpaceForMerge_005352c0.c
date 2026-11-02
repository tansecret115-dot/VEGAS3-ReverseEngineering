/* Module: vidcap30.exe
   Function: IsSpaceForMerge
   Address: 005352c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00535376) */
/* public: long __stdcall CArchive2::IsSpaceForMerge(void) */

long CArchive2::IsSpaceForMerge(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  __int64 *in_stack_00000004;
  
                    /* 0x1352c0  58  ?IsSpaceForMerge@CArchive2@@QAGJXZ */
  if (*(int *)((int)in_stack_00000004 + 0x24) == 5) {
    lVar1 = GetSizeMerge(in_stack_00000004);
    if (-1 < lVar1) {
      uVar2 = _SfGetDiskFreeSpace_8(in_stack_00000004 + 0xcf,0x400);
      uVar4 = (ulonglong)uVar2;
      iVar3 = lstrcmpiA((LPCSTR)(in_stack_00000004 + 0x117),"FAT32");
      if ((iVar3 == 0) ||
         (iVar3 = lstrcmpiA((LPCSTR)(in_stack_00000004 + 0x117),(LPCSTR)&PTR_LAB_0058c2a8),
         iVar3 == 0)) {
        _CIpow();
        uVar4 = ftol();
      }
      lVar5 = __alldiv(0,0,0x400,0);
      if ((longlong)uVar4 < lVar5) {
        return 1;
      }
      return 0;
    }
  }
  else {
    lVar1 = -0x7fffbffb;
  }
  return lVar1;
}


