/* Module: vegas30.exe
   Function: FUN_004f0c10
   Address: 004f0c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004f10c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0c10(int param_1)

{
  LPCSTR lpString;
  bool bVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  CLSID local_80;
  _MEMORYSTATUS local_70;
  WCHAR local_50 [39];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,&DAT_00648574,-1,local_50,0x28);
  local_2 = 0;
  CLSIDFromString(local_50,&local_80);
  iVar3 = _SfGraph_MapFxGUID_VegasVideoToOriginal_4(&local_80);
  if (-1 < iVar3) {
    StringFromGUID2(&local_80,local_50,0x28);
    if ((&stack0x00000000 == (undefined1 *)0x50) || (local_50[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_50,-1,&DAT_00648574,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      DAT_00648574 = 0;
    }
    DAT_0064859b = 0;
  }
  MultiByteToWideChar(0,1,&DAT_0064859c,-1,local_50,0x28);
  local_2 = 0;
  CLSIDFromString(local_50,&local_80);
  iVar3 = _SfGraph_MapFxGUID_VegasVideoToOriginal_4(&local_80);
  if (-1 < iVar3) {
    StringFromGUID2(&local_80,local_50,0x28);
    if ((&stack0x00000000 == (undefined1 *)0x50) || (local_50[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_50,-1,&DAT_0064859c,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      DAT_0064859c = 0;
    }
    DAT_006485c3 = 0;
  }
  MultiByteToWideChar(0,1,&DAT_006485c4,-1,local_50,0x28);
  local_2 = 0;
  CLSIDFromString(local_50,&local_80);
  iVar3 = _SfGraph_MapFxGUID_VegasVideoToOriginal_4(&local_80);
  if (-1 < iVar3) {
    StringFromGUID2(&local_80,local_50,0x28);
    if ((&stack0x00000000 == (undefined1 *)0x50) || (local_50[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_50,-1,&DAT_006485c4,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      DAT_006485c4 = 0;
    }
    DAT_006485eb = 0;
  }
  MultiByteToWideChar(0,1,&DAT_006485ec,-1,local_50,0x28);
  local_2 = 0;
  CLSIDFromString(local_50,&local_80);
  iVar3 = _SfGraph_MapFxGUID_VegasVideoToOriginal_4(&local_80);
  if (-1 < iVar3) {
    StringFromGUID2(&local_80,local_50,0x28);
    if ((&stack0x00000000 == (undefined1 *)0x50) || (local_50[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_50,-1,&DAT_006485ec,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      DAT_006485ec = 0;
    }
    DAT_00648613 = 0;
  }
  *(undefined4 *)(param_1 + 0x3624) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x98);
  uVar4 = *(uint *)(param_1 + 0xfc8);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else if (4 < uVar4) {
    uVar4 = 4;
  }
  *(uint *)(param_1 + 0xfc8) = uVar4;
  if (*(int *)(param_1 + 0x7a8) == 2) {
    *(undefined4 *)(param_1 + 0x7a8) = 1;
  }
  lpString = (LPCSTR)(param_1 + 0x300);
  iVar3 = lstrlenA(lpString);
  if (iVar3 == 0) {
    GetTempPathA(0x104,lpString);
  }
  FUN_004f0850(lpString,0x104);
  FUN_004f0850(param_1 + 0x101c,0x104);
  FUN_004f0850(param_1 + 0x2798,0x104);
  uVar5 = FUN_004f0910(param_1);
  *(undefined4 *)(param_1 + 0x578) = uVar5;
  uVar5 = FUN_004f0a00(param_1);
  *(undefined4 *)(param_1 + 0x688) = uVar5;
  uVar5 = FUN_004f0b90(param_1);
  *(undefined4 *)(param_1 + 0x790) = uVar5;
  *(undefined4 *)(param_1 + 0x2e6c) = 0;
  uVar4 = *(uint *)(param_1 + 4);
  if ((uVar4 < 100) || (100 < uVar4)) {
    uVar4 = 100;
  }
  *(uint *)(param_1 + 4) = uVar4;
  iVar3 = *(int *)(param_1 + 0x45c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x45c) = iVar3;
  iVar3 = *(int *)(param_1 + 0x460);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x460) = iVar3;
  uVar4 = *(uint *)(param_1 + 0x464);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else if (9 < uVar4) {
    uVar4 = 9;
  }
  *(uint *)(param_1 + 0x464) = uVar4;
  iVar3 = *(int *)(param_1 + 0x104);
  uVar4 = *(uint *)(param_1 + 0x100);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = 0;
      goto LAB_004f0fb4;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (20000000 < uVar4)))) goto LAB_004f0faf;
  }
  else {
LAB_004f0faf:
    uVar4 = 20000000;
LAB_004f0fb4:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x100) = uVar4;
  *(int *)(param_1 + 0x104) = iVar3;
  iVar3 = *(int *)(param_1 + 0x10c);
  uVar4 = *(uint *)(param_1 + 0x108);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = 0;
      goto LAB_004f0fef;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (1000000000 < uVar4)))) goto LAB_004f0fea;
  }
  else {
LAB_004f0fea:
    uVar4 = 1000000000;
LAB_004f0fef:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  *(int *)(param_1 + 0x10c) = iVar3;
  uVar4 = *(uint *)(param_1 + 0x14);
  if (0xffff < uVar4) {
    uVar4 = 0xffff;
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  iVar3 = *(int *)(param_1 + 500);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 500) = iVar3;
  iVar3 = *(int *)(param_1 + 0x1dc);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x1dc) = iVar3;
  iVar3 = *(int *)(param_1 + 0x1e0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x1e0) = iVar3;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar6 = *(uint *)(param_1 + 0x28);
  if ((0x7fffffff < uVar4) && (((int)uVar4 < -1 || (uVar6 < 0xffffffbf)))) {
    uVar6 = 0xffffffbf;
    uVar4 = 0xffffffff;
  }
  *(uint *)(param_1 + 0x28) = uVar6;
  *(uint *)(param_1 + 0x2c) = uVar4;
  if ((*(uint *)(param_1 + 0x468) & *(uint *)(param_1 + 0x468) - 1) != 0) {
    *(undefined4 *)(param_1 + 0x468) = DAT_0063f718;
  }
  if (*(int *)(param_1 + 0x46c) != 0x800000) {
    *(undefined4 *)(param_1 + 0x46c) = 0x8000;
  }
  iVar3 = *(int *)(param_1 + 0x1d8c);
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  else if (199 < iVar3) {
    iVar3 = 199;
  }
  *(int *)(param_1 + 0x1d8c) = iVar3;
  iVar3 = *(int *)(param_1 + 0x124);
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 0x124) = iVar3;
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x128) = iVar3;
  iVar3 = *(int *)(param_1 + 300);
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 300) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2650);
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 0x2650) = iVar3;
  fVar2 = _DAT_00610f20;
  if ((_DAT_00610f20 <= *(float *)(param_1 + 0x2654)) &&
     (fVar2 = _DAT_00619ab0, *(float *)(param_1 + 0x2654) <= _DAT_00619ab0)) {
    fVar2 = *(float *)(param_1 + 0x2654);
  }
  *(float *)(param_1 + 0x2654) = fVar2;
  fVar2 = _DAT_00610f20;
  if ((_DAT_00610f20 <= *(float *)(param_1 + 0x2eb8)) &&
     (fVar2 = _DAT_00619ab0, *(float *)(param_1 + 0x2eb8) <= _DAT_00619ab0)) {
    fVar2 = *(float *)(param_1 + 0x2eb8);
  }
  *(float *)(param_1 + 0x2eb8) = fVar2;
  iVar3 = *(int *)(param_1 + 0x130);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 0x130) = iVar3;
  iVar3 = *(int *)(param_1 + 0x134);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 0x134) = iVar3;
  iVar3 = *(int *)(param_1 + 0x138);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 0x138) = iVar3;
  iVar3 = *(int *)(param_1 + 0x13c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x4000 < iVar3) {
    iVar3 = 0x4000;
  }
  *(int *)(param_1 + 0x13c) = iVar3;
  iVar3 = *(int *)(param_1 + 0xe0);
  iVar7 = _SfGetUIFontSize_4(100);
  if (iVar3 < *(int *)(iVar7 + 4) + 2) {
    iVar3 = _SfGetUIFontSize_4(100);
    iVar7 = *(int *)(iVar3 + 4) + 2;
  }
  else {
    iVar7 = 0x4000;
    if (iVar3 < 0x4001) {
      iVar7 = iVar3;
    }
  }
  *(int *)(param_1 + 0xe0) = iVar7;
  iVar3 = *(int *)(param_1 + 0x1b4c);
  iVar7 = _SfGetUIFontSize_4(100);
  if (iVar3 < *(int *)(iVar7 + 4) + 2) {
    iVar3 = _SfGetUIFontSize_4(100);
    iVar7 = *(int *)(iVar3 + 4) + 2;
  }
  else {
    iVar7 = 0x4000;
    if (iVar3 < 0x4001) {
      iVar7 = iVar3;
    }
  }
  *(int *)(param_1 + 0x1b4c) = iVar7;
  fVar2 = _DAT_00619aac;
  if ((_DAT_00619aac <= *(float *)(param_1 + 0xac)) &&
     (fVar2 = _DAT_00619ab0, *(float *)(param_1 + 0xac) <= _DAT_00619ab0)) {
    fVar2 = *(float *)(param_1 + 0xac);
  }
  *(float *)(param_1 + 0xac) = fVar2;
  fVar2 = _DAT_00610f20;
  if ((_DAT_00610f20 <= *(float *)(param_1 + 0x2ebc)) &&
     (fVar2 = _DAT_00619aa8, *(float *)(param_1 + 0x2ebc) <= _DAT_00619aa8)) {
    fVar2 = *(float *)(param_1 + 0x2ebc);
  }
  *(float *)(param_1 + 0x2ebc) = fVar2;
  iVar3 = *(int *)(param_1 + 0xfe4);
  if ((iVar3 < 1) || (1 < iVar3)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xfe4) = iVar3;
  uVar4 = *(uint *)(param_1 + 0xfec);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else if (0x100 < uVar4) {
    uVar4 = 0x100;
  }
  *(uint *)(param_1 + 0xfec) = uVar4;
  uVar6 = *(uint *)(param_1 + 0xfe8);
  if (uVar6 == 0) {
    uVar4 = 1;
  }
  else if (uVar6 <= uVar4) {
    uVar4 = uVar6;
  }
  *(uint *)(param_1 + 0xfe8) = uVar4;
  if (99 < *(uint *)(param_1 + 0xecc)) {
    *(int *)(param_1 + 0xecc) = (int)(((ulonglong)*(uint *)(param_1 + 0xecc) % 100) / 10);
  }
  uVar4 = *(uint *)(param_1 + 0xecc);
  if (9 < uVar4) {
    uVar4 = 9;
  }
  *(uint *)(param_1 + 0xecc) = uVar4;
  iVar3 = *(int *)(param_1 + 0x7cc);
  uVar4 = *(uint *)(param_1 + 0x7c8);
  if (iVar3 < 1) {
    if ((iVar3 < 0) || (uVar4 < 100000)) {
      uVar4 = 100000;
      goto LAB_004f145b;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (10000000 < uVar4)))) goto LAB_004f1456;
  }
  else {
LAB_004f1456:
    uVar4 = 10000000;
LAB_004f145b:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x7c8) = uVar4;
  *(int *)(param_1 + 0x7cc) = iVar3;
  uVar4 = *(uint *)(param_1 + 0x2ea4);
  if (uVar4 < 2) {
    uVar4 = 2;
  }
  else if (10 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x2ea4) = uVar4;
  uVar8 = __allmul(uVar4,0,*(undefined4 *)(param_1 + 0x7c8),*(undefined4 *)(param_1 + 0x7cc));
  uVar8 = __alldiv(uVar8,2,0);
  *(undefined8 *)(param_1 + 0x1d68) = uVar8;
  iVar3 = *(int *)(param_1 + 0x1004);
  uVar4 = *(uint *)(param_1 + 0x1000);
  if (iVar3 < 1) {
    if ((iVar3 < 0) || (uVar4 < 100000)) {
      uVar4 = 100000;
      goto LAB_004f14e3;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (20000000 < uVar4)))) goto LAB_004f14de;
  }
  else {
LAB_004f14de:
    uVar4 = 20000000;
LAB_004f14e3:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x1000) = uVar4;
  *(int *)(param_1 + 0x1004) = iVar3;
  iVar3 = *(int *)(param_1 + 0x100c);
  uVar4 = *(uint *)(param_1 + 0x1008);
  if ((iVar3 < 1) && ((iVar3 < 0 || (uVar4 < 100000)))) {
    uVar4 = 100000;
    iVar3 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1004);
    if ((iVar7 <= iVar3) && ((iVar7 < iVar3 || (*(uint *)(param_1 + 0x1000) < uVar4)))) {
      uVar4 = *(uint *)(param_1 + 0x1000);
      iVar3 = iVar7;
    }
  }
  *(uint *)(param_1 + 0x1008) = uVar4;
  *(int *)(param_1 + 0x100c) = iVar3;
  GlobalMemoryStatus(&local_70);
  uVar4 = *(uint *)(param_1 + 0xe4c);
  if (uVar4 < 0x800000) {
    uVar4 = 0x800000;
  }
  else {
    uVar6 = ((local_70.dwTotalPhys >> 0x14) - 0x10 >> 1) * 0x100000;
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
  }
  *(uint *)(param_1 + 0xe4c) = uVar4;
  iVar3 = *(int *)(param_1 + 0x22e4);
  uVar4 = *(uint *)(param_1 + 0x22e0);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = 0;
      goto LAB_004f15a0;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (100000000 < uVar4)))) goto LAB_004f159b;
  }
  else {
LAB_004f159b:
    uVar4 = 100000000;
LAB_004f15a0:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x22e0) = uVar4;
  *(int *)(param_1 + 0x22e4) = iVar3;
  iVar3 = *(int *)(param_1 + 0x7bc);
  uVar4 = *(uint *)(param_1 + 0x7b8);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = 0;
      goto LAB_004f15db;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (600000000 < uVar4)))) goto LAB_004f15d6;
  }
  else {
LAB_004f15d6:
    uVar4 = 600000000;
LAB_004f15db:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x7b8) = uVar4;
  *(int *)(param_1 + 0x7bc) = iVar3;
  iVar3 = *(int *)(param_1 + 0x22ec);
  uVar4 = *(uint *)(param_1 + 0x22e8);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = 0;
      goto LAB_004f1615;
    }
    if ((-1 < iVar3) && ((0 < iVar3 || (600000000 < uVar4)))) goto LAB_004f1610;
  }
  else {
LAB_004f1610:
    uVar4 = 600000000;
LAB_004f1615:
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x22e8) = uVar4;
  *(int *)(param_1 + 0x22ec) = iVar3;
  iVar3 = *(int *)(param_1 + 0x22f0);
  if (iVar3 < -1) {
    iVar3 = -1;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x22f0) = iVar3;
  iVar3 = *(int *)(param_1 + 0xcc);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0xcc) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2e70);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0x2e70) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2438);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2438) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2e74);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2e74) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2ecc);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2ecc) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2e78);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  iVar7 = *(int *)(param_1 + 0x2e84);
  *(int *)(param_1 + 0x2e78) = iVar3;
  uVar4 = *(uint *)(param_1 + 0x2e80);
  if (iVar7 < 1) {
    if (-1 < iVar7) {
      if ((iVar7 < 0) || ((iVar7 < 1 && (uVar4 < 0x5f5e101)))) goto LAB_004f171d;
      goto LAB_004f1716;
    }
    uVar4 = 0;
  }
  else {
LAB_004f1716:
    uVar4 = 100000000;
  }
  iVar7 = 0;
LAB_004f171d:
  *(uint *)(param_1 + 0x2e80) = uVar4;
  iVar3 = *(int *)(param_1 + 0x2e88);
  *(int *)(param_1 + 0x2e84) = iVar7;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2e88) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2eb0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2eb0) = iVar3;
  iVar3 = *(int *)(param_1 + 0x1f3c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x1f3c) = iVar3;
  iVar3 = *(int *)(param_1 + 0x264c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x264c) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2de4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2de4) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2e94);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2e94) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2ed8);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0x2ed8) = iVar3;
  if (*(int *)(param_1 + 0x2ee4) < 1) {
    *(undefined4 *)(param_1 + 0x2ee4) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x2ee8);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2ee8) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2edc);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2edc) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 12000) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 12000) = 2;
  }
  iVar3 = *(int *)(param_1 + 0x2eb4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x2eb4) = iVar3;
  iVar3 = *(int *)(param_1 + 0x2770);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0x2770) = iVar3;
  iVar3 = *(int *)(param_1 + 0x3238);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x3238) = iVar3;
  iVar3 = *(int *)(param_1 + 0x33b0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x33b0) = iVar3;
  if (*(int *)(param_1 + 0x2df0) != -1) {
    *(undefined4 *)(param_1 + 0x2df4) = 0;
    *(undefined4 *)(param_1 + 0x2df8) = 0;
    *(undefined4 *)(param_1 + 0x33b4) = 0;
  }
  if (*(int *)(param_1 + 0x2df4) != 0) {
    *(undefined4 *)(param_1 + 0x2df8) = 0;
    *(undefined4 *)(param_1 + 0x33b4) = 0;
  }
  if (*(int *)(param_1 + 0x2df8) != 0) {
    *(undefined4 *)(param_1 + 0x33b4) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x33b4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (5 < iVar3) {
    iVar3 = 5;
  }
  *(int *)(param_1 + 0x33b4) = iVar3;
  iVar3 = *(int *)(param_1 + 0x33b8);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x33b8) = iVar3;
  iVar3 = *(int *)(param_1 + 0x33bc);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (1 < iVar3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x33bc) = iVar3;
  if (*(int *)(param_1 + 0x1f8) != 0) {
    *(undefined1 *)(param_1 + 0x1fc) = 0;
  }
  bVar1 = _DAT_006106d0 <= *(double *)(param_1 + 0x1ef8);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (bVar1) {
    *(double *)(param_1 + 0x1ef8) = *(double *)(param_1 + 0x1ef8) * _DAT_00612af0;
  }
  if (_DAT_006106d0 <= *(double *)(param_1 + 0x1f00)) {
    *(double *)(param_1 + 0x1f00) = *(double *)(param_1 + 0x1f00) * _DAT_00612af0;
  }
  return;
}


