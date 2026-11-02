/* Module: vegas30.exe
   Function: FUN_00414600
   Address: 00414600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414600(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_dc [55];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = 0;
    local_dc[0xb] = 0;
    local_dc[0xc] = 0;
    local_dc[0xd] = 1;
    local_dc[0xe] = 0;
    local_dc[0xf] = 2;
    local_dc[0x10] = 0;
    local_dc[0x11] = 3;
    local_dc[0x12] = 0;
    local_dc[0x13] = 4;
    local_dc[0x14] = 0;
    local_dc[0x15] = 5;
    local_dc[0x16] = 0;
    local_dc[0x17] = 6;
    local_dc[0x18] = 0;
    local_dc[0x19] = 7;
    local_dc[0x1a] = 0;
    local_dc[0x1b] = 8;
    local_dc[0x1c] = 0xbbb2;
    local_dc[0x1d] = 9;
    local_dc[0x1e] = 0xbbe4;
    local_dc[0x1f] = 10;
    local_dc[0x20] = 0;
    local_dc[0x21] = 0xb;
    local_dc[0x22] = 0;
    local_dc[0x23] = 0xc;
    local_dc[0x24] = 0;
    local_dc[0x25] = 0xd;
    local_dc[0x26] = 0;
    local_dc[0x27] = 0xe;
    local_dc[0x28] = 0;
    local_dc[0x29] = 0xf;
    local_dc[0x2a] = 0;
    local_dc[0x2b] = 0x10;
    local_dc[0x2c] = 0;
    local_dc[0x2d] = 0x11;
    local_dc[0x2e] = 0;
    local_dc[0x2f] = 0x12;
    local_dc[0x30] = 0;
    local_dc[0x31] = 0x13;
    local_dc[0x32] = 0;
    local_dc[0x33] = 0x14;
    local_dc[0x34] = 0xbc16;
    local_dc[0x35] = 0x15;
    local_dc[0x36] = 0;
    iVar3 = 0;
    piVar5 = local_dc + 0xb;
    while (*piVar5 != iVar1) {
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
      if (0x15 < iVar3) {
        return;
      }
    }
    if (iVar1 == 2) {
      uVar4 = *(uint *)(param_1 + 0xc) & 3;
      if (uVar4 == 3) {
        iVar2 = 48000;
      }
      else {
        if (uVar4 != 1) {
          return;
        }
        local_dc[0] = 0;
        local_dc[7] = 0xc4e0;
        local_dc[8] = 0xc4e0;
        local_dc[9] = 0xc4e0;
        local_dc[1] = 0xc382;
        local_dc[2] = 0xc3b4;
        local_dc[3] = 0xc3e6;
        local_dc[4] = 0xc418;
        local_dc[5] = 0xc4ae;
        local_dc[6] = 0xc47c;
        local_dc[10] = 0xc44a;
        if (*(uint *)(param_1 + 0x14) < 0xb) {
          iVar2 = local_dc[*(uint *)(param_1 + 0x14)];
        }
      }
    }
    else if (iVar1 == 9) {
      iVar2 = (-(uint)((*(uint *)(param_1 + 0xc) & 0x40000) != 0) & 0xffffffce) + 0xbbe4;
    }
    else {
      iVar2 = local_dc[iVar3 * 2 + 0xc];
    }
    if (iVar2 != 0) {
      _SfHelp_ContextHelp_20(0,*(undefined4 *)(param_1 + 8),iVar2,8,0);
    }
  }
  return;
}


