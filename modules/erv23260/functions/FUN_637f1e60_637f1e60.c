/* Module: erv23260.dll
   Function: FUN_637f1e60
   Address: 637f1e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x637f1f2d) */
/* WARNING: Removing unreachable block (ram,0x637f1f22) */

void FUN_637f1e60(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  LSTATUS LVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte in_ID;
  _SYSTEM_INFO local_54;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  HKEY local_c;
  uint local_8;
  
  uVar7 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_8 = 0;
  local_14 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = (HKEY)0x0;
  *param_1 = 1;
  GetSystemInfo(&local_54);
  if (local_54.dwProcessorType == 0x182) {
    uVar7 = 3;
    local_8 = uVar7;
  }
  else if (local_54.dwProcessorType == 0x1e6) {
    uVar7 = 4;
    local_8 = uVar7;
  }
  else if (local_54.dwProcessorType == 0x24a) {
    uVar7 = 5;
    local_8 = uVar7;
  }
  if (3 < uVar7) {
    LVar3 = RegOpenKeyExA((HKEY)0x80000002,s_HARDWARE_DESCRIPTION_System_Floa_6382f044,0,0x20019,
                          &local_c);
    if (LVar3 == 0) {
      local_10 = 1;
      RegCloseKey(local_c);
    }
    uVar7 = local_8;
    if (((uint)((in_ID & 1) != 1) * 0x200000 != (uint)(in_ID & 1) * 0x200000) &&
       (piVar1 = (int *)cpuid_basic_info(0), *piVar1 != 0)) {
      puVar2 = (uint *)cpuid_Version_info(1);
      uVar4 = *puVar2;
      uVar6 = puVar2[2];
      uVar7 = (uVar4 & 0xf00) >> 8;
      local_14 = (uVar4 & 0xf0) >> 4;
      local_18 = uVar4 & 0xf;
      local_20 = uVar6 & 0x20;
      local_24 = uVar6 & 0x10;
      uVar5 = uVar6 & 0x800000;
      local_28 = ((uVar4 & 0xf00) + (uint)((uVar4 & 0xf00) < 0x600) & 1) - 1;
      if ((uVar5 != 0) && (local_28 = uVar5, local_10 != 0)) {
        local_1c = 1;
        local_2c = uVar6 & 0x2000000;
      }
    }
  }
  param_1[1] = uVar7;
  param_1[3] = local_18;
  param_1[2] = local_14;
  *(bool *)((int)param_1 + 0x11) = local_20 != 0;
  *(bool *)(param_1 + 4) = local_1c != 0;
  *(bool *)((int)param_1 + 0x12) = local_24 != 0;
  *(bool *)((int)param_1 + 0x13) = local_28 != 0;
  *(bool *)(param_1 + 5) = local_2c != 0;
  return;
}


