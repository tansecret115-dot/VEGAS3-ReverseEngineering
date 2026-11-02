/* Module: erv23260.dll
   Function: FUN_637f6450
   Address: 637f6450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f6450(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  byte *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x9c) != 0xf) {
    local_24 = *(int *)(param_1 + 0xa4);
    local_34 = *(int *)(param_1 + 0xa8);
    local_2c = *(int *)(param_1 + 0xac);
    local_38 = 0;
    do {
      local_18 = (byte *)0x0;
      local_1c = 0;
      local_c = 0;
      local_14 = 0;
      local_10 = 0;
      local_8 = 0;
      switch(local_38) {
      case 0:
        uVar1 = *(uint *)(param_1 + 0x9c);
        if ((uVar1 & 4) == 0) {
          iVar2 = *(int *)(param_1 + 0x1c);
          local_1c = *(int *)(param_1 + 0xa8) - iVar2;
          local_c = *(int *)(param_1 + 0xa4) - iVar2;
          local_18 = (byte *)(*(int *)(param_1 + 0xac) - iVar2);
        }
        if ((uVar1 & 1) == 0) {
          local_8 = *(int *)(param_1 + 0xa4) + -1;
          local_10 = *(int *)(param_1 + 0xa8) + -1;
          local_14 = *(int *)(param_1 + 0xac) + -1;
        }
        if ((local_c == 0) && (local_8 == 0)) {
          if ((uVar1 & 8) == 0) {
            local_c = *(int *)(param_1 + 0x1c) * 0x10 + *(int *)(param_1 + 0xa4);
            iVar2 = *(int *)(param_1 + 0x1c) * 8;
            local_1c = *(int *)(param_1 + 0xa8) + iVar2;
            local_18 = (byte *)(*(int *)(param_1 + 0xac) + iVar2);
          }
          if ((uVar1 & 2) == 0) {
            local_8 = *(int *)(param_1 + 0xa4) + 0x10;
            local_10 = *(int *)(param_1 + 0xa8) + 8;
            local_14 = *(int *)(param_1 + 0xac) + 8;
          }
        }
        break;
      case 1:
        uVar1 = *(uint *)(param_1 + 0x9c);
        if ((uVar1 & 4) == 0) {
          iVar2 = *(int *)(param_1 + 0x1c);
          local_1c = (*(int *)(param_1 + 0xa8) - iVar2) + 4;
          local_c = (*(int *)(param_1 + 0xa4) - iVar2) + 8;
          local_18 = (byte *)((*(int *)(param_1 + 0xac) - iVar2) + 4);
        }
        if ((uVar1 & 2) == 0) {
          local_8 = *(int *)(param_1 + 0xa4) + 0x10;
          local_10 = *(int *)(param_1 + 0xa8) + 8;
          local_14 = *(int *)(param_1 + 0xac) + 8;
        }
        if ((local_c == 0) && (local_8 == 0)) {
          if ((uVar1 & 8) == 0) {
            iVar2 = *(int *)(param_1 + 0x1c) * 8;
            local_c = *(int *)(param_1 + 0x1c) * 0x10 + 8 + *(int *)(param_1 + 0xa4);
            local_1c = *(int *)(param_1 + 0xa8) + 4 + iVar2;
            local_18 = (byte *)(*(int *)(param_1 + 0xac) + 4 + iVar2);
          }
          if ((uVar1 & 1) == 0) {
            local_8 = *(int *)(param_1 + 0xa4) + -1;
            local_10 = *(int *)(param_1 + 0xa8) + -1;
            local_14 = *(int *)(param_1 + 0xac) + -1;
          }
        }
        break;
      case 2:
        uVar1 = *(uint *)(param_1 + 0x9c);
        if ((uVar1 & 8) == 0) {
          local_c = *(int *)(param_1 + 0x1c) * 0x10 + *(int *)(param_1 + 0xa4);
          iVar2 = *(int *)(param_1 + 0x1c) * 8;
          local_1c = *(int *)(param_1 + 0xa8) + iVar2;
          local_18 = (byte *)(*(int *)(param_1 + 0xac) + iVar2);
        }
        if ((uVar1 & 1) == 0) {
          local_8 = *(int *)(param_1 + 0xa4) + -1 + *(int *)(param_1 + 0x1c) * 8;
          local_14 = *(int *)(param_1 + 0x1c) * 4;
          local_10 = *(int *)(param_1 + 0xa8) + -1 + local_14;
          local_14 = *(int *)(param_1 + 0xac) + -1 + local_14;
        }
        if ((local_c == 0) && (local_8 == 0)) {
          if ((uVar1 & 4) == 0) {
            iVar2 = *(int *)(param_1 + 0x1c);
            local_1c = *(int *)(param_1 + 0xa8) - iVar2;
            local_c = *(int *)(param_1 + 0xa4) - iVar2;
            local_18 = (byte *)(*(int *)(param_1 + 0xac) - iVar2);
          }
          if ((uVar1 & 2) == 0) {
            local_8 = *(int *)(param_1 + 0xa4) + 0x10 + *(int *)(param_1 + 0x1c) * 8;
            local_14 = *(int *)(param_1 + 0x1c) * 4;
            local_10 = *(int *)(param_1 + 0xa8) + 8 + local_14;
            local_14 = *(int *)(param_1 + 0xac) + 8 + local_14;
          }
        }
        break;
      case 3:
        uVar1 = *(uint *)(param_1 + 0x9c);
        if ((uVar1 & 8) == 0) {
          iVar2 = *(int *)(param_1 + 0x1c) * 8;
          local_c = *(int *)(param_1 + 0x1c) * 0x10 + 8 + *(int *)(param_1 + 0xa4);
          local_1c = *(int *)(param_1 + 0xa8) + 4 + iVar2;
          local_18 = (byte *)(*(int *)(param_1 + 0xac) + 4 + iVar2);
        }
        if ((uVar1 & 2) == 0) {
          local_8 = *(int *)(param_1 + 0xa4) + 0x10 + *(int *)(param_1 + 0x1c) * 8;
          local_14 = *(int *)(param_1 + 0x1c) * 4;
          local_10 = *(int *)(param_1 + 0xa8) + 8 + local_14;
          local_14 = *(int *)(param_1 + 0xac) + 8 + local_14;
        }
        if ((local_c == 0) && (local_8 == 0)) {
          if ((uVar1 & 4) == 0) {
            iVar2 = *(int *)(param_1 + 0x1c);
            local_1c = (*(int *)(param_1 + 0xa8) - iVar2) + 4;
            local_c = (*(int *)(param_1 + 0xa4) - iVar2) + 8;
            local_18 = (byte *)((*(int *)(param_1 + 0xac) - iVar2) + 4);
          }
          if ((uVar1 & 1) == 0) {
            local_8 = *(int *)(param_1 + 0xa4) + -1 + *(int *)(param_1 + 0x1c) * 8;
            local_14 = *(int *)(param_1 + 0x1c) * 4;
            local_10 = *(int *)(param_1 + 0xa8) + -1 + local_14;
            local_14 = *(int *)(param_1 + 0xac) + -1 + local_14;
          }
        }
      }
      local_30 = 8;
      local_28 = 0;
      do {
        local_20 = (byte *)0x0;
        do {
          if (local_c == 0) {
            *(undefined1 *)(local_28 + (int)local_20 + local_24) =
                 *(undefined1 *)(local_28 + local_8);
          }
          else if (local_8 == 0) {
            *(undefined1 *)(local_28 + (int)local_20 + local_24) =
                 *(undefined1 *)((int)local_20 + local_c);
          }
          else {
            *(char *)((int)local_20 + local_28 + local_24) =
                 (char)((int)((uint)*(byte *)(local_28 + local_8) +
                             (uint)*(byte *)((int)local_20 + local_c)) >> 1);
          }
          local_20 = (byte *)((int)local_20 + 1);
        } while ((int)local_20 < 8);
        local_28 = local_28 + *(int *)(param_1 + 0x1c);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      if (local_38 == 1) {
        iVar2 = *(int *)(param_1 + 0x1c) * 8 + -8;
      }
      else {
        iVar2 = 8;
      }
      local_40 = 4;
      local_24 = local_24 + iVar2;
      local_28 = 0;
      do {
        local_20 = local_18;
        local_3c = 4;
        pbVar3 = (byte *)(local_28 + local_2c);
        iVar2 = local_34 - local_2c;
        do {
          if (local_c == 0) {
            pbVar3[iVar2] = *(byte *)(local_28 + local_10);
            *pbVar3 = *(byte *)(local_28 + local_14);
          }
          else if (local_8 == 0) {
            pbVar3[iVar2] = local_20[local_1c - (int)local_18];
            *pbVar3 = *local_20;
          }
          else {
            pbVar3[iVar2] =
                 (byte)((int)((uint)*(byte *)(local_28 + local_10) +
                             (uint)local_20[local_1c - (int)local_18]) >> 1);
            *pbVar3 = (byte)((int)((uint)*(byte *)(local_28 + local_14) + (uint)*local_20) >> 1);
          }
          local_20 = local_20 + 1;
          pbVar3 = pbVar3 + 1;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
        local_28 = local_28 + *(int *)(param_1 + 0x1c);
        local_40 = local_40 + -1;
      } while (local_40 != 0);
      if (local_38 == 1) {
        iVar2 = *(int *)(param_1 + 0x1c) * 4 + -4;
      }
      else {
        iVar2 = 4;
      }
      local_34 = local_34 + iVar2;
      if (local_38 == 1) {
        iVar2 = *(int *)(param_1 + 0x1c) * 4 + -4;
      }
      else {
        iVar2 = 4;
      }
      local_2c = local_2c + iVar2;
      local_38 = local_38 + 1;
    } while (local_38 < 4);
  }
  return;
}


