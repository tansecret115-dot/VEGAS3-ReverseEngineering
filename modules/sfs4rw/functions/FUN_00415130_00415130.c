/* Module: sfs4rw.dll
   Function: FUN_00415130
   Address: 00415130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00415130(void *param_1)

{
  uchar *puVar1;
  DWORD dwIndex;
  int iVar2;
  LSTATUS LVar3;
  uint uVar4;
  HKEY local_8c;
  HKEY local_88;
  undefined4 local_84;
  LPCVOID local_80;
  DWORD local_7c;
  HKEY local_78;
  int local_74;
  DWORD local_70;
  DWORD local_6c;
  uchar local_68 [28];
  CHAR local_4c [48];
  uchar local_1c [28];
  
  puVar1 = (uchar *)((int)param_1 + 0x797);
  local_8c = (HKEY)0x0;
  local_88 = (HKEY)0x0;
  local_84 = 0;
  iVar2 = FUN_00419e70(*(uint *)((int)param_1 + 0x30),(int *)&local_8c,puVar1);
  if ((((-1 < iVar2) ||
       ((iVar2 = FUN_004199f0(*(uint *)((int)param_1 + 0x30),&local_8c,puVar1), -1 < iVar2 &&
        (iVar2 = FUN_00419e70(*(uint *)((int)param_1 + 0x30),(int *)&local_8c,puVar1), -1 < iVar2)))
       ) && (iVar2 = FUN_0041a930(local_8c), iVar2 != 0)) &&
     (iVar2 = FUN_0041a4b0(local_8c,&local_88), -1 < iVar2)) {
    local_7c = 0x2d;
    iVar2 = RegEnumKeyExA(local_88,0,local_4c,&local_7c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    dwIndex = 1;
    while (iVar2 != 0x103) {
      if ((iVar2 == 0) || (iVar2 == 0xea)) {
        FUN_00416510(param_1,local_68);
        iVar2 = FUN_00419800(local_4c,(LPSTR)local_1c,0x19);
        if (iVar2 < 0) {
          local_68[0] = '\0';
        }
        else {
          _mbscat(local_68,local_1c);
        }
        local_80 = (LPCVOID)0x0;
        iVar2 = FUN_00410500(param_1,(LPCSTR)local_68,&local_80);
        if (-1 < iVar2) {
          local_78 = (HKEY)0x0;
          LVar3 = RegOpenKeyExA(local_88,local_4c,0,0x20019,&local_78);
          if (LVar3 == 0) {
            local_70 = 4;
            uVar4 = FUN_0041a600(local_78,"1",&local_6c,(byte *)&local_74,&local_70);
            RegCloseKey(local_78);
            if ((-1 < (int)uVar4) && (iVar2 = FUN_00418bb0(), local_74 == iVar2)) {
              if (local_80 != (LPCVOID)0x0) {
                FUN_00401220(local_80);
              }
              local_84 = 1;
              break;
            }
          }
          if (local_80 != (LPCVOID)0x0) {
            FUN_00401220(local_80);
          }
        }
      }
      local_7c = 0x2d;
      iVar2 = RegEnumKeyExA(local_88,dwIndex,local_4c,&local_7c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                            ,(PFILETIME)0x0);
      dwIndex = dwIndex + 1;
    }
  }
  if (local_88 != (HKEY)0x0) {
    RegCloseKey(local_88);
  }
  if (local_8c != (HKEY)0x0) {
    RegCloseKey(local_8c);
  }
  return local_84;
}


