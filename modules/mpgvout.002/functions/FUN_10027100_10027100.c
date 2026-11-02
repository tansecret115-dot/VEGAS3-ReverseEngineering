/* Module: mpgvout.002
   Function: FUN_10027100
   Address: 10027100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10027100(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
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
    iVar4 = 2;
    if (*(double *)((int)param_2 + 0x335) == 0.0) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x80) = iVar4;
  if (iVar4 == 0) {
    local_1c = (undefined4)(longlong)ROUND(*(double *)(param_2 + 0x10));
  }
  else {
    local_1c = (undefined4)(longlong)ROUND(*(double *)((int)param_2 + 0x335));
  }
  *(undefined4 *)(param_1 + 0x74) = local_1c;
  local_1c = (undefined4)(longlong)ROUND(*(double *)(param_2 + 0x12));
  iVar6 = 2;
  *(undefined4 *)(param_1 + 0x78) = local_1c;
  puVar3 = param_2 + 0x7b;
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
  iVar4 = 0;
  do {
    *(undefined4 *)(param_1 + 0x2e0 + iVar4) = puVar3[-0xc];
    *(undefined4 *)(param_1 + 0x310 + iVar4) = puVar3[-9];
    *(undefined4 *)(param_1 + 0x2ec + iVar4) = puVar3[-6];
    *(undefined4 *)(param_1 + 0x2f8 + iVar4) = puVar3[-3];
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(param_1 + 0x304 + iVar4) = uVar1;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar4 = 7;
  *(undefined4 *)(param_1 + 0x374) = param_2[0x6e];
  puVar3 = (undefined4 *)(param_1 + 0xc0);
  puVar5 = param_2 + 0x26;
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
    puVar3[-7] = puVar5[-7];
    puVar3[-6] = puVar5[-6];
    puVar3[-5] = puVar5[-5];
    puVar3[-4] = puVar5[-4];
    puVar3[-3] = puVar5[-3];
    puVar3[-2] = puVar5[-2];
    puVar3[-1] = puVar5[-1];
    *puVar3 = *puVar5;
    uVar2 = _DAT_100270f0;
    puVar5 = puVar5 + 8;
    puVar3 = puVar3 + 8;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined8 *)(param_1 + 0x350) = _DAT_100270f0;
  *(undefined8 *)(param_1 + 0x358) = uVar2;
  *(undefined8 *)(param_1 + 0x360) = _DAT_100270f8;
  return;
}


