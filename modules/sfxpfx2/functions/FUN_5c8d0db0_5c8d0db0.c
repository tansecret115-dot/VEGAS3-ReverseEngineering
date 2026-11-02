/* Module: sfxpfx2.dll
   Function: FUN_5c8d0db0
   Address: 5c8d0db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5c8d0db0(int *param_1)

{
  int *piVar1;
  DWORD dwIndex;
  LSTATUS LVar2;
  int iVar3;
  BYTE local_22c [260];
  BYTE local_128 [260];
  DWORD local_24;
  HKEY local_20;
  DWORD local_1c;
  int local_18;
  DWORD local_14;
  int *local_10;
  DWORD local_c;
  HKEY local_8;
  
  local_1c = 0x104;
  local_14 = 0x19;
  local_22c[0] = '\0';
  local_128[0] = '\0';
  local_10 = param_1;
  LVar2 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x1c),0,0x20019,&local_20);
  if (LVar2 == 0) {
    LVar2 = RegOpenKeyExA(local_20,"License",0,0x2001f,&local_8);
    if (LVar2 == 0) {
      local_c = 1;
      iVar3 = RegEnumValueA(local_8,0,(LPSTR)local_128,&local_1c,(LPDWORD)0x0,&local_24,local_22c,
                            &local_14);
      while (iVar3 != 0x103) {
        FUN_5c8d9f20();
        FUN_5c8d9f20();
        lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,4);
        lstrcpynA(&stack0xfffffdc8,"key",4);
        iVar3 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
        piVar1 = local_10;
        if (iVar3 == 0) {
          iVar3 = FUN_5c8cebc0(local_10,local_22c);
          if (iVar3 == 0) {
            iVar3 = FUN_5c8cfe90(piVar1);
            FUN_5c8cf4a0(piVar1,&local_18);
            if ((iVar3 != 0) && (-1 < local_18)) {
              iVar3 = RegDeleteValueA(local_8,(LPCSTR)local_128);
              local_c = local_c - 1;
joined_r0x5c8d0fb5:
              if (iVar3 < 0) {
                return iVar3;
              }
            }
          }
        }
        else {
          FUN_5c8d9f20();
          FUN_5c8d9f20();
          lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,2);
          lstrcpynA(&stack0xfffffdc8,"",2);
          iVar3 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
          if ((iVar3 == 0) &&
             (iVar3 = FUN_5c8cebc0(local_10,local_22c), piVar1 = local_10, iVar3 == 0)) {
            iVar3 = FUN_5c8cfe90(local_10);
            FUN_5c8cf4a0(piVar1,&local_18);
            if ((iVar3 != 0) || (-1 < local_18)) {
              iVar3 = RegSetValueExA(local_8,(LPCSTR)local_128,0,1,local_128,0x18);
              goto joined_r0x5c8d0fb5;
            }
          }
        }
        local_1c = 0x104;
        local_14 = 0x19;
        _mbscpy(local_128,"");
        dwIndex = local_c;
        local_c = local_c + 1;
        iVar3 = RegEnumValueA(local_8,dwIndex,(LPSTR)local_128,&local_1c,(LPDWORD)0x0,&local_24,
                              local_22c,&local_14);
        param_1 = local_10;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_20);
  }
  _mbscpy((uchar *)(param_1 + 1),"");
  return 0;
}


