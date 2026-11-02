/* Module: sfxpfx1.dll
   Function: FUN_5c974080
   Address: 5c974080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c974080(LPCSTR param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LPCSTR lpsz;
  int iVar5;
  LPCSTR lpsz_00;
  undefined4 uVar6;
  int iVar7;
  char unaff_DI;
  undefined4 *puVar8;
  
  lstrlenA(param_1);
  lpsz_00 = &stack0xfffffff0;
  FUN_5c9885f0();
  uVar2 = lstrlenA(param_1);
  puVar8 = (undefined4 *)&stack0xfffffff0;
  for (uVar2 = uVar2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar6 = *param_2;
  puVar8 = param_2;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *param_2 = uVar6;
  iVar7 = lstrlenA(param_1);
  lstrcpynA(&stack0xfffffff0,param_1,iVar7 + 1);
  (&stack0xfffffff0)[iVar7] = 0;
  iVar7 = lstrlenA(param_1);
  bVar1 = false;
  iVar7 = iVar7 + 1;
  while (iVar5 = iVar7, lpsz = &stack0xfffffff0, iVar5 != 0) {
    iVar7 = iVar5 + -1;
    iVar3 = lstrlenA(&stack0xfffffff0);
    iVar4 = _ismbcdigit((int)(char)(&stack0xffffffef)[iVar5]);
    lpsz = &stack0xfffffff0;
    if (iVar4 != 0) break;
    iVar4 = _ismbcdigit((int)(char)(&stack0xffffffef)[iVar5]);
    if (((iVar4 == 0) && ((&stack0xffffffef)[iVar5] != ' ')) && ((&stack0xffffffef)[iVar5] != '\0'))
    {
      memmove(&stack0xfffffff2 + iVar5,&stack0xfffffff0 + iVar5,(iVar3 + 1) - iVar7);
      (&stack0xffffffef)[iVar5] = 0x20;
      (&stack0xfffffff0)[iVar5] = 0x30;
      (&stack0xfffffff1)[iVar5] = 0x20;
      bVar1 = true;
    }
    else if (((&stack0xffffffef)[iVar5] == ' ') && (!bVar1)) {
      (&stack0xffffffef)[iVar5] = 0;
    }
  }
  while (unaff_DI != '\0') {
    iVar7 = _ismbcdigit((int)*lpsz);
    if (iVar7 == 0) {
      *lpsz = ' ';
    }
    lpsz = CharNextA(lpsz);
    unaff_DI = *lpsz;
  }
  iVar5 = lstrlenA(&stack0xfffffff0);
  param_1 = (LPCSTR)0x0;
  iVar7 = iVar5 + 1;
  while (iVar7 != 0) {
    iVar4 = iVar7 + -1;
    iVar3 = _ismbcdigit((int)(char)(&stack0xffffffef)[iVar7]);
    if (iVar3 == 0) {
      param_1 = (LPCSTR)0x0;
      iVar7 = iVar4;
    }
    else if (param_1 == (LPCSTR)0x2) {
      param_1 = (LPCSTR)0x1;
      memmove(&stack0xfffffff1 + iVar7,&stack0xfffffff0 + iVar7,((iVar5 + 1) - iVar4) + 1);
      (&stack0xfffffff0)[iVar7] = 0x20;
      iVar7 = iVar4;
    }
    else {
      param_1 = param_1 + 1;
      iVar7 = iVar4;
    }
  }
  param_1 = (LPCSTR)0x0;
  while( true ) {
    iVar7 = _ismbcspace((int)*lpsz_00);
    while (iVar7 != 0) {
      lpsz_00 = CharNextA(lpsz_00);
      iVar7 = _ismbcspace((int)*lpsz_00);
    }
    if (*lpsz_00 == '\0') break;
    uVar6 = FUN_5c969f10(lpsz_00,0);
    param_2[1] = param_2[2];
    param_2[2] = param_2[3];
    param_2[3] = param_2[4];
    param_2[4] = uVar6;
    iVar7 = _ismbcdigit((int)*lpsz_00);
    while (iVar7 != 0) {
      lpsz_00 = CharNextA(lpsz_00);
      iVar7 = _ismbcdigit((int)*lpsz_00);
    }
    if ((*lpsz_00 == '\0') || (param_1 = param_1 + 1, 3 < (int)param_1)) break;
  }
  switch(*param_2) {
  case 1:
  case 2:
  case 5:
    uVar2 = 0x1e;
    break;
  case 3:
    uVar2 = 0x19;
    break;
  case 4:
    uVar2 = 0x18;
    break;
  default:
    goto switchD_5c9742af_default;
  }
  param_2[3] = param_2[3] + (uint)param_2[4] / uVar2;
  param_2[4] = (uint)param_2[4] % uVar2;
switchD_5c9742af_default:
  param_2[2] = param_2[2] + (uint)param_2[3] / 0x3c;
  param_2[3] = (uint)param_2[3] % 0x3c;
  param_2[1] = param_2[1] + (uint)param_2[2] / 0x3c;
  param_2[2] = (uint)param_2[2] % 0x3c;
  param_2[1] = (uint)param_2[1] % 0x18;
  return (int)*lpsz_00;
}


