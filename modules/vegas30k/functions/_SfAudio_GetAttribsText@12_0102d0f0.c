/* Module: vegas30k.dll
   Function: _SfAudio_GetAttribsText@12
   Address: 0102d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfAudio_GetAttribsText_12(ushort *param_1,int param_2)

{
  uint uVar1;
  LPCSTR lpString2;
  undefined4 uVar2;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int unaff_retaddr;
  undefined4 uVar8;
  uchar local_b8 [32];
  uint local_98 [3];
  CHAR aCStack_8c [4];
  ushort *local_88;
  int local_84;
  LPSTR pCStack_4;
  
                    /* 0x2d0f0  742  _SfAudio_GetAttribsText@12 */
  uVar7 = (uint)*param_1;
  if (uVar7 < 4) {
    if ((uVar7 != 3) && (uVar7 != 1)) goto LAB_0102d151;
  }
  else if ((uVar7 < 0xfe00) || (0xfe02 < uVar7)) goto LAB_0102d151;
  uVar5 = (uint)param_1[7];
  uVar1 = (uint)param_1[1];
  if ((uint)param_1[6] != (param_1[7] >> 3) * uVar1) {
LAB_0102d151:
    puVar6 = local_98;
    for (iVar4 = 0x26; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_98[0] = 0x98;
    local_88 = param_1;
    if ((*param_1 == 3) || (*param_1 == 1)) {
      local_84 = 0x10;
    }
    else {
      local_84 = param_1[8] + 0x12;
    }
    local_98[2] = uVar7;
    iVar4 = acmFormatDetailsA(0,local_98,1);
    if ((iVar4 == 0) && (pCStack_4 != (LPSTR)0x0)) {
      lstrcpynA(pCStack_4,aCStack_8c,unaff_retaddr);
      pCStack_4[unaff_retaddr + -1] = '\0';
    }
    uVar7 = -(uint)(iVar4 != 0) & 0x80004005;
    if ((uVar7 != 0) && (pCStack_4 != (LPSTR)0x0)) {
      lpString2 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x103d);
      lstrcpynA(pCStack_4,lpString2,unaff_retaddr);
      pCStack_4[unaff_retaddr + -1] = '\0';
    }
    return uVar7;
  }
  uVar8 = *(undefined4 *)(param_1 + 2);
  if (uVar1 == 1) {
    puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x103e);
  }
  else {
    if (uVar1 != 2) {
      uVar2 = _SfGetString2_8(DAT_0120e5c8,0x1040);
      SfPrintF(local_b8,uVar2,uVar1);
      goto LAB_0102d26d;
    }
    puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x103f);
  }
  _mbscpy(local_b8,puVar3);
LAB_0102d26d:
  if (param_2 != 0) {
    if (*param_1 == 3) {
      uVar2 = 0x1042;
    }
    else {
      uVar2 = 0x1041;
    }
    puVar3 = local_b8;
    uVar2 = _SfGetString2_8(DAT_0120e5c8,uVar2);
    SfPrintF(param_2,uVar2,uVar8,uVar5,puVar3);
  }
  return 0;
}


