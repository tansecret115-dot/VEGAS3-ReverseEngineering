/* Module: vegas30k.dll
   Function: FUN_0102af90
   Address: 0102af90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0102af90(HKEY param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  LSTATUS LVar3;
  int iVar4;
  DWORD dwIndex;
  code *pcVar5;
  int iVar6;
  HKEY local_160;
  HKEY local_15c;
  HKEY local_158;
  DWORD local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  DWORD local_144;
  int local_140;
  DWORD local_13c;
  DWORD local_138;
  DWORD local_134;
  int local_130;
  CHAR local_12c [40];
  CHAR local_104 [260];
  
  pcVar5 = RegOpenKeyExA_exref;
  iVar6 = 0;
  local_150 = 0x80004005;
  local_160 = (HKEY)0x0;
  local_140 = 0;
  bVar2 = false;
  local_148 = 0;
  local_14c = 0;
  LVar3 = RegOpenKeyExA(param_1,"Pins",0,0x20019,&local_160);
  if (LVar3 != 0) {
    return 0x80004005;
  }
  local_13c = 0;
  local_154 = 0x104;
  iVar4 = RegEnumKeyExA(local_160,0,local_104,&local_154,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                        (PFILETIME)0x0);
  do {
    if (iVar4 != 0) {
      *param_2 = 0;
      if ((local_140 != 0) || (bVar2)) {
        local_150 = 0;
        if (local_140 == 0) {
          if (bVar2) {
            *param_2 = 1;
          }
        }
        else {
          *param_2 = (-(uint)bVar2 & 2) + 2;
        }
      }
      if ((local_148 != 0) || (iVar6 != 0)) {
        local_150 = 0;
        if (local_148 == 0) {
          if (iVar6 != 0) {
            *param_2 = 1;
          }
        }
        else {
          *param_2 = (iVar6 != 0) + 2;
        }
      }
      RegCloseKey(local_160);
      return local_150;
    }
    iVar4 = (*pcVar5)(local_160,local_104,0,0x20019,&local_158);
    if (iVar4 == 0) {
      local_138 = 4;
      LVar3 = RegQueryValueExA(local_158,"Direction",(LPDWORD)0x0,&local_134,(LPBYTE)&local_130,
                               &local_138);
      if (((LVar3 == 0) && (local_134 == 4)) && (local_138 == 4)) {
        bVar1 = false;
        iVar6 = (*pcVar5)(local_158,"Types",0,0x20019,&local_15c);
        if (iVar6 == 0) {
          dwIndex = 0;
          local_144 = 0x28;
          iVar6 = RegEnumKeyExA(local_15c,0,local_12c,&local_144,(LPDWORD)0x0,(LPSTR)0x0,
                                (LPDWORD)0x0,(PFILETIME)0x0);
          while (iVar6 == 0) {
            iVar6 = FUN_0102b200(local_15c,local_12c);
            if (iVar6 != 0) {
              bVar1 = true;
              break;
            }
            dwIndex = dwIndex + 1;
            iVar6 = RegEnumKeyExA(local_15c,dwIndex,local_12c,&local_144,(LPDWORD)0x0,(LPSTR)0x0,
                                  (LPDWORD)0x0,(PFILETIME)0x0);
          }
          RegCloseKey(local_15c);
          pcVar5 = RegOpenKeyExA_exref;
        }
        if (local_130 == 0) {
          if (bVar1) {
            local_140 = 1;
          }
          else {
            local_148 = 1;
          }
        }
        else if (local_130 == 1) {
          if (bVar1) {
            bVar2 = true;
          }
          else {
            local_14c = 1;
          }
        }
      }
      RegCloseKey(local_158);
      iVar6 = local_14c;
    }
    local_13c = local_13c + 1;
    local_154 = 0x104;
    iVar4 = RegEnumKeyExA(local_160,local_13c,local_104,&local_154,(LPDWORD)0x0,(LPSTR)0x0,
                          (LPDWORD)0x0,(PFILETIME)0x0);
  } while( true );
}


