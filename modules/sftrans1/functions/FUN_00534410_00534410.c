/* Module: sftrans1.dll
   Function: FUN_00534410
   Address: 00534410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00534410(int param_1,undefined4 param_2)

{
  DWORD dwIndex;
  int iVar1;
  uint uVar2;
  LSTATUS LVar3;
  bool bVar4;
  HKEY local_84;
  HKEY local_80;
  int local_7c;
  int local_78;
  HKEY local_74;
  DWORD local_70;
  uint local_6c;
  uchar local_68 [28];
  uchar local_4c [28];
  CHAR local_30 [48];
  
  local_80 = (HKEY)0x0;
  local_84 = (HKEY)0x0;
  local_7c = 0;
  iVar1 = FUN_0052fc80(param_2,&local_7c);
  if (((-1 < iVar1) && (*(int *)(local_7c + 4) != 0)) && (iVar1 = FUN_00538570(), iVar1 == -1)) {
    local_6c = FUN_00538590();
    local_6c = local_6c & 0xffff;
    iVar1 = FUN_00539000(*(undefined4 *)(param_1 + 0x30),&local_80,param_1 + 0x797,0x2e);
    if (((-1 < iVar1) && (iVar1 = FUN_00539ac0(local_80), iVar1 != 0)) &&
       (iVar1 = FUN_00539640(local_80,&local_84), -1 < iVar1)) {
      local_70 = 0x2d;
      iVar1 = RegEnumKeyExA(local_84,0,local_30,&local_70,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      dwIndex = 1;
      while (iVar1 != 0x103) {
        if (iVar1 == 0) {
          FUN_00535c90(local_4c,*(undefined4 *)(param_1 + 0x30));
          iVar1 = FUN_00538990(local_30,local_68,0x19);
          if (iVar1 < 0) {
            local_4c[0] = '\0';
          }
          else {
            _mbscat(local_4c,local_68);
          }
          local_78 = 0;
          iVar1 = FUN_0052fc80(local_4c,&local_78);
          if (iVar1 < 0) {
LAB_0053457d:
            local_74 = (HKEY)0x0;
            LVar3 = RegOpenKeyExA(local_84,local_30,0,0x2001f,&local_74);
            if (LVar3 == 0) {
              FUN_00539a10(local_74,0);
              RegCloseKey(local_74);
            }
          }
          else {
            uVar2 = FUN_00538590();
            bVar4 = (uVar2 & 0xffff) == local_6c;
            if (local_78 != 0) {
              FUN_004035f0(local_78);
            }
            if (bVar4) goto LAB_0053457d;
          }
          local_70 = 0x2d;
        }
        iVar1 = RegEnumKeyExA(local_84,dwIndex,local_30,&local_70,(LPDWORD)0x0,(LPSTR)0x0,
                              (LPDWORD)0x0,(PFILETIME)0x0);
        dwIndex = dwIndex + 1;
      }
      FUN_00539a80(local_80);
    }
  }
  if (local_84 != (HKEY)0x0) {
    RegCloseKey(local_84);
  }
  if (local_80 != (HKEY)0x0) {
    RegCloseKey(local_80);
  }
  if (local_7c != 0) {
    FUN_004035f0(local_7c);
  }
  return;
}


