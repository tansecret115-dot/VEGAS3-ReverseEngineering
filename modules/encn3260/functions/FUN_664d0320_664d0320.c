/* Module: encn3260.dll
   Function: FUN_664d0320
   Address: 664d0320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664d0320(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int _C;
  byte *pbVar4;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = &local_1c;
  bVar3 = *param_1;
  iVar1 = isdigit((int)(char)bVar3);
  pbVar4 = param_1;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
LAB_664d0349:
  param_1 = (byte *)0x0;
  local_8 = 10;
  if (bVar3 == 0x30) {
    bVar3 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
    if ((bVar3 == 0x78) || (bVar3 == 0x58)) {
      local_8 = 0x10;
      goto LAB_664d037a;
    }
    local_8 = 8;
  }
  do {
    if (bVar3 < 0x80) {
      iVar1 = isdigit((int)(char)bVar3);
      if (iVar1 == 0) goto LAB_664d03a4;
      param_1 = (byte *)(local_8 * (int)param_1 + -0x30 + (int)(char)bVar3);
    }
    else {
LAB_664d03a4:
      if ((local_8 != 0x10) || (0x7f < bVar3)) break;
      _C = (int)(char)bVar3;
      iVar1 = isxdigit(_C);
      if (iVar1 == 0) break;
      iVar1 = islower(_C);
      param_1 = (byte *)((_C - (char)((-(iVar1 != 0) & 0x20U) + 0x41)) + 10U | (int)param_1 << 4);
    }
LAB_664d037a:
    bVar3 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  } while( true );
  if (bVar3 != 0x2e) {
    if (bVar3 != 0) {
      if (0x7f < bVar3) {
        return 0xffffffff;
      }
      iVar1 = isspace((int)(char)bVar3);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    switch((int)local_c - (int)&local_1c >> 2) {
    default:
      uVar2 = FUN_664d0230(param_1);
      return uVar2;
    case 1:
      goto switchD_664d0465_caseD_1;
    case 2:
      if (param_1 < (byte *)0x10000) {
        uVar2 = FUN_664d0230((uint)param_1 | (local_1c << 8 | local_18) << 0x10);
        return uVar2;
      }
      return 0xffffffff;
    case 3:
      if ((byte *)0xff < param_1) {
        return 0xffffffff;
      }
      uVar2 = FUN_664d0230((uint)param_1 | ((local_1c << 8 | local_18) << 8 | local_14) << 8);
      return uVar2;
    case -1:
      return 0xffffffff;
    }
  }
  if (&local_10 <= local_c) {
    return 0xffffffff;
  }
  bVar3 = pbVar4[1];
  *local_c = (int)param_1;
  local_c = local_c + 1;
  pbVar4 = pbVar4 + 1;
  iVar1 = isdigit((int)(char)bVar3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  goto LAB_664d0349;
switchD_664d0465_caseD_1:
  if (param_1 < (byte *)0x1000000) {
    uVar2 = FUN_664d0230((uint)param_1 | local_1c << 0x18);
    return uVar2;
  }
  return 0xffffffff;
}


