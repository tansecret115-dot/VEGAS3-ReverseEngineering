/* Module: vegas30k.dll
   Function: FUN_01012950
   Address: 01012950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01012950(undefined4 param_1,int param_2,char *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char *_Dst;
  char cVar11;
  uint uVar12;
  
  _Dst = param_3;
  iVar3 = *(int *)(param_2 + 0x14);
  bVar6 = false;
  piVar4 = *(int **)(iVar3 + 0x350);
  bVar7 = false;
  bVar8 = false;
  bVar9 = false;
  bVar10 = false;
  if (*(int *)(param_3 + 8) != -0x45ff0000) goto LAB_01012bc9;
  param_3 = *(char **)(param_3 + 0x14);
  FUN_010861b0(&param_3,1);
  if (param_3 == (char *)0x1bb) {
    if ((_Dst[0x1d] & 0xfcU) == 0) {
LAB_010129ef:
      bVar6 = true;
      bVar9 = true;
    }
    else {
      bVar7 = true;
    }
  }
  else if (((byte)param_3 & 0xf0) == 0xc0) {
    bVar7 = true;
  }
  else {
    uVar12 = (uint)param_3 & 0xff;
    if (uVar12 == 0xe0) {
      bVar6 = true;
      bVar8 = true;
    }
    else {
      if (uVar12 == 0xe1) goto LAB_010129ef;
      if (uVar12 == 0xe2) {
        bVar6 = true;
        bVar10 = true;
      }
      else {
        if (param_3 != (char *)0x1be) goto LAB_01012bc9;
        bVar6 = false;
        bVar7 = false;
      }
    }
  }
  memmove(_Dst,(void *)(param_2 + 0xc),8);
  if (param_4 != 0) {
    _Dst[2] = _Dst[2] | 1;
    _Dst[6] = _Dst[6] | 1;
  }
  if (param_5 != 0) {
    _Dst[2] = _Dst[2] | 0x80;
    _Dst[6] = _Dst[6] | 0x80;
  }
  iVar5 = *piVar4;
  if (iVar5 == 0xb) {
    cVar11 = *(char *)(iVar3 + 0x220);
    _Dst[1] = '\x01';
    bVar1 = _Dst[6];
    cVar11 = cVar11 + '\x01';
    _Dst[4] = cVar11;
    *_Dst = cVar11;
    bVar2 = _Dst[2];
    _Dst[2] = bVar2 | 0x60;
    _Dst[6] = bVar1 | 0x60;
    if (bVar6) {
      _Dst[2] = bVar2 | 0x62;
      _Dst[6] = bVar1 | 0x62;
      _Dst[7] = '\x0f';
      _Dst[3] = '\x0f';
      return (undefined1 *)0x0;
    }
    if (!bVar7) {
      _Dst[7] = '\0';
      _Dst[3] = '\0';
      return (undefined1 *)0x0;
    }
    _Dst[2] = bVar2 | 100;
    _Dst[6] = bVar1 | 100;
    _Dst[7] = '\x7f';
    _Dst[3] = '\x7f';
    return (undefined1 *)0x0;
  }
  if (iVar5 != 0xc) {
    return (undefined1 *)0x0;
  }
  bVar1 = _Dst[2];
  bVar2 = _Dst[6];
  _Dst[4] = '\x01';
  *_Dst = '\x01';
  _Dst[2] = bVar1 | 0x60;
  _Dst[6] = bVar2 | 0x60;
  if (!bVar6) {
    if (!bVar7) {
      _Dst[1] = '\x1f';
      return (undefined1 *)0x0;
    }
    _Dst[2] = bVar1 | 100;
    _Dst[6] = bVar2 | 100;
    _Dst[1] = '\x01';
    return (undefined1 *)0x0;
  }
  _Dst[2] = bVar1 | 0x62;
  _Dst[6] = bVar2 | 0x62;
  if (bVar8) {
    _Dst[1] = '\x01';
    _Dst[7] = '\x0f';
    _Dst[3] = '\x0f';
    return (undefined1 *)0x0;
  }
  if (bVar9) {
    _Dst[1] = '\x02';
    _Dst[7] = '\x1f';
    _Dst[3] = '\x1f';
    return (undefined1 *)0x0;
  }
  if (bVar10) {
    _Dst[1] = '\x03';
    _Dst[7] = '?';
    _Dst[3] = '?';
    return (undefined1 *)0x0;
  }
LAB_01012bc9:
  return &DAT_80070057;
}


