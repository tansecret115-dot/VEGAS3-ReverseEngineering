/* Module: sftrans1.dll
   Function: FUN_0048d0d0
   Address: 0048d0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0048d0d0(int param_1)

{
  LPSTR pCVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  WCHAR *pWVar9;
  undefined4 local_a8;
  double local_90;
  WCHAR local_88 [32];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 local_14;
  double local_10;
  
  iVar6 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(iVar6 + 0xc4);
  uVar7 = (*(int *)(param_1 + 0x568) + *(int *)(param_1 + 0x56c)) / 2;
  dVar2 = (double)uVar3 * _DAT_00563040;
  if (*(double *)(iVar6 + 0x180) <= _DAT_005633d0) {
    local_a8 = 1;
    if (*(double *)(iVar6 + 0x180) <= _DAT_005633c8) {
      local_a8 = 0;
    }
  }
  else {
    local_a8 = 2;
  }
  puVar8 = (undefined4 *)(iVar6 + 0xac0);
  pWVar9 = local_88;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pWVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    pWVar9 = pWVar9 + 2;
  }
  puVar8 = (undefined4 *)(param_1 + 0x448);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x38);
  for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pCVar1 = (LPSTR)(param_1 + 0x450);
  if ((&stack0x00000000 == (undefined1 *)0x88) || (local_88[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_88,-1,pCVar1,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (pCVar1 != (LPSTR)0x0) {
    *pCVar1 = '\0';
  }
  *(undefined1 *)(param_1 + 0x46f) = 0;
  *(undefined4 *)(param_1 + 0x470) = local_48;
  *(uint *)(param_1 + 0x474) = local_44 & 1;
  *(uint *)(param_1 + 0x478) = local_44 & 2;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 100) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3ff80000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x24a;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x48) = local_18;
  *(undefined4 *)(param_1 + 0x4c) = local_14;
  *(undefined4 *)(param_1 + 0x70) = local_2c;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc4);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 8) + 200);
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar6 + 0xaa4);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar6 + 0xaa8);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar6 + 0xaac);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar6 + 0xab0);
  *(undefined4 *)(param_1 + 0xb8) = local_40;
  *(undefined4 *)(param_1 + 0xbc) = local_3c;
  *(undefined4 *)(param_1 + 0xc0) = local_38;
  *(undefined4 *)(param_1 + 0xc4) = local_34;
  *(double *)(param_1 + 0x68) = dVar2;
  *(undefined4 *)(param_1 + 0x78) = 10;
  *(undefined4 *)(param_1 + 0x90) = local_a8;
  if (local_30 == 0) {
    dVar4 = (double)*(int *)(param_1 + 0x568) / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x80) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x7c) = 0x249;
  }
  else if (local_30 == 1) {
    dVar4 = (double)*(int *)(param_1 + 0x56c) / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x80) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x7c) = 0x261;
  }
  else {
    dVar4 = (double)uVar7 / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x80) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x7c) = 0x251;
  }
  *(int *)(param_1 + 0x3c) = param_1 + 0x448;
  iVar6 = FUN_0053fd80();
  if (iVar6 < 0) {
    return -0x7fffbffb;
  }
  puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + 0xb38);
  pWVar9 = local_88;
  for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pWVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    pWVar9 = pWVar9 + 2;
  }
  puVar8 = (undefined4 *)(param_1 + 0x47c);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x108);
  for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pCVar1 = (LPSTR)(param_1 + 0x484);
  if ((&stack0x00000000 == (undefined1 *)0x88) || (local_88[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_88,-1,pCVar1,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (pCVar1 != (LPSTR)0x0) {
    *pCVar1 = '\0';
  }
  *(undefined1 *)(param_1 + 0x4a3) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = local_48;
  *(uint *)(param_1 + 0x4a8) = local_44 & 1;
  *(uint *)(param_1 + 0x4ac) = local_44 & 2;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 300) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x134) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x13c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x184) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff80000;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x24a;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 1;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x118) = local_18;
  *(undefined4 *)(param_1 + 0x11c) = local_14;
  *(undefined4 *)(param_1 + 0x140) = local_2c;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc4);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(*(int *)(param_1 + 8) + 200);
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(iVar6 + 0xaa4);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(iVar6 + 0xaa8);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar6 + 0xaac);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar6 + 0xab0);
  *(undefined4 *)(param_1 + 0x188) = local_40;
  *(undefined4 *)(param_1 + 0x18c) = local_3c;
  *(undefined4 *)(param_1 + 400) = local_38;
  *(undefined4 *)(param_1 + 0x194) = local_34;
  *(double *)(param_1 + 0x138) = dVar2;
  *(undefined4 *)(param_1 + 0x148) = 10;
  *(undefined4 *)(param_1 + 0x160) = local_a8;
  if (local_30 == 0) {
    dVar4 = (double)*(int *)(param_1 + 0x568) / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x150) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x14c) = 0x249;
  }
  else if (local_30 == 1) {
    dVar4 = (double)*(int *)(param_1 + 0x56c) / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x150) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x14c) = 0x261;
  }
  else {
    dVar4 = (double)uVar7 / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x150) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x14c) = 0x251;
  }
  *(int *)(param_1 + 0x10c) = param_1 + 0x47c;
  iVar6 = FUN_0053fd80();
  if (iVar6 < 0) {
    return -0x7fffbffb;
  }
  puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + 0xbb0);
  pWVar9 = local_88;
  for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pWVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    pWVar9 = pWVar9 + 2;
  }
  puVar8 = (undefined4 *)(param_1 + 0x4b0);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x1d8);
  for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pCVar1 = (LPSTR)(param_1 + 0x4b8);
  if ((&stack0x00000000 == (undefined1 *)0x88) || (local_88[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_88,-1,pCVar1,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (pCVar1 != (LPSTR)0x0) {
    *pCVar1 = '\0';
  }
  *(undefined1 *)(param_1 + 0x4d7) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = local_48;
  *(uint *)(param_1 + 0x4dc) = local_44 & 1;
  *(uint *)(param_1 + 0x4e0) = local_44 & 2;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x204) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0x3f800000;
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 500) = 0x3ff80000;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x24a;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 1;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x278) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = local_18;
  *(undefined4 *)(param_1 + 0x1ec) = local_14;
  *(undefined4 *)(param_1 + 0x210) = local_2c;
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc4);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(*(int *)(param_1 + 8) + 200);
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(iVar6 + 0xaa4);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(iVar6 + 0xaa8);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(iVar6 + 0xaac);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(iVar6 + 0xab0);
  *(undefined4 *)(param_1 + 600) = local_40;
  *(undefined4 *)(param_1 + 0x25c) = local_3c;
  *(undefined4 *)(param_1 + 0x260) = local_38;
  *(undefined4 *)(param_1 + 0x264) = local_34;
  *(double *)(param_1 + 0x208) = dVar2;
  *(undefined4 *)(param_1 + 0x218) = 10;
  *(undefined4 *)(param_1 + 0x230) = local_a8;
  if (local_30 == 0) {
    dVar4 = (double)*(int *)(param_1 + 0x568) / (double)*(uint *)(*(int *)(param_1 + 8) + 200);
    *(double *)(param_1 + 0x220) = (dVar4 + dVar4) - _DAT_00555908;
    *(undefined4 *)(param_1 + 0x21c) = 0x24c;
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
    if (local_30 == 1) {
      dVar4 = (double)uVar7 / (double)*(uint *)(iVar6 + 200);
      *(double *)(param_1 + 0x220) = ((dVar4 + dVar4) - _DAT_00555908) - *(double *)(iVar6 + 0xab8);
      *(undefined4 *)(param_1 + 0x21c) = 0x264;
    }
    else {
      dVar4 = (double)(*(int *)(param_1 + 0x568) + uVar7 >> 1) / (double)*(uint *)(iVar6 + 200);
      *(double *)(param_1 + 0x220) =
           ((dVar4 + dVar4) - _DAT_00555908) - *(double *)(iVar6 + 0xab8) * _DAT_00557838;
      *(undefined4 *)(param_1 + 0x21c) = 0x254;
    }
  }
  *(int *)(param_1 + 0x1dc) = param_1 + 0x4b0;
  iVar6 = FUN_0053fd80();
  if (iVar6 < 0) {
    return -0x7fffbffb;
  }
  puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + 0xc28);
  pWVar9 = local_88;
  for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pWVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    pWVar9 = pWVar9 + 2;
  }
  puVar8 = (undefined4 *)(param_1 + 0x4e4);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x2a8);
  for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pCVar1 = (LPSTR)(param_1 + 0x4ec);
  if ((&stack0x00000000 == (undefined1 *)0x88) || (local_88[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_88,-1,pCVar1,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (pCVar1 != (LPSTR)0x0) {
    *pCVar1 = '\0';
  }
  *(undefined1 *)(param_1 + 0x50b) = 0;
  *(undefined4 *)(param_1 + 0x50c) = local_48;
  *(uint *)(param_1 + 0x514) = local_44 & 2;
  *(uint *)(param_1 + 0x510) = local_44 & 1;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 700) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2cc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x324) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3ff80000;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0x24a;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x348) = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = local_18;
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 700) = local_14;
  *(undefined4 *)(param_1 + 0x2e0) = local_2c;
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(iVar6 + 0xc4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(iVar6 + 200);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(iVar6 + 0xaa4);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(iVar6 + 0xaa8);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(iVar6 + 0xaac);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(iVar6 + 0xab0);
  *(undefined4 *)(param_1 + 0x328) = local_40;
  *(undefined4 *)(param_1 + 0x32c) = local_3c;
  *(undefined4 *)(param_1 + 0x330) = local_38;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 10;
  *(undefined4 *)(param_1 + 0x334) = local_34;
  *(double *)(param_1 + 0x2d8) = dVar2;
  *(undefined4 *)(param_1 + 0x300) = local_a8;
  *(undefined4 *)(param_1 + 0x304) = 2;
  *(undefined4 *)(param_1 + 0x30c) = 2;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(int *)(param_1 + 0x2ac) = param_1 + 0x4e4;
  *(undefined4 *)(param_1 + 0x2ec) = 0x254;
  iVar6 = FUN_0053fd80();
  if (iVar6 < 0) {
    return -0x7fffbffb;
  }
  puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + 0xca0);
  pWVar9 = local_88;
  for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pWVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    pWVar9 = pWVar9 + 2;
  }
  puVar8 = (undefined4 *)(param_1 + 0x518);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x378);
  for (iVar6 = 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pCVar1 = (LPSTR)(param_1 + 0x520);
  if ((&stack0x00000000 == (undefined1 *)0x88) || (local_88[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_88,-1,pCVar1,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (pCVar1 != (LPSTR)0x0) {
    *pCVar1 = '\0';
  }
  *(undefined1 *)(param_1 + 0x53f) = 0;
  *(undefined4 *)(param_1 + 0x540) = local_48;
  *(uint *)(param_1 + 0x548) = local_44 & 2;
  *(uint *)(param_1 + 0x544) = local_44 & 1;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x39c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x3a4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x3ac) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x3f4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0x3ff80000;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0x24a;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 1;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x418) = 1;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x388) = local_18;
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38c) = local_14;
  *(undefined4 *)(param_1 + 0x3b0) = local_2c;
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(iVar6 + 0xc4);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(iVar6 + 200);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(iVar6 + 0xaa4);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(iVar6 + 0xaa8);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(iVar6 + 0xaac);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(iVar6 + 0xab0);
  *(undefined4 *)(param_1 + 0x3f8) = local_40;
  *(undefined4 *)(param_1 + 0x3fc) = local_3c;
  *(undefined4 *)(param_1 + 0x400) = local_38;
  *(undefined4 *)(param_1 + 0x3b8) = 10;
  *(undefined4 *)(param_1 + 0x404) = local_34;
  *(double *)(param_1 + 0x3a8) = dVar2;
  *(undefined4 *)(param_1 + 0x3d0) = local_a8;
  if (local_30 == 0) {
    dVar2 = (double)uVar7 / (double)*(uint *)(iVar6 + 200);
    dVar4 = (dVar2 + dVar2) - _DAT_00555908;
    dVar2 = *(double *)(iVar6 + 0xab8);
    *(undefined4 *)(param_1 + 0x3bc) = 0x24c;
    *(double *)(param_1 + 0x3c0) = dVar4 + dVar2;
  }
  else if (local_30 == 1) {
    uVar7 = *(uint *)(iVar6 + 200);
    *(undefined4 *)(param_1 + 0x3bc) = 0x264;
    dVar2 = (double)*(int *)(param_1 + 0x56c) / (double)uVar7;
    *(double *)(param_1 + 0x3c0) = (dVar2 + dVar2) - _DAT_00555908;
  }
  else {
    dVar2 = (double)(uVar7 + *(int *)(param_1 + 0x56c) >> 1) / (double)*(uint *)(iVar6 + 200);
    dVar2 = (dVar2 + dVar2) - _DAT_00555908;
    dVar4 = *(double *)(iVar6 + 0xab8) * _DAT_00557838;
    *(undefined4 *)(param_1 + 0x3bc) = 0x254;
    *(double *)(param_1 + 0x3c0) = dVar4 + dVar2;
  }
  *(int *)(param_1 + 0x37c) = param_1 + 0x518;
  iVar6 = FUN_0053fd80();
  if (-1 < iVar6) {
    dVar2 = local_90;
    if (local_90 <= (double)(ulonglong)uVar3) {
      dVar2 = (double)(ulonglong)uVar3;
    }
    if (local_10 <= dVar2) {
      if (local_90 <= (double)(ulonglong)uVar3) {
        *(ulonglong *)(param_1 + 0x560) = (ulonglong)uVar3;
        return iVar6;
      }
      *(double *)(param_1 + 0x560) = local_90;
      return iVar6;
    }
    *(double *)(param_1 + 0x560) = local_10;
    return iVar6;
  }
  return -0x7fffbffb;
}


