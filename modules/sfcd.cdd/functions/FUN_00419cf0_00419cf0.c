/* Module: sfcd.cdd
   Function: FUN_00419cf0
   Address: 00419cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419cf0(int param_1,undefined2 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 in_EAX;
  char *pcVar2;
  uint uVar3;
  
  piVar1 = param_3;
  param_3[4] = 0;
  param_3 = (int *)CONCAT22((short)((uint)in_EAX >> 0x10),*param_2);
  FUN_0041f970((undefined1 *)&param_3,1);
  if (1 < (ushort)param_3) {
    if (9 < (*(byte *)(param_2 + 1) & 0xf)) {
      piVar1[1] = 1;
    }
    if (0x90 < (*(byte *)(param_2 + 1) & 0xf0)) {
      piVar1[1] = 1;
    }
    if (9 < (*(byte *)((int)param_2 + 3) & 0xf)) {
      piVar1[1] = 1;
    }
    if (0x90 < (*(byte *)((int)param_2 + 3) & 0xf0)) {
      piVar1[1] = 1;
    }
    pcVar2 = (char *)(param_2 + 2);
    for (uVar3 = (((uint)param_3 & 0xffff) - 2) / 0xb; uVar3 != 0; uVar3 = uVar3 - 1) {
      switch(pcVar2[3]) {
      case -0x60:
      case -0x5f:
      case -0x5e:
      case -0x50:
      case -0x40:
        break;
      default:
        if (*pcVar2 == '\x01') {
          piVar1[4] = piVar1[4] + 1;
        }
        if (9 < (pcVar2[3] & 0xfU)) {
          piVar1[2] = 1;
        }
        if (0x90 < (pcVar2[3] & 0xf0U)) {
          piVar1[2] = 1;
        }
        if (0x3b < (byte)pcVar2[3]) {
          piVar1[2] = 2;
        }
      }
      switch(pcVar2[3]) {
      case -0x60:
      case -0x5f:
      case -0x50:
      case -0x40:
        break;
      default:
        if (9 < (pcVar2[10] & 0xfU)) {
          piVar1[3] = 1;
        }
        if (0x90 < (pcVar2[10] & 0xf0U)) {
          piVar1[3] = 1;
        }
        if (0x4a < (byte)pcVar2[10]) {
          piVar1[3] = 2;
        }
        if (9 < (pcVar2[9] & 0xfU)) {
          piVar1[3] = 1;
        }
        if (0x90 < (pcVar2[9] & 0xf0U)) {
          piVar1[3] = 1;
        }
        if (0x3b < (byte)pcVar2[9]) {
          piVar1[3] = 2;
        }
        if (9 < (pcVar2[8] & 0xfU)) {
          piVar1[3] = 1;
        }
        if (0x90 < (pcVar2[8] & 0xf0U)) {
          piVar1[3] = 1;
        }
      }
      pcVar2 = pcVar2 + 0xb;
    }
    if (piVar1[2] == 0) {
      piVar1[2] = (9 < (uint)piVar1[4]) + 1;
    }
    if (piVar1[1] == 0) {
      piVar1[1] = (9 < (uint)piVar1[4]) + 1;
    }
    FUN_00419be0(param_2,(int)piVar1);
    if (*piVar1 != 0) {
      if (piVar1[1] == 0) {
        piVar1[1] = 1;
      }
      if (piVar1[2] == 0) {
        piVar1[2] = 1;
      }
      if (piVar1[3] == 0) {
        piVar1[3] = 1;
      }
    }
    if (((piVar1[1] != 0) && (piVar1[2] != 0)) && (piVar1[3] != 0)) {
      if (((byte)*(uint *)(param_1 + 0x2ce) & 1) == 1) {
        if (piVar1[1] == 2) {
          *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) | 0x10;
        }
        if (piVar1[2] == 2) {
          *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) | 0x20;
        }
        if (piVar1[3] == 2) {
          *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) | 0x40;
        }
        *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) | 0x80;
      }
      return 0;
    }
  }
  return 0x8004e0ce;
}


