/* Module: vidcap30.exe
   Function: FUN_00571c00
   Address: 00571c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00571c00(int param_1,LPSTR param_2,int param_3,int param_4)

{
  uint dwIndex;
  int iVar1;
  short sVar2;
  short sVar3;
  LSTATUS LVar4;
  int iVar5;
  undefined4 uVar6;
  CHAR local_338 [260];
  uchar local_234 [260];
  BYTE local_130 [260];
  DWORD local_2c;
  HKEY local_28;
  uint local_24;
  int local_20;
  HKEY local_1c;
  DWORD local_18;
  DWORD local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -0x7fffbffb;
  local_c = 0;
  local_8 = 0;
  local_14 = 0x104;
  local_18 = 0x19;
  local_20 = param_1;
  LVar4 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_28);
  if (LVar4 == 0) {
    LVar4 = RegOpenKeyExA(local_28,"License",0,0x20019,&local_1c);
    if (LVar4 == 0) {
      local_24 = 1;
      iVar5 = RegEnumValueA(local_1c,0,local_338,&local_14,(LPDWORD)0x0,&local_2c,local_130,
                            &local_18);
      while (iVar5 != 0x103) {
        FUN_00579db0();
        FUN_00579db0();
        lstrcpynA(&stack0xfffffcbc,local_338,4);
        lstrcpynA(&stack0xfffffcbc,"key",4);
        iVar5 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
        if (iVar5 == 0) {
LAB_00571d40:
          FUN_00579db0();
          FUN_00579db0();
          lstrcpynA(&stack0xfffffcbc,(LPCSTR)local_130,2);
          FUN_00477280(&stack0xfffffcbc,&DAT_00586c70,2);
          iVar5 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
          if (iVar5 != 0) {
            if (local_8 != 0) {
              FUN_00404b20(local_8);
              local_8 = 0;
            }
            iVar5 = local_20;
            local_10 = FUN_0056e2c0(local_130,&local_8);
            iVar1 = local_c;
            if ((-1 < local_10) &&
               ((*(int *)(local_8 + 0xc) == 0x3ff || (*(int *)(local_8 + 4) == 0)))) {
              if (local_c == 0) {
                local_c = local_8;
                local_8 = 0;
                _mbscpy(local_234,local_130);
              }
              else {
                if (*(int *)(iVar5 + 0x678) != 0) {
                  sVar2 = FUN_00577190();
                  sVar3 = FUN_00577190();
                  if (sVar3 == sVar2) {
                    if (param_4 == 0) {
                      if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(local_8 + 4) == 0))
                      goto LAB_00571e34;
                    }
                    else if ((*(int *)(iVar1 + 4) == 0) && (*(int *)(local_8 + 4) != 0)) {
LAB_00571e34:
                      FUN_00404b20(iVar1);
                      local_c = local_8;
                      local_8 = 0;
                      _mbscpy(local_234,local_130);
                    }
                    goto LAB_00571ebc;
                  }
                  uVar6 = FUN_00577190();
                  uVar6 = FUN_00577190(uVar6);
                  iVar5 = (**(code **)(local_20 + 0x678))(uVar6);
                  if (iVar5 == 0) goto LAB_00571ebc;
                }
                FUN_00404b20(iVar1);
                local_c = local_8;
                local_8 = 0;
                _mbscpy(local_234,local_130);
              }
            }
          }
        }
        else {
          FUN_00579db0();
          FUN_00579db0();
          lstrcpynA(&stack0xfffffcbc,local_338,2);
          FUN_00477280(&stack0xfffffcbc,&DAT_00586c70,2);
          iVar5 = lstrcmpA(&stack0xfffffcbc,&stack0xfffffcbc);
          if (iVar5 == 0) goto LAB_00571d40;
        }
LAB_00571ebc:
        dwIndex = local_24;
        local_14 = 0x104;
        local_18 = 0x19;
        if (0x15 < local_24) break;
        local_24 = local_24 + 1;
        iVar5 = RegEnumValueA(local_1c,dwIndex,local_338,&local_14,(LPDWORD)0x0,&local_2c,local_130,
                              &local_18);
      }
      RegCloseKey(local_1c);
    }
    RegCloseKey(local_28);
    if (local_c != 0) {
      local_10 = 0;
      lstrcpynA(param_2,(LPCSTR)local_234,param_3);
      param_2[param_3 + -1] = '\0';
      FUN_00404b20(local_c);
    }
  }
  if (local_8 != 0) {
    FUN_00404b20(local_8);
  }
  return local_10;
}


