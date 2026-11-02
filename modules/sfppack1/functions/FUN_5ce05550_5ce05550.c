/* Module: sfppack1.dll
   Function: FUN_5ce05550
   Address: 5ce05550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5ce05550(void *param_1)

{
  void *this;
  LSTATUS LVar1;
  int iVar2;
  DWORD DVar3;
  CHAR local_68 [28];
  BYTE local_4c [28];
  LPCVOID local_30;
  HKEY local_2c;
  void *local_28;
  int local_24;
  DWORD local_20 [4];
  HKEY local_10;
  DWORD local_c;
  CHAR local_8 [4];
  
  local_20[2] = 0x19;
  local_20[0] = 0x19;
  local_20[1] = 1;
  local_c = 0;
  local_20[3] = -0x7ff8fffb;
  local_24 = 0;
  if (*(int *)((int)param_1 + 0x7e4) == 0) {
    return 0;
  }
  local_28 = param_1;
  FUN_5ce09790(param_1,local_8);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)((int)param_1 + 0x478),0,0x2001f,&local_2c);
  if (LVar1 != 0) {
    return -0x7ff8fffb;
  }
  LVar1 = RegOpenKeyExA(local_2c,local_8,0,0x2001f,&local_10);
  DVar3 = -0x7ff8fffb;
  if (LVar1 == 0) {
    LVar1 = RegEnumValueA(local_10,0,local_68,local_20,(LPDWORD)0x0,local_20 + 1,local_4c,
                          local_20 + 2);
    if (LVar1 != 0x103) {
      do {
        FUN_5ce0ec20();
        FUN_5ce0ec20();
        lstrcpynA(&stack0xffffff8c,local_68,2);
        lstrcpynA(&stack0xffffff8c,"",2);
        iVar2 = lstrcmpA(&stack0xffffff8c,&stack0xffffff8c);
        this = local_28;
        if (iVar2 == 0) {
LAB_5ce05714:
          local_c = local_c + 1;
        }
        else {
          local_20[3] = FUN_5ce03780(local_28,(LPCSTR)local_4c,&local_30);
          if ((int)local_20[3] < 0) goto LAB_5ce05714;
          iVar2 = FUN_5ce050b0(this,local_4c);
          local_20[3] = iVar2;
          RegDeleteValueA(local_10,local_68);
          if (-1 < iVar2) {
            local_24 = 1;
          }
          if (local_30 != (LPCVOID)0x0) {
            FUN_5cdb2150(local_30);
          }
          local_c = local_c - 1;
        }
        LVar1 = RegEnumValueA(local_10,local_c,local_68,local_20,(LPDWORD)0x0,local_20 + 1,local_4c,
                              local_20 + 2);
      } while (LVar1 != 0x103);
      if (local_24 == 1) {
        FUN_5ce05ef0(local_28,(HKEY)0x2,(HKEY)0x0);
      }
    }
    RegCloseKey(local_10);
    DVar3 = local_20[3];
  }
  RegCloseKey(local_2c);
  return DVar3;
}


