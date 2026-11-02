/* Module: vidcap30.exe
   Function: FUN_0056feb0
   Address: 0056feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056feb0(int param_1,undefined4 *param_2,LPSTR param_3,int param_4)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  CHAR local_68 [28];
  BYTE local_4c [28];
  int local_30;
  int local_2c;
  HKEY local_28;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  int local_18;
  int local_14;
  HKEY local_10;
  DWORD local_c;
  CHAR local_8 [4];
  
  local_1c = 0x19;
  local_24 = 0x19;
  iVar3 = -0x7ff8fffb;
  local_20 = 1;
  local_c = 0;
  local_14 = -0x7ff8fffb;
  local_18 = 0;
  *param_2 = 0;
  local_2c = param_1;
  FUN_005742d0(local_8,3);
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x478),0,0x2001f,&local_28);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_28,local_8,0,0x2001f,&local_10);
    if (LVar1 == 0) {
      iVar2 = RegEnumValueA(local_10,0,local_68,&local_24,(LPDWORD)0x0,&local_20,local_4c,&local_1c)
      ;
      while (iVar2 != 0x103) {
        FUN_00579db0();
        FUN_00579db0();
        lstrcpynA(&stack0xffffff8c,local_68,2);
        lstrcpynA(&stack0xffffff8c,"",2);
        iVar3 = lstrcmpA(&stack0xffffff8c,&stack0xffffff8c);
        if ((iVar3 == 0) || (local_14 = FUN_0056e2c0(local_4c,&local_30), local_14 < 0)) {
          local_c = local_c + 1;
        }
        else {
          iVar3 = FUN_0056fbf0(local_4c);
          local_14 = iVar3;
          RegDeleteValueA(local_10,local_68);
          if (-1 < iVar3) {
            local_18 = 1;
            lstrcpynA(param_3,(LPCSTR)local_4c,param_4);
            param_3[param_4 + -1] = '\0';
            *param_2 = 1;
          }
          if (local_30 != 0) {
            FUN_00404b20(local_30);
          }
          iVar3 = local_14;
          if (local_18 != 0) break;
          local_c = local_c - 1;
        }
        iVar2 = RegEnumValueA(local_10,local_c,local_68,&local_24,(LPDWORD)0x0,&local_20,local_4c,
                              &local_1c);
        iVar3 = local_14;
      }
      RegCloseKey(local_10);
    }
    RegCloseKey(local_28);
  }
  return iVar3;
}


