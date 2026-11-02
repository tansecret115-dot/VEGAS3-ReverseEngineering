/* Module: vegas30.exe
   Function: FUN_00602680
   Address: 00602680
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00602680(int *param_1,LPSTR param_2,int param_3)

{
  uint dwIndex;
  short sVar1;
  short sVar2;
  LSTATUS LVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CHAR local_330 [260];
  uchar local_22c [260];
  BYTE local_128 [260];
  DWORD local_24;
  int local_20;
  uint local_1c;
  HKEY local_18;
  HKEY local_14;
  DWORD local_10;
  DWORD local_c;
  int local_8;
  
  local_20 = -0x7fffbffb;
  local_8 = 0;
  local_10 = 0x104;
  local_c = 0x19;
  param_1[9] = 0;
  LVar3 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)(param_1 + 0x1c),0,0x20019,&local_18);
  if (LVar3 == 0) {
    LVar3 = RegOpenKeyExA(local_18,"License",0,0x20019,&local_14);
    iVar4 = 0;
    if (LVar3 == 0) {
      local_1c = 1;
      iVar4 = RegEnumValueA(local_14,0,local_330,&local_10,(LPDWORD)0x0,&local_24,local_128,&local_c
                           );
      while (iVar4 != 0x103) {
        FUN_0060ac30();
        FUN_0060ac30();
        lstrcpynA(&stack0xfffffcc4,local_330,4);
        lstrcpynA(&stack0xfffffcc4,"key",4);
        iVar4 = lstrcmpA(&stack0xfffffcc4,&stack0xfffffcc4);
        if (iVar4 == 0) {
LAB_006027d5:
          FUN_0060ac30();
          FUN_0060ac30();
          lstrcpynA(&stack0xfffffcc4,(LPCSTR)local_128,2);
          FUN_005f3290(&stack0xfffffcc4,&DAT_0060f98c,2);
          iVar4 = lstrcmpA(&stack0xfffffcc4,&stack0xfffffcc4);
          if (((iVar4 != 0) && (local_20 = FUN_005ff1d0(local_128), -1 < local_20)) &&
             ((param_1[9] = param_1[9] + 1, *(int *)(*param_1 + 0xc) == 0x3ff ||
              (iVar4 = FUN_006004a0(), iVar4 == 0)))) {
            iVar4 = local_8;
            if (local_8 == 0) {
              local_8 = *param_1;
              *param_1 = 0;
              _mbscpy(local_22c,local_128);
            }
            else if (param_1[0x19e] == 0) {
LAB_006028df:
              FUN_0040bfc0(iVar4);
              local_8 = *param_1;
              *param_1 = 0;
              _mbscpy(local_22c,local_128);
            }
            else {
              uVar5 = FUN_00607f70();
              uVar5 = FUN_00607f70(uVar5);
              iVar6 = (*(code *)param_1[0x19e])(uVar5);
              if (iVar6 == 0) {
                sVar1 = FUN_00607f70();
                sVar2 = FUN_00607f70();
                if (((sVar1 == sVar2) && (*(int *)(iVar4 + 4) == 0)) &&
                   (*(int *)(*param_1 + 4) != 0)) goto LAB_006028df;
              }
              else {
                FUN_0040bfc0(iVar4);
                local_8 = *param_1;
                *param_1 = 0;
                _mbscpy(local_22c,local_128);
              }
            }
          }
        }
        else {
          FUN_0060ac30();
          FUN_0060ac30();
          lstrcpynA(&stack0xfffffcc4,local_330,2);
          lstrcpynA(&stack0xfffffcc4,"",2);
          iVar4 = lstrcmpA(&stack0xfffffcc4,&stack0xfffffcc4);
          if (iVar4 == 0) goto LAB_006027d5;
        }
        dwIndex = local_1c;
        local_10 = 0x104;
        local_c = 0x19;
        if (0x15 < local_1c) break;
        local_1c = local_1c + 1;
        iVar4 = RegEnumValueA(local_14,dwIndex,local_330,&local_10,(LPDWORD)0x0,&local_24,local_128,
                              &local_c);
      }
      RegCloseKey(local_14);
      iVar4 = local_8;
    }
    RegCloseKey(local_18);
    if (iVar4 != 0) {
      if (*param_1 != 0) {
        FUN_0040bfc0(*param_1);
      }
      *param_1 = iVar4;
      lstrcpynA(param_2,(LPCSTR)local_22c,param_3);
      param_2[param_3 + -1] = '\0';
      return 0;
    }
  }
  return local_20;
}


