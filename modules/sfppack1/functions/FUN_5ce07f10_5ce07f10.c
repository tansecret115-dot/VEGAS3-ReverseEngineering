/* Module: sfppack1.dll
   Function: FUN_5ce07f10
   Address: 5ce07f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ce07f10(void *this,LPCSTR param_1)

{
  DWORD dwIndex;
  int iVar1;
  uint uVar2;
  LSTATUS LVar3;
  bool bVar4;
  HKEY local_84;
  HKEY local_80;
  LPCVOID local_7c;
  LPCVOID local_78;
  HKEY local_74;
  DWORD local_70;
  uint local_6c;
  uchar local_68 [28];
  uchar local_4c [28];
  CHAR local_30 [48];
  
  local_80 = (HKEY)0x0;
  local_84 = (HKEY)0x0;
  local_7c = (LPCVOID)0x0;
  iVar1 = FUN_5ce03780(this,param_1,&local_7c);
  if (((-1 < iVar1) && (*(int *)((int)local_7c + 4) != 0)) &&
     (iVar1 = FUN_5ce0c0a0((int)local_7c), iVar1 == -1)) {
    local_6c = FUN_5ce0c0c0((int)local_7c);
    local_6c = local_6c & 0xffff;
    iVar1 = FUN_5ce0cb20(*(uint *)((int)this + 0x30),(int *)&local_80,(uchar *)((int)this + 0x797));
    if (((-1 < iVar1) && (iVar1 = FUN_5ce0d5e0(local_80), iVar1 != 0)) &&
       (iVar1 = FUN_5ce0d160(local_80,&local_84), -1 < iVar1)) {
      local_70 = 0x2d;
      iVar1 = RegEnumKeyExA(local_84,0,local_30,&local_70,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      dwIndex = 1;
      while (iVar1 != 0x103) {
        if (iVar1 == 0) {
          FUN_5ce09790(this,local_4c);
          iVar1 = FUN_5ce0c4c0(local_30,(LPSTR)local_68,0x19);
          if (iVar1 < 0) {
            local_4c[0] = '\0';
          }
          else {
            _mbscat(local_4c,local_68);
          }
          local_78 = (LPCVOID)0x0;
          iVar1 = FUN_5ce03780(this,(LPCSTR)local_4c,&local_78);
          if (iVar1 < 0) {
LAB_5ce0807d:
            local_74 = (HKEY)0x0;
            LVar3 = RegOpenKeyExA(local_84,local_30,0,0x2001f,&local_74);
            if (LVar3 == 0) {
              FUN_5ce0d530(local_74,0);
              RegCloseKey(local_74);
            }
          }
          else {
            uVar2 = FUN_5ce0c0c0((int)local_78);
            bVar4 = (uVar2 & 0xffff) == local_6c;
            if (local_78 != (LPCVOID)0x0) {
              FUN_5cdb2150(local_78);
            }
            if (bVar4) goto LAB_5ce0807d;
          }
          local_70 = 0x2d;
        }
        iVar1 = RegEnumKeyExA(local_84,dwIndex,local_30,&local_70,(LPDWORD)0x0,(LPSTR)0x0,
                              (LPDWORD)0x0,(PFILETIME)0x0);
        dwIndex = dwIndex + 1;
      }
      FUN_5ce0d5a0(local_80);
    }
  }
  if (local_84 != (HKEY)0x0) {
    RegCloseKey(local_84);
  }
  if (local_80 != (HKEY)0x0) {
    RegCloseKey(local_80);
  }
  if (local_7c != (LPCVOID)0x0) {
    FUN_5cdb2150(local_7c);
  }
  return;
}


