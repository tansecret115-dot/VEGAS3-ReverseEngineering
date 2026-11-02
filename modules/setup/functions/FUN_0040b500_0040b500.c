/* Module: Setup.exe
   Function: FUN_0040b500
   Address: 0040b500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040b500(void *this,LPCSTR param_1,uchar *param_2)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int local_454;
  HANDLE local_450;
  _WIN32_FIND_DATAA local_44c;
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  puVar1 = (uchar *)_SfGetFileNamePtrA_4(param_1);
  if (puVar1 == (uchar *)0x0) {
    return 0;
  }
  iVar2 = FUN_0040a570(this,puVar1,local_104,&local_454);
  if (-1 < iVar2) {
    if (local_454 != 0) {
      BVar4 = 1;
      _mbscpy(local_208,param_2);
      _SfAddSlashToPathName_8(local_208,0x104);
      _mbscat(local_208,"*.*");
      local_450 = FindFirstFileA((LPCSTR)local_208,&local_44c);
      if (local_450 != (HANDLE)0xffffffff) {
        while ((BVar4 != 0 && (-1 < iVar2))) {
          iVar3 = lstrcmpA(local_44c.cFileName,".");
          if ((iVar3 != 0) && (iVar3 = lstrcmpA(local_44c.cFileName,".."), iVar3 != 0)) {
            _mbscpy(local_30c,param_2);
            _SfAddSlashToPathName_8(local_30c,0x104);
            _mbscat(local_30c,(uchar *)local_44c.cFileName);
            if (((byte)local_44c.dwFileAttributes & 0x10) == 0) {
              iVar3 = FUN_0040a690(local_44c.cFileName,(LPCSTR)local_104,local_454);
              if (iVar3 != 0) {
                iVar2 = FUN_0040b0c0(this,(LPCSTR)local_30c,(LPCSTR)param_2,(uchar *)0x0);
              }
            }
            else if (((*(byte *)((int)this + 0x884) & 1) != 0) &&
                    (iVar3 = FUN_0040a690(local_44c.cFileName,(LPCSTR)local_104,local_454),
                    iVar3 != 0)) {
              iVar2 = FUN_0040c110(this,local_30c,(LPCSTR)param_2,0);
            }
          }
          BVar4 = FindNextFileA(local_450,&local_44c);
        }
      }
      FindClose(local_450);
      return iVar2;
    }
    FUN_00410c30(this,0xaaaaaaac,(uchar *)"AddWildcard",(uchar *)0x0);
    return 1;
  }
  return iVar2;
}


