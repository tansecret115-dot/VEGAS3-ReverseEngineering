/* Module: pncrt.dll
   Function: FUN_78017ce0
   Address: 78017ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78017ce0(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  uint local_c;
  byte *local_8;
  uint local_4;
  
  local_4 = 0;
  bVar6 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_c = (uint)bVar6;
    local_8 = pbVar1 + 1;
    if (__mb_cur_max < 2) {
      uVar2 = (byte)_pctype[local_c * 2] & 8;
    }
    else {
      uVar2 = _isctype(local_c,8);
    }
    if (uVar2 == 0) break;
    bVar6 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar6 == 0x2d) {
    param_4 = param_4 | 2;
  }
  else if (bVar6 != 0x2b) goto LAB_78017d6b;
  bVar6 = *local_8;
  local_8 = pbVar1 + 2;
  local_c = (uint)bVar6;
LAB_78017d6b:
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar6 == 0x30) {
      if ((*local_8 == 0x78) || (param_3 = 8, *local_8 == 0x58)) {
        param_3 = 0x10;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (bVar6 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar6 = local_8[1];
    local_c = (uint)bVar6;
    local_8 = local_8 + 2;
  }
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if (__mb_cur_max < 2) {
      uVar3 = (byte)_pctype[local_c * 2] & 4;
    }
    else {
      uVar3 = _isctype(local_c,4);
    }
    if (uVar3 == 0) {
      if (__mb_cur_max < 2) {
        uVar3 = *(ushort *)(_pctype + local_c * 2) & 0x103;
      }
      else {
        uVar3 = _isctype(local_c,0x103);
      }
      if (uVar3 == 0) {
LAB_78017ea4:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            local_8 = param_1;
          }
          local_4 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_4)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_4)))))))) {
          piVar5 = _errno();
          *piVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            local_4 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_4 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_8;
        }
        if ((param_4 & 2) != 0) {
          local_4 = -local_4;
        }
        return local_4;
      }
      iVar4 = toupper((int)(char)bVar6);
      uVar3 = iVar4 - 0x37;
    }
    else {
      uVar3 = (int)(char)bVar6 - 0x30;
    }
    if (param_3 <= uVar3) goto LAB_78017ea4;
    if ((local_4 < uVar2) ||
       ((local_4 == uVar2 && (uVar3 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_4 = local_4 * param_3 + uVar3;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar6 = *local_8;
    local_8 = local_8 + 1;
    local_c = (uint)bVar6;
  } while( true );
}


