/* Module: vidpcore.dll
   Function: FUN_5df0ee30
   Address: 5df0ee30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5df0ee30(int param_1,uint param_2)

{
  DWORD dwIndex;
  int iVar1;
  int iVar2;
  uint uVar3;
  LSTATUS LVar4;
  HKEY local_8c;
  HKEY local_88;
  int local_84;
  undefined4 local_80;
  DWORD local_7c;
  HKEY local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c [4];
  uchar local_68 [28];
  CHAR local_4c [48];
  uchar local_1c [28];
  
  iVar2 = param_1 + 0x797;
  local_8c = (HKEY)0x0;
  local_88 = (HKEY)0x0;
  local_80 = 0;
  iVar1 = FUN_5df137f0(*(undefined4 *)(param_1 + 0x30),&local_8c,iVar2,0x2e);
  if ((((-1 < iVar1) ||
       ((iVar1 = FUN_5df13370(*(undefined4 *)(param_1 + 0x30),&local_8c,iVar2,0x2e), -1 < iVar1 &&
        (iVar2 = FUN_5df137f0(*(undefined4 *)(param_1 + 0x30),&local_8c,iVar2,0x2e), -1 < iVar2))))
      && (iVar2 = FUN_5df142b0(local_8c), iVar2 != 0)) &&
     (iVar2 = FUN_5df13e30(local_8c,&local_88), -1 < iVar2)) {
    local_7c = 0x2d;
    iVar2 = RegEnumKeyExA(local_88,0,local_4c,&local_7c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    dwIndex = 1;
    while (iVar2 != 0x103) {
      if ((iVar2 == 0) || (iVar2 == 0xea)) {
        FUN_5df10450(local_68,*(undefined4 *)(param_1 + 0x30));
        iVar2 = FUN_5df13180(local_4c,local_1c,0x19);
        if (iVar2 < 0) {
          local_68[0] = '\0';
        }
        else {
          _mbscat(local_68,local_1c);
        }
        local_84 = 0;
        iVar2 = FUN_5df0a440(local_68,&local_84);
        if (-1 < iVar2) {
          uVar3 = FUN_5df12d80();
          if ((uVar3 & 0xffff) == param_2) {
            local_78 = (HKEY)0x0;
            LVar4 = RegOpenKeyExA(local_88,local_4c,0,0x20019,&local_78);
            if (LVar4 == 0) {
              local_70 = 4;
              iVar2 = FUN_5df13f80(local_78,&DAT_5df3795c,local_6c,&local_74,&local_70);
              RegCloseKey(local_78);
              if ((-1 < iVar2) && (iVar2 = FUN_5df12530(1), local_74 == iVar2)) {
                if (local_84 != 0) {
                  FUN_5de03b10(local_84);
                }
                local_80 = 1;
                break;
              }
            }
          }
          if (local_84 != 0) {
            FUN_5de03b10(local_84);
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
  return local_80;
}


