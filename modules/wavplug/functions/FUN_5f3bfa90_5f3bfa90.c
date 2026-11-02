/* Module: wavplug.dll
   Function: FUN_5f3bfa90
   Address: 5f3bfa90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f3bfa90(void *this,LPSTR param_1,int param_2,int param_3)

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
        FUN_5f3c77a0();
        FUN_5f3c77a0();
        lstrcpynA(&stack0xfffffcbc,local_338,4);
        lstrcpynA(&stack0xfffffcbc,"key",4);
        iVar4 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
        if (iVar4 == 0) {
LAB_5f3bfbd0:
          FUN_5f3c77a0();
          FUN_5f3c77a0();
          lstrcpynA(&stack0xfffffcbc,(LPCSTR)local_130,2);
          FUN_5f3a1080(&stack0xfffffcbc,"",2);
          iVar4 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
          if (iVar4 != 0) {
            if (local_8 != (LPCVOID)0x0) {
              FUN_5f382130(local_8);
              local_8 = (LPCVOID)0x0;
            }
            pvVar1 = local_20;
            local_10 = FUN_5f3bc150(local_20,(LPCSTR)local_130,&local_8);
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
                  iVar4 = FUN_5f3c4a60((int)local_8);
                  iVar5 = FUN_5f3c4a60((int)pvVar2);
                  if ((short)iVar5 == (short)iVar4) {
                    if (param_3 == 0) {
                      if ((*(int *)((int)pvVar2 + 4) != 0) && (*(int *)((int)local_8 + 4) == 0))
                      goto LAB_5f3bfcc4;
                    }
                    else if ((*(int *)((int)pvVar2 + 4) == 0) && (*(int *)((int)local_8 + 4) != 0))
                    {
LAB_5f3bfcc4:
                      FUN_5f382130(pvVar2);
                      local_c = local_8;
                      local_8 = (LPCVOID)0x0;
                      _mbscpy(local_234,local_130);
                    }
                    goto LAB_5f3bfd4c;
                  }
                  iVar4 = FUN_5f3c4a60((int)local_8);
                  iVar5 = FUN_5f3c4a60((int)pvVar2);
                  iVar4 = (**(code **)((int)local_20 + 0x678))(iVar5,iVar4);
                  if (iVar4 == 0) goto LAB_5f3bfd4c;
                }
                FUN_5f382130(pvVar2);
                local_c = local_8;
                local_8 = (LPCVOID)0x0;
                _mbscpy(local_234,local_130);
              }
            }
          }
        }
        else {
          FUN_5f3c77a0();
          FUN_5f3c77a0();
          lstrcpynA(&stack0xfffffcbc,local_338,2);
          FUN_5f3a1080(&stack0xfffffcbc,"",2);
          iVar4 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
          if (iVar4 == 0) goto LAB_5f3bfbd0;
        }
LAB_5f3bfd4c:
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
      FUN_5f382130(local_c);
    }
  }
  if (local_8 != (LPCVOID)0x0) {
    FUN_5f382130(local_8);
  }
  return local_10;
}


