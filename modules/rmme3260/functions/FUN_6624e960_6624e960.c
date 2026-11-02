/* Module: rmme3260.dll
   Function: FUN_6624e960
   Address: 6624e960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_6624e960(undefined4 *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  _OSVERSIONINFOA *p_Var6;
  int iVar7;
  undefined4 *puVar8;
  BYTE *pBVar9;
  BYTE local_4f0 [512];
  char local_2f0 [512];
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  _OSVERSIONINFOA local_c8;
  char local_34 [32];
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  p_Var6 = &local_c8;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    p_Var6->dwOSVersionInfoSize = 0;
    p_Var6 = (_OSVERSIONINFOA *)&p_Var6->dwMajorVersion;
  }
  local_c8.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_c8);
  if ((BVar1 != 0) && (local_c8.dwPlatformId == 2)) {
    iVar3 = FUN_6624ec90((char *)local_4f0,local_34);
    if (iVar3 != 0) {
      local_10 = 0;
      param_1 = (undefined4 *)0x0;
      local_8 = 0;
      local_c = 0;
      uVar5 = 0;
      if (DAT_6627061c != 0) {
        pcVar4 = s_ATI_Rage_II__PCI__ati_m64__66270624;
        do {
          if (*(int *)(pcVar4 + -4) == 2) {
            iVar7 = 0;
            iVar3 = 0;
            if ((*pcVar4 == '\0') || (iVar2 = strncmp(pcVar4,local_2f0,0x3f), iVar2 == 0)) {
              iVar3 = 1;
            }
            if ((pcVar4[0x40] == '\0') ||
               (iVar2 = _strnicmp(pcVar4 + 0x40,(char *)local_4f0,0x1f), iVar2 == 0)) {
              iVar7 = 1;
            }
            if (*(int *)(pcVar4 + 100) == 0) {
              iVar7 = iVar7 + 1;
            }
            else {
              if (*(int *)(pcVar4 + 100) != local_ec) goto LAB_6624eaab;
              iVar7 = iVar7 + 2;
            }
            if (*(int *)(pcVar4 + 0x60) == 0) {
              puVar8 = (undefined4 *)(iVar7 + 1);
            }
            else {
              if (*(int *)(pcVar4 + 0x60) != local_f0) goto LAB_6624eaab;
              puVar8 = (undefined4 *)(iVar7 + 2);
            }
            if (pcVar4[0x68] == '\0') {
              uVar5 = iVar3 + 1;
            }
            else {
              iVar7 = strncmp(pcVar4 + 0x68,local_34,0x1f);
              if (iVar7 != 0) goto LAB_6624eaab;
              uVar5 = iVar3 + 2;
            }
            if ((((int)param_1 + local_8 < (int)puVar8 + uVar5) && (local_8 <= uVar5)) &&
               (param_1 <= puVar8)) {
              local_10 = local_c;
              param_1 = puVar8;
              local_8 = uVar5;
            }
          }
LAB_6624eaab:
          local_c = local_c + 1;
          pcVar4 = pcVar4 + 0xb4;
          uVar5 = local_10;
        } while (local_c < DAT_6627061c);
      }
      if ((local_8 != 0) && ((undefined4 *)0x2 < param_1)) {
        return &DAT_66270620 + uVar5 * 0x2d;
      }
    }
    return (undefined4 *)&DAT_6627ba20;
  }
  pBVar9 = local_4f0;
  for (iVar3 = 0x10a; iVar3 != 0; iVar3 = iVar3 + -1) {
    pBVar9[0] = '\0';
    pBVar9[1] = '\0';
    pBVar9[2] = '\0';
    pBVar9[3] = '\0';
    pBVar9 = pBVar9 + 4;
  }
  iVar3 = (**(code **)*param_1)(param_1,&DAT_6626af98,&local_14);
  if (((iVar3 == 0) && (iVar3 = (**(code **)(*local_14 + 0x6c))(local_14,local_4f0,1), iVar3 == 0))
     || (iVar3 = FUN_6624f020(local_4f0), iVar3 != 0)) {
    local_10 = 0;
    param_1 = (undefined4 *)0x0;
    local_8 = 0;
    local_c = 0;
    uVar5 = 0;
    if (DAT_6627061c != 0) {
      pcVar4 = s_ATI_Rage_II__PCI__ati_m64__66270624;
      do {
        if (*(int *)(pcVar4 + -4) == 1) {
          iVar7 = 0;
          iVar3 = 0;
          if ((*pcVar4 == '\0') || (iVar2 = strncmp(pcVar4,local_2f0,0x3f), iVar2 == 0)) {
            iVar3 = 1;
          }
          if ((pcVar4[0x40] == '\0') ||
             (iVar2 = _strnicmp(pcVar4 + 0x40,(char *)local_4f0,0x1f), iVar2 == 0)) {
            iVar7 = 1;
          }
          if (*(int *)(pcVar4 + 100) == 0) {
            iVar7 = iVar7 + 1;
          }
          else {
            if (*(int *)(pcVar4 + 100) != local_ec) goto LAB_6624ec36;
            iVar7 = iVar7 + 2;
          }
          if (*(int *)(pcVar4 + 0x60) == 0) {
            puVar8 = (undefined4 *)(iVar7 + 1);
          }
          else {
            if (*(int *)(pcVar4 + 0x60) != local_f0) goto LAB_6624ec36;
            puVar8 = (undefined4 *)(iVar7 + 2);
          }
          if (*(int *)(pcVar4 + 0x68) == 0) {
            iVar3 = iVar3 + 1;
          }
          else {
            if (*(int *)(pcVar4 + 0x68) != local_e8) goto LAB_6624ec36;
            iVar3 = iVar3 + 2;
          }
          if (*(int *)(pcVar4 + 0x6c) == 0) {
            uVar5 = iVar3 + 1;
          }
          else {
            if (*(int *)(pcVar4 + 0x6c) != local_e4) goto LAB_6624ec36;
            uVar5 = iVar3 + 2;
          }
          if ((((int)param_1 + local_8 < (int)puVar8 + uVar5) && (local_8 <= uVar5)) &&
             (param_1 <= puVar8)) {
            local_10 = local_c;
            param_1 = puVar8;
            local_8 = uVar5;
          }
        }
LAB_6624ec36:
        local_c = local_c + 1;
        pcVar4 = pcVar4 + 0xb4;
        uVar5 = local_10;
      } while (local_c < DAT_6627061c);
    }
    if ((2 < local_8) && ((undefined4 *)0x2 < param_1)) {
      return &DAT_66270620 + uVar5 * 0x2d;
    }
  }
  return (undefined4 *)&DAT_6627bad8;
}


