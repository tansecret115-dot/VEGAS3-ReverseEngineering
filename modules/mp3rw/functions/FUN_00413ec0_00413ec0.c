/* Module: mp3rw.dll
   Function: FUN_00413ec0
   Address: 00413ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00413ec0(void *this,LPSTR param_1,int param_2,int param_3)

{
  uint dwIndex;
  void *pvVar1;
  LPCVOID pvVar2;
  LSTATUS LVar3;
  int iVar4;
  int iVar5;
  CHAR local_338 [260];
  uchar local_234 [260];
  BYTE local_130 [260];
  DWORD local_2c;
  HKEY local_28;
  uint local_24;
  void *local_20;
  HKEY local_1c;
  DWORD local_18;
  DWORD local_14;
  int local_10;
  LPCVOID local_c;
  LPCVOID local_8;
  
  local_10 = -0x7fffbffb;
  local_c = (LPCVOID)0x0;
  local_8 = (LPCVOID)0x0;
  local_14 = 0x104;
  local_18 = 0x19;
  local_20 = this;
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_28);
  if (LVar3 == 0) {
    LVar3 = RegOpenKeyExA(local_28,"License",0,0x20019,&local_1c);
    if (LVar3 == 0) {
      local_24 = 1;
      iVar4 = RegEnumValueA(local_1c,0,local_338,&local_14,(LPDWORD)0x0,&local_2c,local_130,
                            &local_18);
      while (iVar4 != 0x103) {
        FUN_0048b360();
        FUN_0048b360();
        lstrcpynA(&stack0xfffffcbc,local_338,4);
        lstrcpynA(&stack0xfffffcbc,"key",4);
        iVar4 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
        if (iVar4 == 0) {
LAB_00414000:
          FUN_0048b360();
          FUN_0048b360();
          lstrcpynA(&stack0xfffffcbc,(LPCSTR)local_130,2);
          FUN_00416b90(&stack0xfffffcbc,"",2);
          iVar4 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
          if (iVar4 != 0) {
            if (local_8 != (LPCVOID)0x0) {
              FUN_00401220(local_8);
              local_8 = (LPCVOID)0x0;
            }
            pvVar1 = local_20;
            local_10 = FUN_00410580(local_20,(LPCSTR)local_130,&local_8);
            pvVar2 = local_c;
            if ((-1 < local_10) &&
               ((*(int *)((int)local_8 + 0xc) == 0x3ff || (*(int *)((int)local_8 + 4) == 0)))) {
              if (local_c == (LPCVOID)0x0) {
                local_c = local_8;
                local_8 = (LPCVOID)0x0;
                _mbscpy(local_234,local_130);
              }
              else {
                if (*(int *)((int)pvVar1 + 0x678) != 0) {
                  iVar4 = FUN_00419480((int)local_8);
                  iVar5 = FUN_00419480((int)pvVar2);
                  if ((short)iVar5 == (short)iVar4) {
                    if (param_3 == 0) {
                      if ((*(int *)((int)pvVar2 + 4) != 0) && (*(int *)((int)local_8 + 4) == 0))
                      goto LAB_004140f4;
                    }
                    else if ((*(int *)((int)pvVar2 + 4) == 0) && (*(int *)((int)local_8 + 4) != 0))
                    {
LAB_004140f4:
                      FUN_00401220(pvVar2);
                      local_c = local_8;
                      local_8 = (LPCVOID)0x0;
                      _mbscpy(local_234,local_130);
                    }
                    goto LAB_0041417c;
                  }
                  iVar4 = FUN_00419480((int)local_8);
                  iVar5 = FUN_00419480((int)pvVar2);
                  iVar4 = (**(code **)((int)local_20 + 0x678))(iVar5,iVar4);
                  if (iVar4 == 0) goto LAB_0041417c;
                }
                FUN_00401220(pvVar2);
                local_c = local_8;
                local_8 = (LPCVOID)0x0;
                _mbscpy(local_234,local_130);
              }
            }
          }
        }
        else {
          FUN_0048b360();
          FUN_0048b360();
          lstrcpynA(&stack0xfffffcbc,local_338,2);
          FUN_00416b90(&stack0xfffffcbc,"",2);
          iVar4 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
          if (iVar4 == 0) goto LAB_00414000;
        }
LAB_0041417c:
        dwIndex = local_24;
        local_14 = 0x104;
        local_18 = 0x19;
        if (0x15 < local_24) break;
        local_24 = local_24 + 1;
        iVar4 = RegEnumValueA(local_1c,dwIndex,local_338,&local_14,(LPDWORD)0x0,&local_2c,local_130,
                              &local_18);
      }
      RegCloseKey(local_1c);
    }
    RegCloseKey(local_28);
    if (local_c != (LPCVOID)0x0) {
      local_10 = 0;
      lstrcpynA(param_1,(LPCSTR)local_234,param_2);
      param_1[param_2 + -1] = '\0';
      FUN_00401220(local_c);
    }
  }
  if (local_8 != (LPCVOID)0x0) {
    FUN_00401220(local_8);
  }
  return local_10;
}


