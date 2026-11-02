/* Module: vidcap30.exe
   Function: FUN_00571530
   Address: 00571530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00571530(int param_1,uchar *param_2,HKEY param_3,int param_4)

{
  DWORD dwIndex;
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uchar *puVar6;
  CHAR local_250 [260];
  uchar local_14c [260];
  undefined1 local_48 [4];
  BYTE local_44 [28];
  int local_28;
  DWORD local_24;
  int local_20;
  HKEY local_1c;
  DWORD local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  DWORD local_8;
  
  puVar6 = param_2;
  for (uVar3 = (uint)param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6 = puVar6 + 4;
  }
  for (uVar3 = (uint)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = '\0';
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_14c;
  local_20 = param_1;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6 = puVar6 + 4;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_10 = 0;
  local_8 = 0x104;
  local_c = 0x19;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_1c);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_1c,"License",0,0x20019,&param_3);
    if (LVar1 == 0) {
      local_18 = 1;
      iVar4 = RegEnumValueA(param_3,0,local_250,&local_8,(LPDWORD)0x0,&local_24,local_44,&local_c);
      while (iVar4 != 0x103) {
        FUN_00579db0();
        FUN_00579db0();
        pcVar5 = lstrcpynA_exref;
        lstrcpynA(&stack0xfffffda4,local_250,4);
        lstrcpynA(&stack0xfffffda4,"key",4);
        iVar4 = lstrcmpA(&stack0xfffffda4,&stack0xfffffda4);
        if (iVar4 == 0) {
LAB_0057169e:
          FUN_00579db0();
          FUN_00579db0();
          (*pcVar5)(&stack0xfffffda4,local_44,2);
          FUN_00477280(&stack0xfffffda4,&DAT_00586c70,2);
          iVar2 = lstrcmpA(&stack0xfffffda4,&stack0xfffffda4);
          iVar4 = local_20;
          if (((iVar2 != 0) &&
              (iVar2 = FUN_00570bd0(&local_10,&local_28,local_44,0,0), iVar2 != -0x7ffb1ed3)) &&
             (local_28 == param_4)) {
            *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
            if (((iVar2 == 0x4e12e) || (iVar2 == 0x4e131)) || (iVar2 == 0x4e12d)) {
              _mbscpy(local_14c,local_44);
              goto LAB_00571835;
            }
            iVar4 = FUN_00570bd0(&local_14,local_48,local_14c,0,0);
            if (iVar4 < 0) {
              if (-1 < iVar2) goto LAB_005717d3;
LAB_005717c1:
              if (iVar4 != -0x7ffb1ed3) goto LAB_005717db;
            }
            else {
              if (iVar2 < 0) goto LAB_005717c1;
              if ((iVar2 != 0x4e130) || (iVar4 != 0x4e130)) {
                if (((iVar4 == 0x4e12f) && (iVar2 == 0x4e130)) || (local_14 < local_10))
                goto LAB_005717d3;
                goto LAB_005717db;
              }
              if (local_10 <= local_14) goto LAB_005717db;
            }
LAB_005717d3:
            _mbscpy(local_14c,local_44);
          }
        }
        else {
          FUN_00579db0();
          FUN_00579db0();
          lstrcpynA(&stack0xfffffda4,local_250,2);
          lstrcpynA(&stack0xfffffda4,"",2);
          iVar4 = lstrcmpA(&stack0xfffffda4,&stack0xfffffda4);
          pcVar5 = lstrcpynA_exref;
          if (iVar4 == 0) goto LAB_0057169e;
        }
LAB_005717db:
        dwIndex = local_18;
        local_18 = local_18 + 1;
        local_8 = 0x104;
        local_c = 0x19;
        iVar4 = RegEnumValueA(param_3,dwIndex,local_250,&local_8,(LPDWORD)0x0,&local_24,local_44,
                              &local_c);
      }
      RegCloseKey(param_3);
    }
    RegCloseKey(local_1c);
  }
LAB_00571835:
  iVar4 = lstrcmpA((LPCSTR)local_14c,"");
  if (iVar4 == 0) {
    return 0x80004005;
  }
  _mbscpy(param_2,local_14c);
  return 0;
}


