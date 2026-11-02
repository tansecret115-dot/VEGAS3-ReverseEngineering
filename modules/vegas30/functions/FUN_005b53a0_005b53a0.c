/* Module: vegas30.exe
   Function: FUN_005b53a0
   Address: 005b53a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b53a0(int param_1,int param_2,undefined4 param_3,LPCSTR param_4,int param_5)

{
  undefined4 uVar1;
  LPCSTR lpString;
  int iVar2;
  CHAR *pCVar3;
  undefined4 uVar4;
  DWORD dwFlags;
  undefined1 local_108 [132];
  CHAR local_84 [132];
  
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    return -0x7fffbffb;
  }
  if ((0x54 < param_2) && (param_2 < 0x75)) {
    iVar2 = param_2 + -0x54;
    uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
    SfPrintF(local_108,uVar1,iVar2);
    goto LAB_005b57da;
  }
  if ((0x74 < param_2) && (param_2 < 0x8f)) {
    iVar2 = param_2 + -0x35;
    uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
    SfPrintF(local_108,uVar1,iVar2);
    goto LAB_005b57da;
  }
  if (param_2 == 0x91) {
    uVar4 = 0x41;
    uVar1 = _SfGetString_8(DAT_00647204,DAT_0064603c);
    SfPrintF(local_108,uVar1,uVar4);
    goto LAB_005b57da;
  }
  if ((0x91 < param_2) && (param_2 < 0xac)) {
    pCVar3 = (CHAR *)(param_2 + -0x51);
    goto LAB_005b5730;
  }
  uVar1 = DAT_006460a8;
  if (param_2 == 0xac) {
LAB_005b5481:
    uVar1 = _SfGetString_8(DAT_00647204,uVar1);
    SfPrintF(local_108,uVar1);
    goto LAB_005b57da;
  }
  if ((0xac < param_2) && (param_2 < 199)) {
    iVar2 = param_2 + -0x6c;
    goto LAB_005b56b5;
  }
  uVar1 = DAT_00646114;
  if ((param_2 == 199) || (uVar1 = DAT_00646120, param_2 == 0xca)) {
    uVar1 = _SfGetString_8(DAT_00647204,uVar1);
    SfPrintF(local_108,uVar1);
    goto LAB_005b57da;
  }
  if ((0xca < param_2) && (param_2 < 0xe5)) {
    iVar2 = param_2 + -0x8a;
    uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
    SfPrintF(local_108,uVar1,iVar2);
    goto LAB_005b57da;
  }
  if (param_2 == 0xe5) {
    uVar1 = _SfGetString_8(DAT_00647204,DAT_0064618c);
    SfPrintF(local_108,uVar1);
    goto LAB_005b57da;
  }
  if ((0xe5 < param_2) && (param_2 < 0x100)) {
    pCVar3 = (CHAR *)(param_2 + -0xa5);
    goto LAB_005b5730;
  }
  uVar1 = DAT_006461f8;
  if (param_2 == 0x100) goto LAB_005b5481;
  if ((0x100 < param_2) && (param_2 < 0x11b)) {
    iVar2 = param_2 + -0xc0;
    goto LAB_005b56b5;
  }
  if (param_2 == 0x11b) {
    uVar1 = _SfGetString_8(DAT_00647204,DAT_00646264);
    SfPrintF(local_108,uVar1);
    goto LAB_005b57da;
  }
  if ((0x11b < param_2) && (param_2 < 0x136)) {
    iVar2 = param_2 + -0xdb;
    uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
    SfPrintF(local_108,uVar1,iVar2);
    goto LAB_005b57da;
  }
  if ((param_2 < 0x138) || (0x157 < param_2)) {
    if ((0x157 < param_2) && (param_2 < 0x178)) {
      iVar2 = param_2 + -0x157;
LAB_005b56b5:
      uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
      SfPrintF(local_108,uVar1,iVar2);
      goto LAB_005b57da;
    }
    if ((0x177 < param_2) && (param_2 < 0x198)) {
      iVar2 = param_2 + -0x177;
      uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
      SfPrintF(local_108,uVar1,iVar2);
      goto LAB_005b57da;
    }
    if ((0x197 < param_2) && (param_2 < 0x1b8)) {
      pCVar3 = (CHAR *)(param_2 + -0x197);
      goto LAB_005b5730;
    }
    if ((0x1b7 < param_2) && (param_2 < 0x1d8)) {
      iVar2 = param_2 + -0x1b7;
      goto LAB_005b56b5;
    }
    if ((0x1d7 < param_2) && (param_2 < 0x1f8)) {
      iVar2 = param_2 + -0x1d7;
      uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
      SfPrintF(local_108,uVar1,iVar2);
      goto LAB_005b57da;
    }
    if ((0x1f7 < param_2) && (param_2 < 0x218)) {
      pCVar3 = (CHAR *)(param_2 + -0x1f7);
      goto LAB_005b5730;
    }
    if (param_4 == (LPCSTR)0x0) {
      _SfLoadString_16(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4),local_108,0x81);
      goto LAB_005b57da;
    }
    lpString = (LPCSTR)_SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
    if (param_5 == 0) {
      SfPrintF(local_108,lpString,param_4);
      goto LAB_005b57da;
    }
    dwFlags = 0;
    iVar2 = lstrlenA(lpString);
    PathCompactPathExA(local_84,param_4,0x7f - iVar2,dwFlags);
    pCVar3 = local_84;
  }
  else {
    pCVar3 = (CHAR *)(param_2 + -0x137);
LAB_005b5730:
    lpString = (LPCSTR)_SfGetString_8(DAT_00647204,*(undefined4 *)(&DAT_00645df8 + param_2 * 4));
  }
  SfPrintF(local_108,lpString,pCVar3);
LAB_005b57da:
  iVar2 = FUN_005b7230(param_2,param_3,local_108);
  if (iVar2 < 0) {
    return iVar2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return iVar2;
}


