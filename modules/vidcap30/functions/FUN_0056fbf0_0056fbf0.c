/* Module: vidcap30.exe
   Function: FUN_0056fbf0
   Address: 0056fbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056fbf0(int *param_1,BYTE *param_2)

{
  int iVar1;
  LSTATUS LVar2;
  int iVar3;
  CHAR local_144 [260];
  BYTE local_40 [28];
  DWORD local_24;
  int local_20;
  HKEY local_1c;
  DWORD local_18;
  int *local_14;
  int local_10;
  HKEY local_c;
  int local_8;
  
  local_24 = 1;
  local_18 = 0x19;
  local_8 = -0x7ffb1ebe;
  local_10 = 0;
  if (*param_1 != 0) {
    local_10 = *(int *)(*param_1 + 4);
  }
  local_14 = param_1;
  iVar1 = FUN_00570280(param_2);
  if ((iVar1 == 0) &&
     (LVar2 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x1c),0,(LPSTR)0x0,0,4,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_1c,(LPDWORD)0x0), LVar2 == 0)) {
    LVar2 = RegCreateKeyExA(local_1c,"License",0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_c,(LPDWORD)0x0);
    if (LVar2 == 0) {
      local_8 = FUN_0056e3f0(param_2);
      if (-1 < local_8) {
        FUN_00572a50(param_2);
        iVar1 = 0;
        if ((*(int *)(*param_1 + 0xc) == 0x3ff) || (iVar3 = FUN_0056f6c0(), iVar3 == 0)) {
          do {
            local_20 = iVar1 + 1;
            local_18 = 0x19;
            wsprintfA(local_144,"key%d",local_20);
            LVar2 = RegQueryValueExA(local_c,local_144,(LPDWORD)0x0,&local_24,local_40,&local_18);
            if (LVar2 != 0) break;
            FUN_00579db0();
            FUN_00579db0();
            lstrcpynA(&stack0xfffffeb0,(LPCSTR)local_40,2);
            lstrcpynA(&stack0xfffffeb0,"",2);
            iVar3 = lstrcmpA(&stack0xfffffeb0,&stack0xfffffeb0);
            iVar1 = local_20;
          } while (iVar3 != 0);
          iVar1 = RegSetValueExA(local_c,local_144,0,1,param_2,0x18);
        }
        else {
          wsprintfA(local_144,"keyTrial");
          iVar1 = RegSetValueExA(local_c,local_144,0,1,param_2,0x18);
        }
        if (iVar1 == 0) {
          if (local_10 != 0) {
            FUN_005721f0();
          }
          local_8 = 0;
        }
      }
      RegCloseKey(local_c);
    }
    RegCloseKey(local_1c);
  }
  return local_8;
}


