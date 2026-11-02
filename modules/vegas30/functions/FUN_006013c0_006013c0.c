/* Module: vegas30.exe
   Function: FUN_006013c0
   Address: 006013c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_006013c0(int param_1)

{
  DWORD dwIndex;
  LSTATUS LVar1;
  int iVar2;
  BYTE local_22c [260];
  BYTE local_128 [260];
  DWORD local_24;
  HKEY local_20;
  DWORD local_1c;
  int local_18;
  DWORD local_14;
  int local_10;
  DWORD local_c;
  HKEY local_8;
  
  local_1c = 0x104;
  local_14 = 0x19;
  local_22c[0] = '\0';
  local_128[0] = '\0';
  local_10 = param_1;
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_20);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_20,"License",0,0x2001f,&local_8);
    if (LVar1 == 0) {
      local_c = 1;
      iVar2 = RegEnumValueA(local_8,0,(LPSTR)local_128,&local_1c,(LPDWORD)0x0,&local_24,local_22c,
                            &local_14);
      while (iVar2 != 0x103) {
        FUN_0060ac30();
        FUN_0060ac30();
        lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,4);
        lstrcpynA(&stack0xfffffdc8,"key",4);
        iVar2 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
        if (iVar2 == 0) {
          iVar2 = FUN_005ff1d0(local_22c);
          if (iVar2 == 0) {
            iVar2 = FUN_006004a0();
            FUN_005ffab0(&local_18);
            if ((iVar2 != 0) && (-1 < local_18)) {
              iVar2 = RegDeleteValueA(local_8,(LPCSTR)local_128);
              local_c = local_c - 1;
joined_r0x006015c5:
              if (iVar2 < 0) {
                return iVar2;
              }
            }
          }
        }
        else {
          FUN_0060ac30();
          FUN_0060ac30();
          lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,2);
          lstrcpynA(&stack0xfffffdc8,"",2);
          iVar2 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
          if ((iVar2 == 0) && (iVar2 = FUN_005ff1d0(local_22c), iVar2 == 0)) {
            iVar2 = FUN_006004a0();
            FUN_005ffab0(&local_18);
            if ((iVar2 != 0) || (-1 < local_18)) {
              iVar2 = RegSetValueExA(local_8,(LPCSTR)local_128,0,1,local_128,0x18);
              goto joined_r0x006015c5;
            }
          }
        }
        local_1c = 0x104;
        local_14 = 0x19;
        _mbscpy(local_128,"");
        dwIndex = local_c;
        local_c = local_c + 1;
        iVar2 = RegEnumValueA(local_8,dwIndex,(LPSTR)local_128,&local_1c,(LPDWORD)0x0,&local_24,
                              local_22c,&local_14);
        param_1 = local_10;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_20);
  }
  _mbscpy((uchar *)(param_1 + 4),"");
  return 0;
}


