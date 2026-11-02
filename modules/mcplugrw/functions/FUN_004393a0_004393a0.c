/* Module: mcplugrw.dll
   Function: FUN_004393a0
   Address: 004393a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004393a0(void *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  DWORD DVar2;
  longlong lVar3;
  uint local_8;
  uint local_4;
  
  if (*(int *)((int)param_1 + 0x24) == 0) {
    uVar1 = 0x80004005;
  }
  else {
    local_8 = 0;
    local_4 = 0;
    uVar1 = FUN_004392b0(param_1,param_2,&local_8);
    if (-1 < (int)uVar1) {
      DVar2 = GetFileAttributesA((LPCSTR)param_3);
      if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
        FUN_0043c480(param_1,0xaaaaaaa0,(uchar *)"IsSpaceForExtractEntry",(uchar *)0x0);
        return 0x80070057;
      }
      uVar1 = FUN_0041d140(param_3,0x400);
      lVar3 = __alldiv(local_8,local_4,0x400,0);
      if ((lVar3 < 0x100000000) && ((lVar3 < 0 || ((uint)lVar3 <= uVar1)))) {
        return 0;
      }
      return 1;
    }
  }
  return uVar1;
}


