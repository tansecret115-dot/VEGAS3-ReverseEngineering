/* Module: vegas30.exe
   Function: FUN_00601f70
   Address: 00601f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00601f70(int param_1,uchar *param_2)

{
  uint dwIndex;
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  CHAR local_254 [260];
  uchar local_150 [260];
  int local_4c;
  DWORD local_48;
  BYTE local_44 [28];
  uint local_28;
  HKEY local_24;
  uint local_20;
  HKEY local_1c;
  uint local_18;
  DWORD local_14;
  int local_10;
  DWORD local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0x104;
  local_c = 0x19;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_4c = param_1;
  _mbscpy(local_150,"");
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_24);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_24,"License",0,0x20019,&local_1c);
    if (LVar1 == 0) {
      local_28 = 1;
      iVar2 = RegEnumValueA(local_1c,0,local_254,&local_14,(LPDWORD)0x0,&local_48,local_44,&local_c)
      ;
      while (iVar2 != 0x103) {
        FUN_0060ac30();
        FUN_0060ac30();
        pcVar5 = lstrcpynA_exref;
        lstrcpynA(&stack0xfffffda0,local_254,4);
        lstrcpynA(&stack0xfffffda0,"key",4);
        iVar2 = lstrcmpA(&stack0xfffffda0,&stack0xfffffda0);
        if (iVar2 == 0) {
LAB_006020cd:
          FUN_0060ac30();
          FUN_0060ac30();
          (*pcVar5)(&stack0xfffffda0,local_44,2);
          FUN_005f3290(&stack0xfffffda0,&DAT_0060f98c,2);
          iVar3 = lstrcmpA(&stack0xfffffda0,&stack0xfffffda0);
          iVar2 = local_4c;
          if (iVar3 != 0) {
            iVar3 = FUN_006019b0(&local_10,&local_20,local_44,0,0);
            if (*(int *)(iVar2 + 0x678) == 0) {
              iVar4 = FUN_006019b0(&local_8,&local_18,local_150,0,0);
              if (iVar3 < 0) goto joined_r0x00602243;
              if (iVar4 < 0) goto LAB_00602257;
              if (local_18 == local_20) {
                if ((iVar4 != 0x4e12e) && ((iVar3 == 0x4e12e || (local_8 < local_10))))
                goto LAB_00602257;
              }
              else if (local_18 < local_20) goto LAB_00602257;
            }
            else {
              iVar4 = FUN_006019b0(&local_8,&local_18,local_150,0,0);
              if (iVar3 < 0) {
joined_r0x00602243:
                if ((iVar3 == -0x7ffb1ed3) || (iVar4 != -0x7ffb1ed3)) goto LAB_0060225f;
              }
              else if (-1 < iVar4) {
                if (local_18 == local_20) {
                  if ((iVar4 != 0x4e12e) && ((iVar3 == 0x4e12e || (local_8 < local_10))))
                  goto LAB_00602257;
                }
                else {
                  iVar2 = (**(code **)(iVar2 + 0x678))(local_18,local_20);
                  if (iVar2 != 0) goto LAB_00602257;
                }
                goto LAB_0060225f;
              }
LAB_00602257:
              _mbscpy(local_150,local_44);
            }
          }
        }
        else {
          FUN_0060ac30();
          FUN_0060ac30();
          lstrcpynA(&stack0xfffffda0,local_254,2);
          lstrcpynA(&stack0xfffffda0,"",2);
          iVar2 = lstrcmpA(&stack0xfffffda0,&stack0xfffffda0);
          pcVar5 = lstrcpynA_exref;
          if (iVar2 == 0) goto LAB_006020cd;
        }
LAB_0060225f:
        dwIndex = local_28;
        local_14 = 0x104;
        local_c = 0x19;
        if (0x15 < local_28) break;
        local_28 = local_28 + 1;
        iVar2 = RegEnumValueA(local_1c,dwIndex,local_254,&local_14,(LPDWORD)0x0,&local_48,local_44,
                              &local_c);
      }
      RegCloseKey(local_1c);
    }
    RegCloseKey(local_24);
  }
  iVar2 = lstrcmpA((LPCSTR)local_150,"");
  if (iVar2 != 0) {
    _mbscpy(param_2,local_150);
    return 0;
  }
  return 0x80004005;
}


