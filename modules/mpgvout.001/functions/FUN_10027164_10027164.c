/* Module: mpgvout.001
   Function: FUN_10027164
   Address: 10027164
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10027164(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_1c;
  
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x34) = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = param_2[4];
  *(undefined4 *)(param_1 + 0x58) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x60) = param_2[0xc];
  *(undefined4 *)(param_1 + 100) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x44) = param_2[6];
  *(undefined4 *)(param_1 + 0x7c) = param_2[0x15];
  *(undefined4 *)(param_1 + 0x340) = param_2[0x88];
  if (param_2[0x16] == 0) {
    iVar3 = 2;
    if ((byte)((byte)((ushort)((ushort)NAN(*(double *)((int)param_2 + 0x335)) << 10) >> 8) |
              (byte)((ushort)((ushort)(*(double *)((int)param_2 + 0x335) == 0.0) << 0xe) >> 8)) ==
        0x40) {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x80) = iVar3;
  if (iVar3 == 0) {
    local_1c = (undefined4)(longlong)ROUND(*(double *)(param_2 + 0x10));
  }
  else {
    local_1c = (undefined4)(longlong)ROUND(*(double *)((int)param_2 + 0x335));
  }
  *(undefined4 *)(param_1 + 0x74) = local_1c;
  local_1c = (undefined4)(longlong)ROUND(*(double *)(param_2 + 0x12));
  iVar5 = 2;
  *(undefined4 *)(param_1 + 0x78) = local_1c;
  puVar2 = param_2 + 0x7b;
  *(undefined4 *)(param_1 + 0x84) = param_2[0x17];
  *(undefined4 *)(param_1 + 0x90) = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x94) = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x98) = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x9c) = param_2[0x1d];
  *(undefined4 *)(param_1 + 0x88) = param_2[0x18];
  *(undefined4 *)(param_1 + 0x2c4) = param_2[0x68];
  *(undefined4 *)(param_1 + 0x8c) = param_2[0x19];
  *(undefined4 *)(param_1 + 0x2ac) = param_2[0x62];
  *(undefined4 *)(param_1 + 0x2b0) = param_2[99];
  *(undefined4 *)(param_1 + 0x2b4) = param_2[100];
  *(undefined4 *)(param_1 + 0x2b8) = param_2[0x65];
  *(undefined4 *)(param_1 + 700) = param_2[0x66];
  *(undefined4 *)(param_1 + 0x2c0) = param_2[0x67];
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)((int)param_2 + 0x365);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)((int)param_2 + 0x369);
  *(undefined4 *)(param_1 + 0x2c8) = param_2[0x6d];
  *(int *)(param_1 + 0x2cc) = (int)*(char *)(param_2 + 0xcb);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)((int)param_2 + 0x351);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)((int)param_2 + 0x34d);
  iVar3 = 0;
  do {
    *(undefined4 *)(param_1 + 0x2e0 + iVar3) = puVar2[-0xc];
    *(undefined4 *)(param_1 + 0x310 + iVar3) = puVar2[-9];
    *(undefined4 *)(param_1 + 0x2ec + iVar3) = puVar2[-6];
    *(undefined4 *)(param_1 + 0x2f8 + iVar3) = puVar2[-3];
    *(undefined4 *)(param_1 + 0x304 + iVar3) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar3 = 7;
  *(undefined4 *)(param_1 + 0x374) = param_2[0x6e];
  puVar2 = (undefined4 *)(param_1 + 0xc0);
  puVar4 = param_2 + 0x26;
  *(undefined4 *)(param_1 + 0x370) = param_2[0x7e];
  *(undefined4 *)(param_1 + 0x378) = param_2[0x7f];
  *(undefined4 *)(param_1 + 0x328) = param_2[0x83];
  *(double *)(param_1 + 0x338) = (double)(int)param_2[0x87];
  *(undefined4 *)(param_1 + 0x31c) = param_2[0x80];
  *(undefined4 *)(param_1 + 800) = param_2[0x81];
  *(undefined4 *)(param_1 + 0x324) = param_2[0x82];
  *(undefined4 *)(param_1 + 0x32c) = param_2[0x84];
  *(undefined4 *)(param_1 + 0x330) = param_2[0x85];
  *(undefined4 *)(param_1 + 0x334) = param_2[0x86];
  *(undefined4 *)(param_1 + 0x344) = param_2[0x89];
  *(undefined4 *)(param_1 + 0x348) = param_2[0x8a];
  do {
    puVar2[-7] = puVar4[-7];
    puVar2[-6] = puVar4[-6];
    puVar2[-5] = puVar4[-5];
    puVar2[-4] = puVar4[-4];
    puVar2[-3] = puVar4[-3];
    puVar2[-2] = puVar4[-2];
    puVar2[-1] = puVar4[-1];
    *puVar2 = *puVar4;
    uVar1 = _DAT_10027154;
    puVar4 = puVar4 + 8;
    puVar2 = puVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined8 *)(param_1 + 0x350) = _DAT_10027154;
  *(undefined8 *)(param_1 + 0x358) = uVar1;
  *(undefined8 *)(param_1 + 0x360) = _DAT_1002715c;
  return;
}


