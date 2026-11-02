/* Module: vidcap30.exe
   Function: FUN_0045b1f0
   Address: 0045b1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045b1f0(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 local_210;
  int *local_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_210 = 0;
  iVar1 = _SfList_CreateExZ_32(&local_210,4,0xffffffff,0x40,0x40000002,0,0,0);
  if (-1 < iVar1) {
    ppuVar2 = &PTR_DAT_005b6198;
    do {
      MultiByteToWideChar(0,1,*ppuVar2,-1,local_208,0x104);
      local_2 = 0;
      iVar1 = (**(code **)(*DAT_005bba6c + 0x50))(DAT_005bba6c,&local_20c,local_208);
      if (iVar1 == 0) {
        iVar1 = 0;
        if (*ppuVar2 != (LPCSTR)0x0) {
          iVar1 = lstrlenA(*ppuVar2);
          iVar1 = iVar1 + 1;
        }
        _SfList_AllocAndInsertItem_20(local_210,*ppuVar2,iVar1,0xffffffff,0);
        (**(code **)(*local_20c + 8))(local_20c);
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 < &DAT_005b61ac);
    return local_210;
  }
  return local_210;
}


