/* Module: sftrans1.dll
   Function: FUN_00531c40
   Address: 00531c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00531c40(int param_1,LPCSTR param_2)

{
  DWORD dwIndex;
  LSTATUS LVar1;
  int iVar2;
  BYTE local_22c [260];
  BYTE local_128 [260];
  DWORD local_24;
  undefined1 local_20 [4];
  HKEY local_1c;
  DWORD local_18;
  DWORD local_14;
  int local_10;
  DWORD local_c;
  HKEY local_8;
  
  local_18 = 0x104;
  local_14 = 0x19;
  local_10 = param_1;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_1c);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_1c,"License",0,0x2001f,&local_8);
    if (LVar1 == 0) {
      local_c = 1;
      iVar2 = RegEnumValueA(local_8,0,(LPSTR)local_22c,&local_18,(LPDWORD)0x0,&local_24,local_128,
                            &local_14);
      while (iVar2 != 0x103) {
        FUN_00551640();
        FUN_00551640();
        lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_22c,4);
        lstrcpynA(&stack0xfffffdc8,"key",4);
        iVar2 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
        if (iVar2 == 0) {
          FUN_00551640();
          FUN_00551640();
          lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,2);
          lstrcpynA(&stack0xfffffdc8,"",2);
          iVar2 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
          if (iVar2 == 0) goto LAB_00531df1;
          iVar2 = FUN_0052fdb0(local_128);
          if (((iVar2 < 0) || (iVar2 = lstrcmpA((LPCSTR)local_128,param_2), iVar2 == 0)) ||
             ((iVar2 = FUN_00530690(local_20), iVar2 < 0 && (iVar2 = FUN_00531080(), iVar2 != 0))))
          {
            iVar2 = RegDeleteValueA(local_8,(LPCSTR)local_22c);
            local_c = local_c - 1;
joined_r0x00531ef6:
            if (iVar2 < 0) {
              return iVar2;
            }
          }
        }
        else {
LAB_00531df1:
          FUN_00551640();
          FUN_00551640();
          lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_22c,2);
          lstrcpynA(&stack0xfffffdc8,"",2);
          iVar2 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
          if (iVar2 == 0) {
            FUN_00551640();
            FUN_00551640();
            lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,2);
            lstrcpynA(&stack0xfffffdc8,"",2);
            iVar2 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
            if ((iVar2 != 0) &&
               (((iVar2 = FUN_0052fdb0(local_128), iVar2 < 0 ||
                 (iVar2 = lstrcmpA((LPCSTR)local_128,param_2), iVar2 == 0)) ||
                (iVar2 = FUN_00530690(local_20), -1 < iVar2)))) {
              iVar2 = RegSetValueExA(local_8,(LPCSTR)local_22c,0,1,local_22c,0x18);
              goto joined_r0x00531ef6;
            }
          }
        }
        local_18 = 0x104;
        local_14 = 0x19;
        _mbscpy(local_22c,"");
        dwIndex = local_c;
        local_c = local_c + 1;
        iVar2 = RegEnumValueA(local_8,dwIndex,(LPSTR)local_22c,&local_18,(LPDWORD)0x0,&local_24,
                              local_128,&local_14);
        param_1 = local_10;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_1c);
  }
  _mbscpy((uchar *)(param_1 + 4),"");
  return 0;
}


