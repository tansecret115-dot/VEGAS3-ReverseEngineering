/* Module: vidcap30.exe
   Function: FUN_00531740
   Address: 00531740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00531740(int param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int local_454;
  HANDLE local_450;
  _WIN32_FIND_DATAA local_44c;
  uchar local_30c [260];
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  iVar1 = _SfGetFileNamePtrA_4(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005307b0(iVar1,local_104,&local_454);
  if (-1 < iVar1) {
    if (local_454 != 0) {
      BVar3 = 1;
      _mbscpy(local_208,param_3);
      _SfAddSlashToPathName_8(local_208,0x104);
      _mbscat(local_208,"*.*");
      local_450 = FindFirstFileA((LPCSTR)local_208,&local_44c);
      if (local_450 != (HANDLE)0xffffffff) {
        while ((BVar3 != 0 && (-1 < iVar1))) {
          iVar2 = lstrcmpA(local_44c.cFileName,".");
          if ((iVar2 != 0) && (iVar2 = lstrcmpA(local_44c.cFileName,".."), iVar2 != 0)) {
            _mbscpy(local_30c,param_3);
            _SfAddSlashToPathName_8(local_30c,0x104);
            _mbscat(local_30c,(uchar *)local_44c.cFileName);
            if (((byte)local_44c.dwFileAttributes & 0x10) == 0) {
              iVar2 = FUN_005308d0(local_44c.cFileName,local_104,local_454);
              if (iVar2 != 0) {
                iVar1 = FUN_00531300(local_30c,param_3,0);
              }
            }
            else if (((*(byte *)(param_1 + 0x884) & 1) != 0) &&
                    (iVar2 = FUN_005308d0(local_44c.cFileName,local_104,local_454), iVar2 != 0)) {
              iVar1 = FUN_00532350(local_30c,param_3,0);
            }
          }
          BVar3 = FindNextFileA(local_450,&local_44c);
        }
      }
      FindClose(local_450);
      return iVar1;
    }
    FUN_00536e70(0xaaaaaaac,"AddWildcard",0);
    return 1;
  }
  return iVar1;
}


