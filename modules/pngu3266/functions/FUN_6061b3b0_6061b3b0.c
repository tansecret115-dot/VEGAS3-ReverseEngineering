/* Module: pngu3266.dll
   Function: FUN_6061b3b0
   Address: 6061b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6061b3b0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  LSTATUS LVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  DWORD dwIndex;
  _OSVERSIONINFOA *p_Var9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  BYTE local_580 [256];
  CHAR local_480 [256];
  CHAR local_380 [256];
  _OSVERSIONINFOA local_280;
  BYTE local_1ec [64];
  int local_1ac [3];
  int local_1a0 [3];
  int local_194 [3];
  int local_188 [3];
  int local_17c [3];
  int local_170 [3];
  int local_164 [3];
  int local_158 [3];
  int local_14c [3];
  int local_140 [3];
  int local_134 [3];
  int local_128 [3];
  int local_11c [3];
  int local_110 [3];
  int local_104 [3];
  int local_f8 [3];
  int local_ec [3];
  int local_e0 [3];
  int local_d4 [3];
  int local_c8 [3];
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a3;
  undefined4 local_9f;
  undefined4 local_9b;
  undefined2 local_97;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_67;
  undefined4 local_63;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined1 local_45;
  int local_44 [3];
  DWORD local_38 [2];
  int local_30;
  DWORD local_2c;
  LPCSTR local_28 [3];
  HKEY local_1c;
  int local_18;
  HKEY local_14;
  HKEY local_10;
  char *local_c;
  DWORD local_8;
  
  local_b7 = 0;
  local_b3 = 0;
  local_af = 0;
  local_bc = DAT_60649648;
  local_ab = 0;
  local_a9 = 0;
  local_a3 = 0;
  local_9f = 0;
  local_b8 = DAT_6064964c;
  local_9b = 0;
  local_97 = 0;
  local_a8 = DAT_60649640;
  local_95 = 0;
  local_a4 = DAT_60649644;
  local_80 = DAT_60649634;
  local_94 = DAT_6064963c;
  local_79 = 0;
  local_90 = 0;
  local_75 = 0;
  local_8c = 0;
  local_7c = DAT_60649638;
  local_71 = 0;
  local_88 = 0;
  local_6d = 0;
  local_6c = DAT_6064962c;
  local_84 = 0;
  local_67 = 0;
  local_58 = DAT_60649624;
  local_63 = 0;
  local_7a = DAT_6064963a;
  local_5f = 0;
  local_51 = 0;
  local_68 = DAT_60649630;
  local_5b = 0;
  local_4d = 0;
  local_59 = 0;
  local_54 = DAT_60649628;
  local_49 = 0;
  local_52 = DAT_6064962a;
  local_45 = 0;
  FUN_60618bb0(local_28);
  FUN_60618bb0(local_c8);
  FUN_60618bb0(local_44);
  iVar8 = 0;
  p_Var9 = &local_280;
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var9->dwOSVersionInfoSize = 0;
    p_Var9 = (_OSVERSIONINFOA *)&p_Var9->dwMajorVersion;
  }
  local_18 = 0;
  local_280.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_280);
  if (local_280.dwPlatformId == 2) {
    FUN_60618cd0(local_44);
    FUN_60618cd0(local_c8);
    FUN_60618cd0((int *)local_28);
    return 0;
  }
  local_c = (char *)&local_bc;
  local_30 = 0;
  do {
    if (iVar8 != 0) break;
    pcVar11 = &DAT_60649620;
    local_1c = (HKEY)0x0;
    pcVar10 = local_c;
    puVar2 = FUN_60618d40(local_ec,&DAT_60649618);
    puVar2 = FUN_60618fb0(local_1a0,puVar2,pcVar11);
    piVar3 = FUN_60618fb0(local_1ac,puVar2,pcVar10);
    FUN_60618e60(local_28,piVar3);
    FUN_60618cd0(local_1ac);
    FUN_60618cd0(local_1a0);
    FUN_60618cd0(local_ec);
    LVar4 = RegOpenKeyExA((HKEY)0x80000002,local_28[0],0,0x20019,&local_1c);
    if (LVar4 == 0) {
      local_2c = 0;
      do {
        local_8 = 0x100;
        LVar4 = RegEnumKeyExA(local_1c,local_2c,local_480,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                              (LPDWORD)0x0,(PFILETIME)0x0);
        if (LVar4 != 0) break;
        local_14 = (HKEY)0x0;
        puVar2 = FUN_60618d40(local_134,local_480);
        pcVar12 = &DAT_60649620;
        pcVar11 = &DAT_60649620;
        pcVar10 = local_c;
        puVar5 = FUN_60618d40(local_188,&DAT_60649618);
        puVar5 = FUN_60618fb0(local_11c,puVar5,pcVar11);
        puVar5 = FUN_60618fb0(local_d4,puVar5,pcVar10);
        puVar5 = FUN_60618fb0(local_104,puVar5,pcVar12);
        piVar3 = FUN_60618f60(local_194,puVar5,puVar2);
        FUN_60618e60(local_28,piVar3);
        FUN_60618cd0(local_194);
        FUN_60618cd0(local_104);
        FUN_60618cd0(local_d4);
        FUN_60618cd0(local_11c);
        FUN_60618cd0(local_188);
        FUN_60618cd0(local_134);
        LVar4 = RegOpenKeyExA((HKEY)0x80000002,local_28[0],0,0x20019,&local_14);
        if (LVar4 == 0) {
          dwIndex = 0;
          while (local_8 = 0x100, local_18 == 0) {
            local_8 = 0x100;
            LVar4 = RegEnumKeyExA(local_14,dwIndex,local_380,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                                  (LPDWORD)0x0,(PFILETIME)0x0);
            if (LVar4 != 0) break;
            uVar1 = *(uint *)(local_28[0] + -8);
            local_10 = (HKEY)0x0;
            puVar2 = FUN_60618d40(local_14c,local_380);
            puVar2 = FUN_60619010(local_170,&DAT_60649620,puVar2);
            FUN_60619160(local_28,puVar2);
            FUN_60618cd0(local_170);
            FUN_60618cd0(local_14c);
            LVar4 = RegOpenKeyExA((HKEY)0x80000002,local_28[0],0,0x20019,&local_10);
            if (LVar4 == 0) {
              local_8 = 0x40;
              local_1ec[0] = '\0';
              LVar4 = RegQueryValueExA(local_10,s_Class_60649610,(LPDWORD)0x0,local_38,local_1ec,
                                       &local_8);
              if ((LVar4 == 0) && (iVar8 = _stricmp((char *)local_1ec,&DAT_6064960c), iVar8 == 0)) {
                local_8 = 0x100;
                puVar2 = FUN_60618d40(local_140,local_380);
                pcVar11 = &DAT_60649620;
                puVar5 = FUN_60618d40(local_128,local_480);
                pcVar10 = &DAT_60649620;
                puVar6 = FUN_60618d40(local_110,local_c);
                puVar6 = FUN_60618fb0(local_f8,puVar6,pcVar10);
                puVar5 = FUN_60618f60(local_e0,puVar6,puVar5);
                puVar5 = FUN_60618fb0(local_164,puVar5,pcVar11);
                piVar3 = FUN_60618f60(local_17c,puVar5,puVar2);
                FUN_60618e60(local_44,piVar3);
                FUN_60618cd0(local_17c);
                FUN_60618cd0(local_164);
                FUN_60618cd0(local_e0);
                FUN_60618cd0(local_f8);
                FUN_60618cd0(local_110);
                FUN_60618cd0(local_128);
                FUN_60618cd0(local_140);
                LVar4 = RegQueryValueExA(local_10,s_Driver_60649604,(LPDWORD)0x0,local_38,local_580,
                                         &local_8);
                if ((LVar4 == 0) &&
                   ((local_580[0] != '0' && (iVar8 = FUN_6061b9c0(local_44[0]), iVar8 != 0)))) {
                  local_18 = 1;
                }
              }
            }
            piVar3 = FUN_60619450(local_28,local_158,uVar1);
            FUN_60618e60(local_28,piVar3);
            FUN_60618cd0(local_158);
            if (local_10 != (HKEY)0x0) {
              RegCloseKey(local_10);
              local_10 = (HKEY)0x0;
            }
            dwIndex = dwIndex + 1;
          }
        }
        if (local_14 != (HKEY)0x0) {
          RegCloseKey(local_14);
          local_14 = (HKEY)0x0;
        }
        local_2c = local_2c + 1;
        local_8 = 0x100;
        iVar8 = local_18;
      } while (local_18 == 0);
    }
    if (local_1c != (HKEY)0x0) {
      RegCloseKey(local_1c);
    }
    local_30 = local_30 + 1;
    local_c = local_c + 0x14;
  } while (local_30 < 6);
  FUN_60618cd0(local_44);
  FUN_60618cd0(local_c8);
  FUN_60618cd0((int *)local_28);
  return iVar8;
}


