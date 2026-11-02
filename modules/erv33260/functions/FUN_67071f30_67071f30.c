/* Module: erv33260.dll
   Function: FUN_67071f30
   Address: 67071f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x67072021) */
/* WARNING: Removing unreachable block (ram,0x67072012) */

void FUN_67071f30(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  LSTATUS LVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte in_ID;
  uint local_6c;
  HKEY local_68 [2];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  _SYSTEM_INFO local_44;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_6708ef10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_4c = 0;
  local_50 = 0;
  local_6c = 0;
  local_48 = 0;
  local_58 = 0;
  local_5c = 0;
  uVar7 = 0;
  local_54 = 0;
  local_1c = 0;
  local_60 = 0;
  local_18 = 0;
  local_68[0] = (HKEY)0x0;
  ExceptionList = &local_10;
  *param_1 = 1;
  GetSystemInfo(&local_44);
  if (local_44.dwProcessorType == 0x182) {
    uVar7 = 3;
    local_54 = uVar7;
  }
  else if (local_44.dwProcessorType == 0x1e6) {
    uVar7 = 4;
    local_54 = uVar7;
  }
  else if (local_44.dwProcessorType == 0x24a) {
    uVar7 = 5;
    local_54 = uVar7;
  }
  if (3 < uVar7) {
    LVar3 = RegOpenKeyExA((HKEY)0x80000002,s_HARDWARE_DESCRIPTION_System_Floa_67093044,0,0x20019,
                          local_68);
    if (LVar3 == 0) {
      local_18 = 1;
      RegCloseKey(local_68[0]);
    }
    uVar7 = local_54;
    if (((uint)((in_ID & 1) != 1) * 0x200000 != (uint)(in_ID & 1) * 0x200000) &&
       (piVar1 = (int *)cpuid_basic_info(0), *piVar1 != 0)) {
      puVar2 = (uint *)cpuid_Version_info(1);
      uVar4 = *puVar2;
      uVar6 = puVar2[2];
      uVar7 = (uVar4 & 0xf00) >> 8;
      local_1c = (uVar4 & 0xf0) >> 4;
      local_60 = uVar4 & 0xf;
      local_50 = uVar6 & 0x20;
      local_6c = uVar6 & 0x10;
      uVar5 = uVar6 & 0x800000;
      local_48 = ((uVar4 & 0xf00) + (uint)((uVar4 & 0xf00) < 0x600) & 1) - 1;
      if ((uVar5 != 0) && (local_48 = uVar5, local_18 != 0)) {
        local_4c = 1;
        local_58 = uVar6 & 0x2000000;
        local_5c = uVar6 & 0x4000000;
      }
    }
  }
  param_1[1] = uVar7;
  param_1[2] = local_1c;
  param_1[3] = local_60;
  *(bool *)(param_1 + 4) = local_4c != 0;
  *(bool *)((int)param_1 + 0x11) = local_50 != 0;
  *(bool *)((int)param_1 + 0x12) = local_6c != 0;
  *(bool *)((int)param_1 + 0x13) = local_48 != 0;
  *(bool *)(param_1 + 5) = local_58 != 0;
  *(bool *)((int)param_1 + 0x15) = local_5c != 0;
  ExceptionList = local_10;
  return;
}


