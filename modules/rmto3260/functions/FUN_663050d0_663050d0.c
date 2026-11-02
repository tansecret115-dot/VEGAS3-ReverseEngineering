/* Module: rmto3260.dll
   Function: FUN_663050d0
   Address: 663050d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_663050d0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  _OSVERSIONINFOA *p_Var3;
  _OSVERSIONINFOA local_d0;
  _union_530 local_3c [6];
  int local_24;
  uint local_1c;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  
  iVar2 = 0x25;
  p_Var3 = &local_d0;
  while( true ) {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOA *)&p_Var3->dwMajorVersion;
  }
  iVar2 = -1;
  local_12 = 0xffff;
  uStack_10 = 0xffff;
  local_e._0_2_ = 0xffff;
  local_e._2_2_ = 0xffff;
  local_a = 0;
  uStack_8 = 0;
  local_d0.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_d0);
  local_18 = CONCAT22((ushort)local_d0.dwMinorVersion,(ushort)local_d0.dwMajorVersion);
  if (local_d0.dwPlatformId != 2) {
    if ((ushort)local_d0.dwMajorVersion < 4) {
      iVar2 = 2;
      goto LAB_66305165;
    }
    if ((ushort)local_d0.dwMajorVersion == 4) {
      iVar2 = (-(uint)((ushort)local_d0.dwMinorVersion < 10) & 0xfffffc04) + 0x400;
      goto LAB_66305165;
    }
  }
  else {
    iVar2 = 8;
LAB_66305165:
    local_12 = (undefined2)iVar2;
    uStack_10 = (undefined2)((uint)iVar2 >> 0x10);
  }
  if (param_1 == (undefined4 *)0x0) {
    return iVar2;
  }
  GetSystemInfo((LPSYSTEM_INFO)&local_3c[0].s);
  switch(local_3c[0].dwOemId & 0xffff) {
  case 0:
    if ((local_d0.dwPlatformId == 2) &&
       ((3 < (ushort)local_d0.dwMajorVersion ||
        (((ushort)local_d0.dwMajorVersion == 3 && (0x31 < local_18._2_2_)))))) {
      local_1c = local_1c & 0xffff;
      if ((int)(local_1c - 4) < 0) {
        local_e = -2;
      }
      else if (local_1c == 4) {
        local_e = 1;
      }
      else if (local_1c - 4 == 1) {
        local_e = 2;
      }
      else {
        local_e = (-(uint)(local_1c != 6) & 0xfffffffb) + 4;
      }
      break;
    }
    if (local_24 == 0x182) {
      local_e = -2;
      break;
    }
    if (local_24 == 0x1e6) {
      local_e = 1;
      break;
    }
    if (local_24 == 0x24a) {
      local_e = 2;
      break;
    }
  default:
    local_e = -1;
    break;
  case 1:
    local_e = 0x40;
    break;
  case 2:
    local_e = 0x20;
    break;
  case 3:
    local_e = 8;
  }
  uVar1 = FUN_66305290();
  local_a = (undefined2)uVar1;
  uStack_8 = (undefined2)((uint)uVar1 >> 0x10);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_18;
    param_1[1] = CONCAT22(local_12,uStack_14);
    param_1[2] = CONCAT22((undefined2)local_e,uStack_10);
    param_1[3] = CONCAT22(local_a,local_e._2_2_);
    *(undefined2 *)(param_1 + 4) = uStack_8;
  }
  return iVar2;
}


