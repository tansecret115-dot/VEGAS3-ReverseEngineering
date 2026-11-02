/* Module: sftrans1.dll
   Function: FUN_00499ea0
   Address: 00499ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00499ea0(int *param_1,undefined4 param_2)

{
  int iVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_c;
  
  local_c = 0;
  piVar3 = param_1;
  do {
    piVar9 = piVar3 + 2;
    if ((piVar3[1] != 2) && (iVar4 = FUN_00422770(piVar3 + 1,2), iVar4 < 0)) break;
    puVar7 = (undefined4 *)*piVar9;
    puVar8 = puVar7;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined1 *)((int)puVar7 + 0x12) = 1;
    *(undefined1 *)((int)puVar7 + 0x13) = 1;
    *(undefined1 *)(puVar7 + 5) = 1;
    *(undefined1 *)((int)puVar7 + 0x15) = 1;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    puVar7 = (undefined4 *)*piVar9;
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x40) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x44) = 0x3fc99999;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x18) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x1c) = 0x3fc99999;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff00000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0x3ff00000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40498000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0x40498000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0xc0498000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0xc0498000;
    *(undefined1 *)(*piVar9 + 0x13) = 0;
    *(undefined1 *)(*piVar9 + 0x12) = 0;
    FUN_00423e40();
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406fe000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x406fe000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0xa8) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0xac) = 0x3fc99999;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x80) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x84) = 0x3fc99999;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3ff00000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3ff00000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc0498000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0498000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40498000;
    iVar4 = *piVar9;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40498000;
    *(undefined1 *)(*piVar9 + 0x7b) = 0;
    local_c = local_c + 1;
    *(undefined1 *)(*piVar9 + 0x7a) = 0;
    piVar3 = piVar9;
  } while (local_c < 4);
  switch(param_2) {
  case 1:
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0xbc14e5e1;
    *(undefined4 *)(iVar4 + 0x54) = 0x40488000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40520000;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff7829c;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0440000;
    *(undefined4 *)(iVar4 + 0x9c) = 0;
    *(undefined4 *)(iVar4 + 0x8c) = 0x80000000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406e0000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406e0000;
    break;
  case 2:
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0xbc14e5e1;
    *(undefined4 *)(iVar4 + 0x54) = 0x40488000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40520000;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff7829c;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0440000;
    *(undefined4 *)(iVar4 + 0x9c) = 0;
    *(undefined4 *)(iVar4 + 0x8c) = 0x80000000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406e0000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406e0000;
    break;
  case 3:
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0x40440000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x58) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x48) = 0xeb502960;
    *(undefined4 *)(iVar4 + 0x54) = 0x404db333;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40429999;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3fe40a57;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406a4000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc04c0000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc0418000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3fe40000;
    puVar7 = (undefined4 *)param_1[6];
    puVar8 = (undefined4 *)param_1[2];
    puVar10 = puVar7;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)param_1[4];
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0x68);
    puVar8 = (undefined4 *)(iVar4 + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0x68);
    puVar8 = (undefined4 *)(param_1[4] + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    break;
  case 4:
    FUN_00422770(param_1 + 1,4);
    FUN_00422770(param_1 + 3,4);
    FUN_00422770(param_1 + 5,4);
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0x66666666;
    *(undefined4 *)(iVar4 + 0x58) = 0x66666666;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0x40026666;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40026666;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40490000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0x3b13b13b;
    *(undefined4 *)(iVar4 + 0x94) = 0xc02a0000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc0360000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3ffb13b1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0x3b13b13b;
    *(undefined4 *)(iVar4 + 0xbc) = 0x403a0000;
    *(undefined4 *)(iVar4 + 0xc4) = 0x40460000;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3ffb13b1;
    *(undefined1 *)(param_1[2] + 0x7a) = 1;
    *(undefined1 *)(param_1[2] + 0x7b) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x4069a000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0x21642c86;
    *(undefined4 *)(iVar4 + 0xfc) = 0xc0370000;
    *(undefined4 *)(iVar4 + 0x104) = 0xc0418000;
    *(undefined4 *)(iVar4 + 0xf4) = 0x3ff8590b;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x120) = 0;
    *(undefined4 *)(iVar4 + 0x128) = 0;
    *(undefined4 *)(iVar4 + 0x118) = 0;
    *(undefined4 *)(iVar4 + 0x124) = 0x40380000;
    *(undefined4 *)(iVar4 + 300) = 0x40420000;
    *(undefined4 *)(iVar4 + 0x11c) = 0x3ff80000;
    *(undefined1 *)(param_1[2] + 0x7a) = 1;
    *(undefined1 *)(param_1[2] + 0xe3) = 1;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0x138);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x14a) = 1;
    *(undefined1 *)(iVar4 + 0x14b) = 1;
    *(undefined1 *)(iVar4 + 0x14c) = 1;
    *(undefined1 *)(iVar4 + 0x14d) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x138) = 0;
    *(undefined4 *)(iVar4 + 0x13c) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x140) = 0;
    *(undefined4 *)(iVar4 + 0x144) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x160) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x168) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x158) = 0;
    *(undefined4 *)(iVar4 + 0x164) = 0xc00ccccc;
    *(undefined4 *)(iVar4 + 0x16c) = 0xc00ccccc;
    *(undefined4 *)(iVar4 + 0x15c) = 0x3ff00000;
    *(undefined1 *)(param_1[2] + 0xe2) = 0;
    *(undefined1 *)(param_1[2] + 0x14b) = 0;
    puVar7 = (undefined4 *)param_1[6];
    puVar8 = (undefined4 *)param_1[2];
    puVar10 = puVar7;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)param_1[4];
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0x68);
    puVar8 = (undefined4 *)(iVar4 + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0x68);
    puVar8 = (undefined4 *)(param_1[4] + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0xd0);
    puVar8 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    puVar8 = (undefined4 *)(param_1[4] + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0x138);
    puVar8 = (undefined4 *)(iVar4 + 0x138);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0x138);
    puVar8 = (undefined4 *)(param_1[4] + 0x138);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    break;
  case 5:
    FUN_00422770(param_1 + 1,3);
    FUN_00422770(param_1 + 3,3);
    FUN_00422770(param_1 + 5,3);
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0xae147ae1;
    *(undefined4 *)(iVar4 + 0x58) = 0xae147ae1;
    *(undefined4 *)(iVar4 + 0x54) = 0x402ae147;
    *(undefined4 *)(iVar4 + 0x5c) = 0x402ae147;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40606000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x40606000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc04d0000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc04d0000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0xcf3cf3cf;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40350000;
    *(undefined4 *)(iVar4 + 0xc4) = 0x40594000;
    *(undefined4 *)(iVar4 + 0xb4) = 0x40133cf3;
    *(undefined1 *)(param_1[2] + 0x7a) = 1;
    *(undefined1 *)(param_1[2] + 0x7b) = 1;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0xe2) = 1;
    *(undefined1 *)(iVar4 + 0xe3) = 1;
    *(undefined1 *)(iVar4 + 0xe4) = 1;
    *(undefined1 *)(iVar4 + 0xe5) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0x55555555;
    *(undefined4 *)(iVar4 + 0xfc) = 0xc0320000;
    *(undefined4 *)(iVar4 + 0x104) = 0xbff80000;
    *(undefined4 *)(iVar4 + 0xf4) = 0x3fb55555;
    *(undefined1 *)(param_1[2] + 0xe2) = 0;
    *(undefined1 *)(param_1[2] + 0xe3) = 0;
    puVar7 = (undefined4 *)param_1[6];
    puVar8 = (undefined4 *)param_1[2];
    puVar10 = puVar7;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)param_1[4];
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0x68);
    puVar8 = (undefined4 *)(iVar4 + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0x68);
    puVar8 = (undefined4 *)(param_1[4] + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0xd0);
    puVar8 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    puVar8 = (undefined4 *)(param_1[4] + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    break;
  case 6:
    FUN_00422770(param_1 + 1,3);
    FUN_00422770(param_1 + 3,3);
    FUN_00422770(param_1 + 5,3);
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0x6e6e6e6e;
    *(undefined4 *)(iVar4 + 0x2c) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x34) = 0xc06d6000;
    *(undefined4 *)(iVar4 + 0x24) = 0x40126e6e;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x54) = 0x40240000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40460000;
    *(undefined4 *)(iVar4 + 0x4c) = 0x40119999;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40570000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x40570000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0440000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc0220000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3fcccccc;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xb8) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0xc0) = 0x33333333;
    *(undefined4 *)(iVar4 + 0xb0) = 0x1c71c71c;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40059999;
    *(undefined4 *)(iVar4 + 0xc4) = 0x3fe33333;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3fcc71c7;
    *(undefined1 *)(param_1[2] + 0x7a) = 1;
    *(undefined1 *)(param_1[2] + 0x7b) = 1;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0xe2) = 1;
    *(undefined1 *)(iVar4 + 0xe3) = 1;
    *(undefined1 *)(iVar4 + 0xe4) = 1;
    *(undefined1 *)(iVar4 + 0xe5) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0x33333333;
    *(undefined4 *)(iVar4 + 0xfc) = 0xbff00000;
    *(undefined4 *)(iVar4 + 0x104) = 0xc0033333;
    *(undefined4 *)(iVar4 + 0xf0) = 0x33333333;
    *(undefined4 *)(iVar4 + 0xf4) = 0x40033333;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x120) = 0;
    *(undefined4 *)(iVar4 + 0x128) = 0;
    *(undefined4 *)(iVar4 + 0x118) = 0x23232323;
    *(undefined4 *)(iVar4 + 0x124) = 0x40498000;
    *(undefined4 *)(iVar4 + 300) = 0x405e8000;
    *(undefined4 *)(iVar4 + 0x11c) = 0x40032323;
    *(undefined1 *)(param_1[2] + 0xe2) = 0;
    *(undefined1 *)(param_1[2] + 0xe3) = 0;
    puVar7 = (undefined4 *)param_1[6];
    puVar8 = (undefined4 *)param_1[2];
    puVar10 = puVar7;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)param_1[4];
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0x68);
    puVar8 = (undefined4 *)(iVar4 + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0x68);
    puVar8 = (undefined4 *)(param_1[4] + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0xd0);
    puVar8 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    puVar8 = (undefined4 *)(param_1[4] + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    break;
  case 7:
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x48) = 0xc901e574;
    *(undefined4 *)(iVar4 + 0x54) = 0x404b0000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40299999;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3fce573a;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x4068c000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3ff00000;
    break;
  case 8:
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x48) = 0x3601671a;
    *(undefined4 *)(iVar4 + 0x54) = 0x40524000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x3fd99999;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3f76719f;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x40582000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0xc18f9c19;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0448000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc049c000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3ff418f9;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x48) = 0x3601671a;
    *(undefined4 *)(iVar4 + 0x54) = 0x40524000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x3fd99999;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3f76719f;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x405f4000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0xd89d89d9;
    *(undefined4 *)(iVar4 + 0x94) = 0xc03a0000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc04b0000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x40009d89;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x48) = 0x3601671a;
    *(undefined4 *)(iVar4 + 0x54) = 0x40524000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x3fd99999;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3f76719f;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x40656000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0xaaaaaaab;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0380000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc04f0000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x4004aaaa;
    break;
  case 9:
    FUN_00422770(param_1 + 1,6);
    FUN_00422770(param_1 + 3,7);
    FUN_00422770(param_1 + 5,6);
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x58) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0x40073333;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40073333;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40458000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x40458000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0x55555555;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0380000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc0100000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3fc55555;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0xb0) = 0xd68d68d7;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40350000;
    *(undefined4 *)(iVar4 + 0xc4) = 0x400d9999;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3fc68d68;
    *(undefined1 *)(param_1[2] + 0x7a) = 1;
    *(undefined1 *)(param_1[2] + 0x7b) = 1;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0xe2) = 1;
    *(undefined1 *)(iVar4 + 0xe3) = 1;
    *(undefined1 *)(iVar4 + 0xe4) = 1;
    *(undefined1 *)(iVar4 + 0xe5) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x405b8000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x402b0000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0xfc) = 0xc0408000;
    *(undefined4 *)(iVar4 + 0x104) = 0xc0408000;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x120) = 0;
    *(undefined4 *)(iVar4 + 0x124) = 0x40370000;
    *(undefined4 *)(iVar4 + 0x128) = 0;
    *(undefined4 *)(iVar4 + 0x118) = 0;
    *(undefined4 *)(iVar4 + 300) = 0x40370000;
    *(undefined4 *)(iVar4 + 0x11c) = 0x3ff00000;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0x138);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x14a) = 1;
    *(undefined1 *)(iVar4 + 0x14b) = 1;
    *(undefined1 *)(iVar4 + 0x14c) = 1;
    *(undefined1 *)(iVar4 + 0x14d) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x138) = 0;
    *(undefined4 *)(iVar4 + 0x13c) = 0x406a9000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x140) = 0;
    *(undefined4 *)(iVar4 + 0x144) = 0x40692000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x160) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x168) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x158) = 0xaf017243;
    *(undefined4 *)(iVar4 + 0x164) = 0xc031b333;
    *(undefined4 *)(iVar4 + 0x16c) = 0xc04a5999;
    *(undefined4 *)(iVar4 + 0x15c) = 0x4007d1b7;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x188) = 0x33333333;
    *(undefined4 *)(iVar4 + 400) = 0;
    *(undefined4 *)(iVar4 + 0x180) = 0;
    *(undefined4 *)(iVar4 + 0x18c) = 0x40233333;
    *(undefined4 *)(iVar4 + 0x194) = 0x403c8000;
    *(undefined4 *)(iVar4 + 0x184) = 0x4007c000;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0x1a0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x1b2) = 1;
    *(undefined1 *)(iVar4 + 0x1b3) = 1;
    *(undefined1 *)(iVar4 + 0x1b4) = 1;
    *(undefined1 *)(iVar4 + 0x1b5) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x1a0) = 0;
    *(undefined4 *)(iVar4 + 0x1a4) = 0x406e7000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x1a8) = 0;
    *(undefined4 *)(iVar4 + 0x1ac) = 0x406fc000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x1c8) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x1d0) = 0x66666666;
    *(undefined4 *)(iVar4 + 0x1c0) = 0xb3bea367;
    *(undefined4 *)(iVar4 + 0x1cc) = 0xc022cccc;
    *(undefined4 *)(iVar4 + 0x1d4) = 0xc01e6666;
    *(undefined4 *)(iVar4 + 0x1c4) = 0x3fe9df51;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    *(undefined4 *)(iVar4 + 0x1f8) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x1e8) = 0x9999999a;
    *(undefined4 *)(iVar4 + 500) = 0x401a0000;
    *(undefined4 *)(iVar4 + 0x1fc) = 0x4014cccc;
    *(undefined4 *)(iVar4 + 0x1ec) = 0x3fe99999;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0x208);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x21a) = 1;
    *(undefined1 *)(iVar4 + 0x21b) = 1;
    *(undefined1 *)(iVar4 + 0x21c) = 1;
    *(undefined1 *)(iVar4 + 0x21d) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x208) = 0;
    *(undefined4 *)(iVar4 + 0x20c) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x210) = 0;
    *(undefined4 *)(iVar4 + 0x214) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x230) = 0x47ae147b;
    *(undefined4 *)(iVar4 + 0x238) = 0x47ae147b;
    *(undefined4 *)(iVar4 + 0x228) = 0;
    *(undefined4 *)(iVar4 + 0x234) = 0xbfc47ae1;
    *(undefined4 *)(iVar4 + 0x23c) = 0xbfc47ae1;
    *(undefined4 *)(iVar4 + 0x22c) = 0x3ff00000;
    *(undefined1 *)(param_1[2] + 0x21a) = 0;
    *(undefined1 *)(param_1[2] + 0x21b) = 0;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x50) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x58) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0x40073333;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40073333;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff00000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40460000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0x55555555;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0380000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xc050c000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x40065555;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0xb8) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0xc0) = 0x33333333;
    *(undefined4 *)(iVar4 + 0xb0) = 0x684bda12;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40059999;
    *(undefined4 *)(iVar4 + 0xc4) = 0x401d3333;
    *(undefined4 *)(iVar4 + 0xb4) = 0x4005a12f;
    *(undefined1 *)(param_1[4] + 0x7a) = 1;
    *(undefined1 *)(param_1[4] + 0x7b) = 1;
    iVar4 = param_1[4];
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0xe2) = 1;
    *(undefined1 *)(iVar4 + 0xe3) = 1;
    *(undefined1 *)(iVar4 + 0xe4) = 1;
    *(undefined1 *)(iVar4 + 0xe5) = 1;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x4055c000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x40654000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0xc1f07c1f;
    *(undefined4 *)(iVar4 + 0xfc) = 0xc0408000;
    *(undefined4 *)(iVar4 + 0x104) = 0x403d0000;
    *(undefined4 *)(iVar4 + 0xf4) = 0xbfec1f07;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x120) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x128) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x118) = 0x62c02258;
    *(undefined4 *)(iVar4 + 0x124) = 0x4047d999;
    *(undefined4 *)(iVar4 + 300) = 0xc044f333;
    *(undefined4 *)(iVar4 + 0x11c) = 0xbfec1be8;
    iVar4 = param_1[4];
    puVar7 = (undefined4 *)(iVar4 + 0x138);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x14a) = 1;
    *(undefined1 *)(iVar4 + 0x14b) = 1;
    *(undefined1 *)(iVar4 + 0x14c) = 1;
    *(undefined1 *)(iVar4 + 0x14d) = 1;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x138) = 0;
    *(undefined4 *)(iVar4 + 0x13c) = 0x40667000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x140) = 0;
    *(undefined4 *)(iVar4 + 0x144) = 0x406b7000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x160) = 0;
    *(undefined4 *)(iVar4 + 0x168) = 0;
    *(undefined4 *)(iVar4 + 0x158) = 0xc8590b21;
    *(undefined4 *)(iVar4 + 0x164) = 0xc0370000;
    *(undefined4 *)(iVar4 + 0x16c) = 0x403a0000;
    *(undefined4 *)(iVar4 + 0x15c) = 0xbff21642;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x188) = 0;
    *(undefined4 *)(iVar4 + 400) = 0;
    *(undefined4 *)(iVar4 + 0x180) = 0x759f2298;
    *(undefined4 *)(iVar4 + 0x18c) = 0x40428000;
    *(undefined4 *)(iVar4 + 0x194) = 0xc0450000;
    *(undefined4 *)(iVar4 + 0x184) = 0xbff22983;
    iVar4 = param_1[4];
    puVar7 = (undefined4 *)(iVar4 + 0x1a0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x1b2) = 1;
    *(undefined1 *)(iVar4 + 0x1b3) = 1;
    *(undefined1 *)(iVar4 + 0x1b4) = 1;
    *(undefined1 *)(iVar4 + 0x1b5) = 1;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x1a0) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x1a4) = 0x406c0ccc;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x1a8) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x1ac) = 0x40533333;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x1c8) = 0x66666666;
    *(undefined4 *)(iVar4 + 0x1d0) = 0x28f5c28f;
    *(undefined4 *)(iVar4 + 0x1c0) = 0x494ac8eb;
    *(undefined4 *)(iVar4 + 0x1cc) = 0xc0412666;
    *(undefined4 *)(iVar4 + 0x1d4) = 0x40368f5c;
    *(undefined4 *)(iVar4 + 0x1c4) = 0xbfe50c17;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x1f0) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x1f8) = 0;
    *(undefined4 *)(iVar4 + 0x1e8) = 0x2d2d2d2d;
    *(undefined4 *)(iVar4 + 500) = 0x401b3333;
    *(undefined4 *)(iVar4 + 0x1fc) = 0xc0120000;
    *(undefined4 *)(iVar4 + 0x1ec) = 0xbfe52d2d;
    iVar4 = param_1[4];
    puVar7 = (undefined4 *)(iVar4 + 0x208);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x21a) = 1;
    *(undefined1 *)(iVar4 + 0x21b) = 1;
    *(undefined1 *)(iVar4 + 0x21c) = 1;
    *(undefined1 *)(iVar4 + 0x21d) = 1;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x208) = 0;
    *(undefined4 *)(iVar4 + 0x20c) = 0x406ee000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x210) = 0;
    *(undefined4 *)(iVar4 + 0x214) = 0x406e2000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x230) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x238) = 0x66666666;
    *(undefined4 *)(iVar4 + 0x228) = 0x1a1f58d0;
    *(undefined4 *)(iVar4 + 0x234) = 0xc0139999;
    *(undefined4 *)(iVar4 + 0x23c) = 0xc0452666;
    *(undefined4 *)(iVar4 + 0x22c) = 0x402143eb;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 600) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x260) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x250) = 0xaaaaaaab;
    *(undefined4 *)(iVar4 + 0x25c) = 0x40133333;
    *(undefined4 *)(iVar4 + 0x264) = 0x40449999;
    *(undefined4 *)(iVar4 + 0x254) = 0x40212aaa;
    iVar4 = param_1[4];
    puVar7 = (undefined4 *)(iVar4 + 0x270);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x282) = 1;
    *(undefined1 *)(iVar4 + 0x283) = 1;
    *(undefined1 *)(iVar4 + 0x284) = 1;
    *(undefined1 *)(iVar4 + 0x285) = 1;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x270) = 0;
    *(undefined4 *)(iVar4 + 0x274) = 0x406fe000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x278) = 0;
    *(undefined4 *)(iVar4 + 0x27c) = 0x406fe000;
    iVar4 = param_1[4];
    *(undefined4 *)(iVar4 + 0x298) = 0x47ae147b;
    *(undefined4 *)(iVar4 + 0x2a0) = 0x47ae147b;
    *(undefined4 *)(iVar4 + 0x290) = 0;
    *(undefined4 *)(iVar4 + 0x29c) = 0xbf947ae1;
    *(undefined4 *)(iVar4 + 0x2a4) = 0xbf947ae1;
    *(undefined4 *)(iVar4 + 0x294) = 0x3ff00000;
    *(undefined1 *)(param_1[4] + 0x282) = 0;
    *(undefined1 *)(param_1[4] + 0x283) = 0;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0x40380000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x50) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x58) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x48) = 0xbe82fa1;
    *(undefined4 *)(iVar4 + 0x54) = 0x40113333;
    *(undefined4 *)(iVar4 + 0x5c) = 0x404a5999;
    *(undefined4 *)(iVar4 + 0x4c) = 0x402882fa;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40498000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x406ac000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0380000;
    *(undefined4 *)(iVar4 + 0x9c) = 0xbff80000;
    *(undefined4 *)(iVar4 + 0x8c) = 0x3fb00000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0xb0) = 0xb4c470d9;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40488000;
    *(undefined4 *)(iVar4 + 0xc4) = 0x4008cccc;
    *(undefined4 *)(iVar4 + 0xb4) = 0x3fb03227;
    *(undefined1 *)(param_1[6] + 0x7a) = 1;
    *(undefined1 *)(param_1[6] + 0x7b) = 1;
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0xe2) = 1;
    *(undefined1 *)(iVar4 + 0xe3) = 1;
    *(undefined1 *)(iVar4 + 0xe4) = 1;
    *(undefined1 *)(iVar4 + 0xe5) = 1;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x40640000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x40370000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0xf8) = 0xcccccccd;
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0xc548ceae;
    *(undefined4 *)(iVar4 + 0xfc) = 0xc035cccc;
    *(undefined4 *)(iVar4 + 0x104) = 0xc03c8000;
    *(undefined4 *)(iVar4 + 0xf4) = 0x3ff4eadc;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x120) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x128) = 0;
    *(undefined4 *)(iVar4 + 0x118) = 0x10e10e11;
    *(undefined4 *)(iVar4 + 0x124) = 0x40423333;
    *(undefined4 *)(iVar4 + 300) = 0x4047c000;
    *(undefined4 *)(iVar4 + 0x11c) = 0x3ff4e10e;
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(iVar4 + 0x138);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x14a) = 1;
    *(undefined1 *)(iVar4 + 0x14b) = 1;
    *(undefined1 *)(iVar4 + 0x14c) = 1;
    *(undefined1 *)(iVar4 + 0x14d) = 1;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x138) = 0;
    *(undefined4 *)(iVar4 + 0x13c) = 0x4069a000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x140) = 0;
    *(undefined4 *)(iVar4 + 0x144) = 0x40300000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x160) = 0x33333333;
    *(undefined4 *)(iVar4 + 0x168) = 0;
    *(undefined4 *)(iVar4 + 0x158) = 0x8a42f870;
    *(undefined4 *)(iVar4 + 0x164) = 0xc037b333;
    *(undefined4 *)(iVar4 + 0x16c) = 0x403a0000;
    *(undefined4 *)(iVar4 + 0x15c) = 0xbff18d80;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x188) = 0;
    *(undefined4 *)(iVar4 + 400) = 0;
    *(undefined4 *)(iVar4 + 0x180) = 0x55555555;
    *(undefined4 *)(iVar4 + 0x18c) = 0x40420000;
    *(undefined4 *)(iVar4 + 0x194) = 0xc0438000;
    *(undefined4 *)(iVar4 + 0x184) = 0xbff15555;
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(iVar4 + 0x1a0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x1b2) = 1;
    *(undefined1 *)(iVar4 + 0x1b3) = 1;
    *(undefined1 *)(iVar4 + 0x1b4) = 1;
    *(undefined1 *)(iVar4 + 0x1b5) = 1;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x1a0) = 0;
    *(undefined4 *)(iVar4 + 0x1a4) = 0x406fc000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x1a8) = 0;
    *(undefined4 *)(iVar4 + 0x1ac) = 0x40630000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x1c8) = 0;
    *(undefined4 *)(iVar4 + 0x1d0) = 0;
    *(undefined4 *)(iVar4 + 0x1c0) = 0xaaaaaaab;
    *(undefined4 *)(iVar4 + 0x1cc) = 0xc0080000;
    *(undefined4 *)(iVar4 + 0x1d4) = 0xc0534000;
    *(undefined4 *)(iVar4 + 0x1c4) = 0x4039aaaa;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x1f0) = 0x9999999a;
    *(undefined4 *)(iVar4 + 0x1f8) = 0x66666666;
    *(undefined4 *)(iVar4 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(iVar4 + 500) = 0x3fe99999;
    *(undefined4 *)(iVar4 + 0x1fc) = 0x40366666;
    *(undefined4 *)(iVar4 + 0x1ec) = 0x403bffff;
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(iVar4 + 0x208);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0x21a) = 1;
    *(undefined1 *)(iVar4 + 0x21b) = 1;
    *(undefined1 *)(iVar4 + 0x21c) = 1;
    *(undefined1 *)(iVar4 + 0x21d) = 1;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x208) = 0;
    *(undefined4 *)(iVar4 + 0x20c) = 0x406fe000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x210) = 0;
    *(undefined4 *)(iVar4 + 0x214) = 0x406fe000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x230) = 0x47ae147b;
    *(undefined4 *)(iVar4 + 0x238) = 0x47ae147b;
    *(undefined4 *)(iVar4 + 0x228) = 0;
    *(undefined4 *)(iVar4 + 0x234) = 0xbf847ae1;
    *(undefined4 *)(iVar4 + 0x23c) = 0xbf847ae1;
    *(undefined4 *)(iVar4 + 0x22c) = 0x3ff00000;
    *(undefined1 *)(param_1[6] + 0x21a) = 0;
    *(undefined1 *)(param_1[6] + 0x21b) = 0;
    break;
  case 10:
    FUN_00422770(param_1 + 1,3);
    FUN_00422770(param_1 + 3,3);
    FUN_00422770(param_1 + 5,3);
    puVar7 = (undefined4 *)param_1[2];
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0x80000000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0x40140000;
    *(undefined4 *)(iVar4 + 0x5c) = 0x40140000;
    *(undefined4 *)(iVar4 + 0x4c) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0x40478000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0x4050c000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0x55555555;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0420000;
    *(undefined4 *)(iVar4 + 0x9c) = 0x40080000;
    *(undefined4 *)(iVar4 + 0x8c) = 0xbfb55555;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0xbda12f68;
    *(undefined4 *)(iVar4 + 0xbc) = 0x403b0000;
    *(undefined4 *)(iVar4 + 0xc4) = 0xc0000000;
    *(undefined4 *)(iVar4 + 0xb4) = 0xbfb2f684;
    *(undefined1 *)(param_1[2] + 0x7a) = 1;
    *(undefined1 *)(param_1[2] + 0x7b) = 1;
    iVar4 = param_1[2];
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(iVar4 + 0xe2) = 1;
    *(undefined1 *)(iVar4 + 0xe3) = 1;
    *(undefined1 *)(iVar4 + 0xe4) = 1;
    *(undefined1 *)(iVar4 + 0xe5) = 1;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined4 *)(iVar4 + 0xdc) = 0x406fe000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xfc) = 0xc0390000;
    *(undefined4 *)(iVar4 + 0x104) = 0xc0390000;
    *(undefined4 *)(iVar4 + 0xf4) = 0x3ff00000;
    iVar4 = param_1[2];
    *(undefined4 *)(iVar4 + 0x120) = 0;
    *(undefined4 *)(iVar4 + 0x128) = 0;
    *(undefined4 *)(iVar4 + 0x118) = 0;
    *(undefined4 *)(iVar4 + 0x124) = 0x40498000;
    *(undefined4 *)(iVar4 + 300) = 0;
    *(undefined4 *)(iVar4 + 0x11c) = 0;
    *(undefined1 *)(param_1[2] + 0xe2) = 0;
    *(undefined1 *)(param_1[2] + 0xe3) = 0;
    puVar7 = (undefined4 *)param_1[6];
    puVar8 = (undefined4 *)param_1[2];
    puVar10 = puVar7;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)param_1[4];
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0x68);
    puVar8 = (undefined4 *)(iVar4 + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0x68);
    puVar8 = (undefined4 *)(param_1[4] + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = param_1[6];
    puVar7 = (undefined4 *)(param_1[2] + 0xd0);
    puVar8 = (undefined4 *)(iVar4 + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(iVar4 + 0xd0);
    puVar8 = (undefined4 *)(param_1[4] + 0xd0);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    break;
  case 0xb:
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0x406fe000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x34) = 0x40498000;
    *(undefined4 *)(iVar4 + 0x24) = 0xbff00000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0x40498000;
    *(undefined4 *)(iVar4 + 0x5c) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x4c) = 0xbff00000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = 0;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0x9c) = 0x40498000;
    *(undefined4 *)(iVar4 + 0x8c) = 0xbff00000;
    iVar4 = param_1[6];
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0x40498000;
    *(undefined4 *)(iVar4 + 0xc4) = 0xc0498000;
    *(undefined4 *)(iVar4 + 0xb4) = 0xbff00000;
  }
  iVar4 = 0;
  do {
    iVar5 = param_1[iVar4 * 2 + 1];
    if (0 < iVar5) {
      *(undefined1 *)(param_1[iVar4 * 2 + 2] + 0x10) = 1;
      *(undefined1 *)(param_1[iVar4 * 2 + 2] + 0x38) = 0;
    }
    if (1 < iVar5) {
      local_c = iVar5 + -1;
      iVar6 = 0x68;
      do {
        *(undefined1 *)(iVar6 + -8 + param_1[iVar4 * 2 + 2]) = 1;
        *(undefined1 *)(iVar6 + 0x10 + param_1[iVar4 * 2 + 2]) = 1;
        *(undefined1 *)(iVar6 + 0x38 + param_1[iVar4 * 2 + 2]) = 1;
        iVar1 = iVar6 + param_1[iVar4 * 2 + 2];
        dVar2 = *(double *)(iVar6 + param_1[iVar4 * 2 + 2]) - *(double *)(iVar1 + -0x68);
        if (_DAT_00555910 < dVar2) {
          *(double *)(iVar1 + -0x28) = *(double *)(iVar1 + -0x18) / dVar2;
          *(double *)(param_1[iVar4 * 2 + 2] + iVar6 + 0x18) =
               -(*(double *)(param_1[iVar4 * 2 + 2] + iVar6 + 0x28) / dVar2);
        }
        iVar6 = iVar6 + 0x68;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    iVar4 = iVar4 + 1;
    *(undefined1 *)(param_1[iVar4 * 2] + -8 + iVar5 * 0x68) = 0;
  } while (iVar4 < 3);
  return;
}


