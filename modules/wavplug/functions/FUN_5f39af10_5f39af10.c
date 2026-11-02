/* Module: wavplug.dll
   Function: FUN_5f39af10
   Address: 5f39af10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f39af10(ushort *param_1,uchar *param_2)

{
  uint uVar1;
  LPCSTR lpString2;
  BYTE *pBVar2;
  uchar *_Source;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int unaff_retaddr;
  uchar local_b8 [32];
  uint local_98 [3];
  CHAR aCStack_8c [4];
  ushort *local_88;
  int local_84;
  LPSTR pCStack_4;
  
  uVar5 = (uint)*param_1;
  if (uVar5 < 4) {
    if ((uVar5 != 3) && (uVar5 != 1)) goto LAB_5f39af71;
  }
  else if ((uVar5 < 0xfe00) || (0xfe02 < uVar5)) goto LAB_5f39af71;
  uVar1 = (uint)param_1[1];
  if ((uint)param_1[6] != (param_1[7] >> 3) * uVar1) {
LAB_5f39af71:
    puVar4 = local_98;
    for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_98[0] = 0x98;
    local_88 = param_1;
    if ((*param_1 == 3) || (*param_1 == 1)) {
      local_84 = 0x10;
    }
    else {
      local_84 = param_1[8] + 0x12;
    }
    local_98[2] = uVar5;
    iVar3 = acmFormatDetailsA(0,local_98,1);
    if ((iVar3 == 0) && (pCStack_4 != (LPSTR)0x0)) {
      lstrcpynA(pCStack_4,aCStack_8c,unaff_retaddr);
      pCStack_4[unaff_retaddr + -1] = '\0';
    }
    uVar5 = -(uint)(iVar3 != 0) & 0x80004005;
    if ((uVar5 != 0) && (pCStack_4 != (LPSTR)0x0)) {
      lpString2 = FUN_5f3984e0(DAT_5f3db380,0x103d);
      lstrcpynA(pCStack_4,lpString2,unaff_retaddr);
      pCStack_4[unaff_retaddr + -1] = '\0';
    }
    return uVar5;
  }
  if (uVar1 == 1) {
    _Source = FUN_5f3984e0(DAT_5f3db380,0x103e);
  }
  else {
    if (uVar1 != 2) {
      pBVar2 = FUN_5f3984e0(DAT_5f3db380,0x1040);
      FUN_5f39c1a0(local_b8,pBVar2);
      goto LAB_5f39b08d;
    }
    _Source = FUN_5f3984e0(DAT_5f3db380,0x103f);
  }
  _mbscpy(local_b8,_Source);
LAB_5f39b08d:
  if (param_2 != (uchar *)0x0) {
    if (*param_1 == 3) {
      uVar5 = 0x1042;
    }
    else {
      uVar5 = 0x1041;
    }
    pBVar2 = FUN_5f3984e0(DAT_5f3db380,uVar5);
    FUN_5f39c1a0(param_2,pBVar2);
  }
  return 0;
}


