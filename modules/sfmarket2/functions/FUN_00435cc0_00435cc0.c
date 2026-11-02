/* Module: sfmarket2.dll
   Function: FUN_00435cc0
   Address: 00435cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00435cc0(void *param_1,uchar *param_2)

{
  DWORD DVar1;
  uint uVar2;
  longlong lVar3;
  uint local_48;
  uint local_44;
  uchar local_40 [64];
  
  local_48 = 0;
  local_44 = 0;
  if (*(int *)((int)param_1 + 0x24) == 0) {
    uVar2 = 0x80004005;
  }
  else {
    DVar1 = GetFileAttributesA((LPCSTR)param_2);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      FUN_00420620(param_2,local_40,0x40);
      FUN_004390e0(param_1,0xaaaaaaa8,(uchar *)"IsSpaceForExtractAll",local_40);
      return 0x8004e00d;
    }
    uVar2 = FUN_00435bf0(param_1,&local_48);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_00420bc0(param_2,0x400);
      lVar3 = __alldiv(local_48,local_44,0x400,0);
      if ((lVar3 < 0x100000000) && ((lVar3 < 0 || ((uint)lVar3 <= uVar2)))) {
        return 0;
      }
      return 1;
    }
  }
  return uVar2;
}


