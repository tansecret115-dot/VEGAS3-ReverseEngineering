/* Module: vidcap30.exe
   Function: FUN_00570f60
   Address: 00570f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00570f60(int param_1,LPCSTR param_2)

{
  DWORD dwIndex;
  LSTATUS LVar1;
  int iVar2;
  undefined4 uVar3;
  CHAR local_228 [260];
  BYTE local_124 [260];
  DWORD local_20;
  HKEY local_1c;
  DWORD local_18;
  undefined4 local_14;
  HKEY local_10;
  DWORD local_c;
  DWORD local_8;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar3 = 0x8000ffff;
  local_14 = 0x8000ffff;
  local_8 = 0x104;
  local_c = 0x19;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_1c);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_1c,"License",0,0x20019,&local_10);
    if (LVar1 == 0) {
      local_18 = 1;
      iVar2 = RegEnumValueA(local_10,0,local_228,&local_8,(LPDWORD)0x0,&local_20,local_124,&local_c)
      ;
      while (iVar2 != 0x103) {
        FUN_00579db0();
        FUN_00579db0();
        lstrcpynA(&stack0xfffffdcc,local_228,4);
        lstrcpynA(&stack0xfffffdcc,"key",4);
        iVar2 = lstrcmpA(&stack0xfffffdcc,&stack0xfffffdcc);
        if (iVar2 == 0) {
LAB_005710a8:
          FUN_00579db0();
          FUN_00579db0();
          lstrcpynA(&stack0xfffffdcc,(LPCSTR)local_124,2);
          lstrcpynA(&stack0xfffffdcc,"",2);
          iVar2 = lstrcmpA(&stack0xfffffdcc,&stack0xfffffdcc);
          if ((iVar2 != 0) && (iVar2 = lstrcmpA((LPCSTR)local_124,param_2), iVar2 == 0)) {
            local_14 = 0;
          }
        }
        else {
          FUN_00579db0();
          FUN_00579db0();
          lstrcpynA(&stack0xfffffdcc,local_228,2);
          lstrcpynA(&stack0xfffffdcc,"",2);
          iVar2 = lstrcmpA(&stack0xfffffdcc,&stack0xfffffdcc);
          if (iVar2 == 0) goto LAB_005710a8;
        }
        dwIndex = local_18;
        local_18 = local_18 + 1;
        local_8 = 0x104;
        local_c = 0x19;
        iVar2 = RegEnumValueA(local_10,dwIndex,local_228,&local_8,(LPDWORD)0x0,&local_20,local_124,
                              &local_c);
        uVar3 = local_14;
      }
      RegCloseKey(local_10);
    }
    RegCloseKey(local_1c);
  }
  return uVar3;
}


