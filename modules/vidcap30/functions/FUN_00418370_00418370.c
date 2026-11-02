/* Module: vidcap30.exe
   Function: FUN_00418370
   Address: 00418370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418370(undefined4 param_1,int param_2)

{
  LPCSTR pCVar1;
  bool bVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_c8 [200];
  
  pCVar1 = (LPCSTR)(param_2 + 0x154);
  iVar4 = lstrlenA(pCVar1);
  if (iVar4 == 0) {
    _SfGetModulePath_12(DAT_005ba298,pCVar1,0x104);
  }
  FUN_00418330(pCVar1,0x104);
  pCVar1 = (LPCSTR)(param_2 + 0x35c);
  iVar4 = lstrlenA(pCVar1);
  if (iVar4 == 0) {
    _SfGetModulePath_12(DAT_005ba298,pCVar1,0x104);
  }
  FUN_00418330(pCVar1,0x104);
  uVar5 = *(uint *)(param_2 + 4);
  if ((uVar5 < 0x68) || (0x68 < uVar5)) {
    uVar5 = 0x68;
  }
  *(uint *)(param_2 + 4) = uVar5;
  uVar5 = *(uint *)(param_2 + 0x1c);
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  *(uint *)(param_2 + 0x1c) = uVar5;
  iVar4 = *(int *)(param_2 + 0x48);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x48) = iVar4;
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x30) = iVar4;
  iVar4 = *(int *)(param_2 + 0x34);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x34) = iVar4;
  iVar4 = *(int *)(param_2 + 0x20);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x4000 < iVar4) {
    iVar4 = 0x4000;
  }
  *(int *)(param_2 + 0x20) = iVar4;
  iVar4 = *(int *)(param_2 + 0x24);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x4000 < iVar4) {
    iVar4 = 0x4000;
  }
  *(int *)(param_2 + 0x24) = iVar4;
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x4000 < iVar4) {
    iVar4 = 0x4000;
  }
  *(int *)(param_2 + 0x28) = iVar4;
  iVar4 = *(int *)(param_2 + 0x2c);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x4000 < iVar4) {
    iVar4 = 0x4000;
  }
  *(int *)(param_2 + 0x2c) = iVar4;
  uVar5 = *(uint *)(param_2 + 0x480);
  if (9 < uVar5) {
    uVar5 = 9;
  }
  *(uint *)(param_2 + 0x480) = uVar5;
  uVar5 = *(uint *)(param_2 + 0x126c);
  if (2 < uVar5) {
    uVar5 = 2;
  }
  *(uint *)(param_2 + 0x126c) = uVar5;
  uVar5 = *(uint *)(param_2 + 0x1028);
  if (2 < uVar5) {
    uVar5 = 2;
  }
  *(uint *)(param_2 + 0x1028) = uVar5;
  iVar4 = *(int *)(param_2 + 0x1284);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1284) = iVar4;
  if (99 < *(uint *)(param_2 + 0x480)) {
    *(int *)(param_2 + 0x480) = (int)(((ulonglong)*(uint *)(param_2 + 0x480) % 100) / 10);
  }
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x14) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf24);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf24) = iVar4;
  iVar4 = *(int *)(param_2 + 0x5ac);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x5ac) = iVar4;
  iVar4 = *(int *)(param_2 + 0x5b0);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x5b0) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf80);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf80) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf10);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf10) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1044);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1044) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1288);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1288) = iVar4;
  iVar4 = *(int *)(param_2 + 0x128c);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x128c) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1290);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1290) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1294);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1294) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1298);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1298) = iVar4;
  iVar4 = *(int *)(param_2 + 0xfc0);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xfc0) = iVar4;
  iVar4 = *(int *)(param_2 + 0xfc4);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xfc4) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1270);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1270) = iVar4;
  iVar4 = *(int *)(param_2 + 0xfcc);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xfcc) = iVar4;
  iVar4 = *(int *)(param_2 + 0x460);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x460) = iVar4;
  iVar4 = *(int *)(param_2 + 0x464);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x464) = iVar4;
  uVar5 = *(uint *)(param_2 + 0x468);
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  else if (9 < uVar5) {
    uVar5 = 9;
  }
  *(uint *)(param_2 + 0x468) = uVar5;
  iVar4 = *(int *)(param_2 + 0x1278);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1278) = iVar4;
  iVar4 = *(int *)(param_2 + 0xfa8);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xfa8) = iVar4;
  iVar4 = *(int *)(param_2 + 0xcd4);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xcd4) = iVar4;
  iVar4 = *(int *)(param_2 + 0xcd8);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xcd8) = iVar4;
  iVar4 = *(int *)(param_2 + 0xcdc);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xcdc) = iVar4;
  iVar4 = *(int *)(param_2 + 0xce0);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xce0) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf84);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf84) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf88);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf88) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf8c);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf8c) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf90);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf90) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf94);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf94) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf98);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf98) = iVar4;
  iVar4 = *(int *)(param_2 + 0xfb8);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xfb8) = iVar4;
  uVar5 = *(uint *)(param_2 + 0xfbc);
  if (60000 < uVar5) {
    uVar5 = 60000;
  }
  *(uint *)(param_2 + 0xfbc) = uVar5;
  iVar4 = *(int *)(param_2 + 0xf74);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf74) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf7c);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf7c) = iVar4;
  iVar4 = *(int *)(param_2 + 0x12b8);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x12b8) = iVar4;
  iVar4 = *(int *)(param_2 + 0xf78);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (10000 < iVar4) {
    iVar4 = 10000;
  }
  *(int *)(param_2 + 0xf78) = iVar4;
  iVar4 = *(int *)(param_2 + 0x12bc);
  if (iVar4 < 1000) {
    iVar4 = 1000;
  }
  else if (600000 < iVar4) {
    iVar4 = 600000;
  }
  bVar2 = _DAT_00589f20 <= *(double *)(param_2 + 0xf08);
  *(int *)(param_2 + 0x12bc) = iVar4;
  dVar3 = _DAT_00589f20;
  if ((bVar2) && (dVar3 = _DAT_00589f18, *(double *)(param_2 + 0xf08) <= _DAT_00589f18)) {
    dVar3 = *(double *)(param_2 + 0xf08);
  }
  iVar4 = *(int *)(param_2 + 0xf18);
  *(double *)(param_2 + 0xf08) = dVar3;
  if (iVar4 < -1) {
    iVar4 = -1;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf18) = iVar4;
  uVar5 = *(uint *)(param_2 + 0xf70);
  if (600 < uVar5) {
    uVar5 = 600;
  }
  *(uint *)(param_2 + 0xf70) = uVar5;
  uVar5 = *(uint *)(param_2 + 0xf6c);
  if (20000 < uVar5) {
    uVar5 = 20000;
  }
  *(uint *)(param_2 + 0xf6c) = uVar5;
  uVar5 = *(uint *)(param_2 + 0x101c);
  if (1 < uVar5) {
    uVar5 = 1;
  }
  bVar2 = _DAT_00589f10 <= *(double *)(param_2 + 0x1008);
  *(uint *)(param_2 + 0x101c) = uVar5;
  dVar3 = _DAT_00589f10;
  if ((bVar2) && (dVar3 = _DAT_00589f08, *(double *)(param_2 + 0x1008) <= _DAT_00589f08)) {
    dVar3 = *(double *)(param_2 + 0x1008);
  }
  iVar4 = *(int *)(param_2 + 0xf9c);
  *(double *)(param_2 + 0x1008) = dVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xf9c) = iVar4;
  iVar4 = *(int *)(param_2 + 0x1040);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1040) = iVar4;
  iVar4 = *(int *)(param_2 + 0x5a8);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  uVar5 = *(uint *)(param_2 + 0xfb0);
  *(int *)(param_2 + 0x5a8) = iVar4;
  uVar6 = *(uint *)(param_2 + 0xfb4);
  if ((0x7fffffff < uVar6) && (((int)uVar6 < -1 || (uVar5 < 0xfffffffb)))) {
    uVar5 = 0xfffffffb;
    uVar6 = 0xffffffff;
  }
  *(uint *)(param_2 + 0xfb0) = uVar5;
  *(uint *)(param_2 + 0xfb4) = uVar6;
  if ((*(int *)(param_2 + 0xfb0) == -3) && (*(int *)(param_2 + 0xfb4) == -1)) {
    *(undefined4 *)(param_2 + 0xfb0) = 0;
    *(undefined4 *)(param_2 + 0xfb4) = 0;
  }
  iVar4 = *(int *)(param_2 + 0x12d4);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x12d4) = iVar4;
  iVar4 = *(int *)(param_2 + 0xfd0);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1 < iVar4) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 0xfd0) = iVar4;
  if (*(int *)(param_2 + 0x4c) != 0) {
    SfPrintF(local_c8,
             "$(AppName) has detected that it was not shut down properly.\nWould you like to load the previous project?"
            );
    iVar4 = _SfMessageBox_16(param_1,local_c8,"Load Project",0x14);
    if (iVar4 == 7) {
      *(undefined1 *)(param_2 + 0x50) = 0;
    }
  }
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}


