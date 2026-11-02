/* Module: vegas30k.dll
   Function: _SfViewSetFieldText@12
   Address: 01036c90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfViewSetFieldText_12(int param_1,int param_2,LPCSTR param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  double *lpString2;
  uint uVar10;
  byte bVar11;
  float10 fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
                    /* 0x36c90  1288  _SfViewSetFieldText@12 */
  uVar6 = *(uint *)(param_2 + 8);
  lpString2 = (double *)(*(int *)(param_2 + 4) + param_1);
  uVar10 = 0;
  if (0x10000 < uVar6) {
    return 0;
  }
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 1:
    if (uVar6 != 0) {
      FUN_01002100();
      FUN_01002100();
      lstrcpynA(&stack0xfffffff0,(LPCSTR)lpString2,uVar6 + 1);
      (&stack0xfffffff0)[uVar6] = 0;
      (&stack0xfffffff0)[uVar6] = 0;
      lstrcpynA(&stack0xfffffff0,param_3,uVar6 + 1);
      (&stack0xfffffff0)[uVar6] = 0;
      (&stack0xfffffff0)[uVar6] = 0;
      iVar8 = lstrcmpA(&stack0xfffffff0,&stack0xfffffff0);
      uVar10 = 0;
      if ((iVar8 != 0) != 0) {
        lstrcpynA((LPSTR)lpString2,param_3,uVar6);
        *(undefined1 *)((uVar6 - 1) + (int)lpString2) = 0;
        return (uint)(iVar8 != 0);
      }
    }
    break;
  case 2:
  case 9:
    dVar13 = (double)_SfTextToLongLongToken_8(param_3,0);
    fVar5 = SUB84(dVar13,0);
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 == 1) {
      cVar1 = *(char *)lpString2;
      *(char *)lpString2 = SUB81(dVar13,0);
      return (uint)(cVar1 != SUB81(dVar13,0));
    }
    if (iVar8 == 2) {
      sVar3 = *(short *)lpString2;
      *(short *)lpString2 = SUB82(dVar13,0);
      return (uint)(sVar3 != SUB82(dVar13,0));
    }
    goto joined_r0x01036f8f;
  case 3:
  case 10:
    dVar13 = (double)_SfTextToDWordLongToken_8(param_3,0);
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 == 1) {
      cVar1 = *(char *)lpString2;
      *(char *)lpString2 = SUB81(dVar13,0);
      return (uint)(cVar1 != SUB81(dVar13,0));
    }
    if (iVar8 == 2) {
      sVar3 = *(short *)lpString2;
      *(short *)lpString2 = SUB82(dVar13,0);
      return (uint)(sVar3 != SUB82(dVar13,0));
    }
    goto LAB_01036f8c;
  case 4:
    fVar5 = (float)_SfHexToDWordToken_8(param_3,0);
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 == 1) {
      cVar1 = *(char *)lpString2;
      *(char *)lpString2 = SUB41(fVar5,0);
      return (uint)(cVar1 != SUB41(fVar5,0));
    }
    if (iVar8 == 2) {
      sVar3 = *(short *)lpString2;
      *(short *)lpString2 = SUB42(fVar5,0);
      return (uint)(sVar3 != SUB42(fVar5,0));
    }
    if (iVar8 == 4) {
      fVar4 = *(float *)lpString2;
      *(float *)lpString2 = fVar5;
      return (uint)(fVar4 != fVar5);
    }
    break;
  case 5:
  case 0xc:
    iVar8 = _ismbcspace((int)*param_3);
    while (iVar8 != 0) {
      param_3 = CharNextA(param_3);
      iVar8 = _ismbcspace((int)*param_3);
    }
    cVar1 = *param_3;
    if ((((cVar1 == 'T') || (cVar1 == 't')) || (cVar1 == 'y')) || ((cVar1 == 'Y' || (cVar1 == '1')))
       ) {
      uVar6 = 1;
    }
    else {
      if (((cVar1 != 'F') && (cVar1 != 'f')) &&
         ((cVar1 != 'n' && ((cVar1 != 'N' && (cVar1 != '0')))))) {
        return 0;
      }
      uVar6 = 0;
    }
    if (*(char *)(param_2 + 0xc) == '\f') {
      uVar6 = (uint)(uVar6 == 0);
    }
    dVar13 = (double)(ulonglong)uVar6;
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 == 1) {
      cVar1 = *(char *)lpString2;
      *(char *)lpString2 = (char)uVar6;
      return (uint)(cVar1 != (char)uVar6);
    }
    if (iVar8 == 2) {
      sVar3 = *(short *)lpString2;
      *(short *)lpString2 = (short)uVar6;
      return (uint)(sVar3 != (short)uVar6);
    }
LAB_01036f8c:
    fVar5 = SUB84(dVar13,0);
joined_r0x01036f8f:
    if (iVar8 == 4) {
      fVar4 = *(float *)lpString2;
      *(float *)lpString2 = fVar5;
      return (uint)(fVar4 != fVar5);
    }
    if (iVar8 == 8) {
      if ((*(float *)lpString2 == SUB84(dVar13,0)) &&
         (*(float *)((int)lpString2 + 4) == (float)((ulonglong)dVar13 >> 0x20))) {
        *lpString2 = dVar13;
        return 0;
      }
      *lpString2 = dVar13;
      return 1;
    }
    break;
  case 6:
  case 7:
    fVar12 = (float10)_SfTextToDoubleToken_8(param_3,0);
    if (*(char *)(param_2 + 0xc) != '\x06') {
      if (fVar12 == (float10)*lpString2) {
        *lpString2 = (double)fVar12;
        return 0;
      }
      *lpString2 = (double)fVar12;
      return 1;
    }
    if (fVar12 == (float10)*(float *)lpString2) {
      *(float *)lpString2 = (float)fVar12;
      return 0;
    }
    *(float *)lpString2 = (float)fVar12;
    return 1;
  case 8:
  case 0xd:
    uVar7 = uVar6 >> 3;
    iVar8 = _ismbcspace((int)*param_3);
    while (iVar8 != 0) {
      param_3 = CharNextA(param_3);
      iVar8 = _ismbcspace((int)*param_3);
    }
    cVar1 = *param_3;
    bVar9 = (byte)(1 << ((byte)uVar6 & 7));
    bVar11 = bVar9;
    if ((((cVar1 != 'T') && (cVar1 != 't')) && (cVar1 != 'y')) && ((cVar1 != 'Y' && (cVar1 != '1')))
       ) {
      if (((cVar1 != 'F') && ((cVar1 != 'f' && (cVar1 != 'n')))) &&
         ((cVar1 != 'N' && (cVar1 != '0')))) {
        return 0;
      }
      bVar11 = 0;
    }
    if (*(char *)(param_2 + 0xc) == '\r') {
      bVar11 = bVar11 == 0;
    }
    bVar2 = *(byte *)(uVar7 + (int)lpString2);
    if (bVar11 != (bVar2 & bVar9)) {
      if (bVar11 == 0) {
        *(byte *)(uVar7 + (int)lpString2) = ~bVar9 & bVar2;
        return 1;
      }
      *(byte *)(uVar7 + (int)lpString2) = bVar2 | bVar9;
      return 1;
    }
    break;
  case 0xff:
    if (*(int *)(param_2 + 0x10) != 0) {
      uVar15 = 0xc;
      uVar14 = 0;
      iVar8 = lstrlenA(param_3);
      uVar10 = (**(code **)(param_2 + 0x10))
                         (*(undefined4 *)(param_2 + 0x14),param_3,iVar8,lpString2,uVar14,uVar15);
    }
  }
  return uVar10;
}


