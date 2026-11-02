/* Module: Setup.exe
   Function: FUN_0042b3b0
   Address: 0042b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0042b3b0(void *this,uint param_1)

{
  uchar *puVar1;
  DWORD dwIndex;
  int iVar2;
  uint uVar3;
  LSTATUS LVar4;
  HKEY local_8c;
  HKEY local_88;
  LPCVOID local_84;
  undefined4 local_80;
  DWORD local_7c;
  HKEY local_78;
  int local_74;
  DWORD local_70;
  DWORD local_6c;
  uchar local_68 [28];
  CHAR local_4c [48];
  uchar local_1c [28];
  
  puVar1 = (uchar *)((int)this + 0x797);
  local_8c = (HKEY)0x0;
  local_88 = (HKEY)0x0;
  local_80 = 0;
  iVar2 = FUN_00430010(*(uint *)((int)this + 0x30),(int *)&local_8c,puVar1);
  if ((((-1 < iVar2) ||
       ((iVar2 = FUN_0042fb90(*(uint *)((int)this + 0x30),&local_8c,puVar1), -1 < iVar2 &&
        (iVar2 = FUN_00430010(*(uint *)((int)this + 0x30),(int *)&local_8c,puVar1), -1 < iVar2))))
      && (iVar2 = FUN_00430ad0(local_8c), iVar2 != 0)) &&
     (iVar2 = FUN_00430650(local_8c,&local_88), -1 < iVar2)) {
    local_7c = 0x2d;
    iVar2 = RegEnumKeyExA(local_88,0,local_4c,&local_7c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    dwIndex = 1;
    while (iVar2 != 0x103) {
      if ((iVar2 == 0) || (iVar2 == 0xea)) {
        FUN_0042c9d0(this,local_68);
        iVar2 = FUN_0042f9a0(local_4c,(LPSTR)local_1c,0x19);
        if (iVar2 < 0) {
          local_68[0] = '\0';
        }
        else {
          _mbscat(local_68,local_1c);
        }
        local_84 = (LPCVOID)0x0;
        iVar2 = FUN_00426910(this,(LPCSTR)local_68,&local_84);
        if (-1 < iVar2) {
          uVar3 = FUN_0042f5a0((int)local_84);
          if ((uVar3 & 0xffff) == param_1) {
            local_78 = (HKEY)0x0;
            LVar4 = RegOpenKeyExA(local_88,local_4c,0,0x20019,&local_78);
            if (LVar4 == 0) {
              local_70 = 4;
              uVar3 = FUN_004307a0(local_78,"1",&local_6c,(byte *)&local_74,&local_70);
              RegCloseKey(local_78);
              if ((-1 < (int)uVar3) && (iVar2 = _SfSpike2GetMachineCode_4(), local_74 == iVar2)) {
                if (local_84 != (LPCVOID)0x0) {
                  FUN_00403420(local_84);
                }
                local_80 = 1;
                break;
              }
            }
          }
          if (local_84 != (LPCVOID)0x0) {
            FUN_00403420(local_84);
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


