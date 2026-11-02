/* Module: vidcap30.exe
   Function: FUN_00445250
   Address: 00445250
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00445250(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_80 [4];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = local_80;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_80[2] = *(int *)(param_1 + 0x20);
  local_80[3] = *(int *)(param_1 + 0x24);
  local_70 = *(int *)(param_1 + 0x28);
  local_6c = *(int *)(param_1 + 0x2c);
  local_80[0] = 0x80;
  if (*(LPCSTR *)(param_1 + 0x10) == (LPCSTR)0x0) {
    local_68 = 0;
  }
  else {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x10));
    local_68 = iVar1 * 2 + 2;
  }
  if (*(LPCSTR *)(param_1 + 0x14) == (LPCSTR)0x0) {
    local_64 = 0;
  }
  else {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x14));
    local_64 = iVar1 * 2 + 2;
  }
  if (*(LPCSTR *)(param_1 + 0x3c) == (LPCSTR)0x0) {
    local_60 = 0;
  }
  else {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x3c));
    local_60 = iVar1 * 2 + 2;
  }
  local_5c = 0;
  if (*(LPCSTR *)(param_1 + 0x18) != (LPCSTR)0x0) {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x18));
    local_5c = iVar1 * 2 + 2;
  }
  local_58 = *(undefined4 *)(param_1 + 0x38);
  local_50 = *(undefined4 *)(param_1 + 8);
  local_4c = *(undefined4 *)(param_1 + 0xc);
  local_48 = *(undefined4 *)(param_1 + 0x40);
  local_44 = *(undefined4 *)(param_1 + 0x44);
  local_40 = *(undefined4 *)(param_1 + 0x48);
  local_3c = *(undefined4 *)(param_1 + 0x4c);
  local_38 = *(undefined4 *)(param_1 + 0x60);
  local_34 = *(undefined4 *)(param_1 + 100);
  local_30 = *(undefined4 *)(param_1 + 0x68);
  local_2c = *(undefined4 *)(param_1 + 0x6c);
  local_28 = *(undefined4 *)(param_1 + 0x70);
  local_24 = *(undefined4 *)(param_1 + 0x74);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  local_18 = *(undefined4 *)(param_1 + 0x30);
  local_14 = *(undefined4 *)(param_1 + 0x34);
  local_10 = *(undefined4 *)(param_1 + 0x7c);
  local_c = *(undefined4 *)(param_1 + 0x80);
  local_8 = *(undefined4 *)(param_1 + 0x84);
  if ((local_68 != 0) && (**(char **)(param_1 + 0x10) == '\0')) {
    local_68 = local_68 + -2;
  }
  if ((local_64 != 0) && (**(char **)(param_1 + 0x14) == '\0')) {
    local_64 = local_64 + -2;
  }
  if ((local_60 != 0) && (**(char **)(param_1 + 0x3c) == '\0')) {
    local_60 = local_60 + -2;
  }
  if ((local_5c != 0) && (**(char **)(param_1 + 0x18) == '\0')) {
    local_5c = local_5c + -2;
  }
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_80,0x80,0);
  if (-1 < iVar1) {
    if ((local_80[2] != 0) &&
       (iVar1 = FUN_00451fa0(param_2,*(undefined4 *)(param_1 + 0x10),local_80[2]), iVar1 < 0)) {
      return iVar1;
    }
    if ((local_80[3] != 0) &&
       (iVar1 = FUN_00451fa0(param_2,*(undefined4 *)(param_1 + 0x14),local_80[3]), iVar1 < 0)) {
      return iVar1;
    }
    if ((local_70 != 0) &&
       (iVar1 = FUN_00451fa0(param_2,*(undefined4 *)(param_1 + 0x3c),local_70), iVar1 < 0)) {
      return iVar1;
    }
    if ((local_6c != 0) &&
       (iVar1 = FUN_00451fa0(param_2,*(undefined4 *)(param_1 + 0x18),local_6c), iVar1 < 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


