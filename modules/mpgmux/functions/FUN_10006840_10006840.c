/* Module: mpgmux.dll
   Function: FUN_10006840
   Address: 10006840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl FUN_10006840(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  pcVar1 = (char *)(**(code **)(param_2 + 4))(param_2,0x200);
  *(undefined4 *)(param_1 + 0x12c0) = 0;
  *(undefined1 *)(param_1 + 0x12c4) = 0;
  *(undefined1 *)(param_1 + 0x12c5) = 0;
  *(undefined1 *)(param_1 + 0x12c6) = 1;
  uVar2 = 3;
  uVar4 = 0xffffffb3;
  do {
    if (0xff < uVar2) {
      if (uVar4 != 0x1b8) goto LAB_100068b5;
      break;
    }
    *(char *)(param_1 + 0x12c4 + uVar2) = (char)uVar4;
    iVar3 = uVar2 + 1;
    uVar2 = uVar2 + 2;
    uVar4 = uVar4 << 8 | (uint)(byte)pcVar1[iVar3];
  } while (uVar4 != 0x1b8);
  *(uint *)(param_1 + 0x12c0) = uVar2 - 3;
LAB_100068b5:
  if ((((*pcVar1 == '\0') && (pcVar1[1] == '\0')) && (pcVar1[2] == '\x01')) && (pcVar1[3] == -0x4d))
  {
    *(uint *)(param_1 + 0x1298) = (uint)(byte)pcVar1[4] << 4 | (uint)((byte)pcVar1[5] >> 4);
    *(uint *)(param_1 + 0x129c) = ((byte)pcVar1[5] & 0xf) << 8 | (uint)(byte)pcVar1[6];
    *(uint *)(param_1 + 0x12a0) = (uint)((byte)pcVar1[7] >> 4);
    *(uint *)(param_1 + 0x12a4) = (byte)pcVar1[7] & 0xf;
    uVar4 = (uint)CONCAT11(pcVar1[8],pcVar1[9]) << 2 | (uint)((byte)pcVar1[10] >> 6);
    *(uint *)(param_1 + 0x12a8) = uVar4;
    if (uVar4 == 0x3ffff) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x2e58) == 0) goto LAB_100069c9;
      *(int *)(param_1 + 0x12a8) = *(int *)(param_1 + 0x2e58) / 400;
    }
    uVar4 = ((byte)pcVar1[10] & 0x1f) << 5 | (uint)((byte)pcVar1[0xb] >> 3);
    uVar5 = CONCAT44(uVar4,*(int *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x12b4) = uVar4;
    *(uint *)(param_1 + 0x12b8) = (byte)pcVar1[0xb] >> 1 & 1;
    if (*(int *)(param_1 + 0x2c) == 4) {
      FUN_1000d1ca(*(double *)(&DAT_10016dc8 + *(int *)(param_1 + 0x12a4) * 8) * _DAT_10015128);
      uVar5 = __ftol();
      *(int *)(param_1 + 0x2e74) = (int)uVar5;
    }
    return uVar5 & 0xffffffff00000000;
  }
LAB_100069c9:
  return CONCAT44(uVar4,0x10);
}


