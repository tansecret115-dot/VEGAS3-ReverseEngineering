/* Module: mp3plug.dll
   Function: FUN_5f6fb1a0
   Address: 5f6fb1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6fb1a0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  
  param_1[4] = param_1[7];
  param_1[6] = param_1[9];
  param_1[5] = param_1[8];
  iVar13 = 0;
  iVar16 = 0xc0;
  piVar15 = param_1;
  do {
    fVar2 = _DAT_5f746484;
    iVar14 = iVar13;
    fVar1 = _DAT_5f75e54c;
    if (iVar13 < iVar16) {
      while( true ) {
        fVar3 = (*(float *)(param_2 + iVar14 * 8) - (float)param_1[10]) * fVar2 -
                (float)param_1[0xb] * _DAT_5f746480;
        iVar4 = *(int *)(param_2 + iVar14 * 8);
        param_1[0xb] = (int)fVar3;
        param_1[10] = iVar4;
        if (iVar13 + 0xc0 <= iVar14 + 1) break;
        iVar14 = iVar14 + 1;
        fVar1 = fVar3 * fVar3 + fVar1;
      }
      fVar1 = fVar3 * fVar3 + fVar1;
    }
    piVar15[7] = (int)fVar1;
    piVar15 = piVar15 + 1;
    iVar16 = iVar16 + 0xc0;
    iVar13 = iVar13 + 0xc0;
  } while ((int)piVar15 < (int)(param_1 + 3));
  param_1[2] = 0;
  bVar12 = false;
  fVar1 = (float)param_1[9];
  bVar5 = false;
  bVar6 = (float)param_1[8] < _DAT_5f75e540 * (float)param_1[9];
  if (bVar6) {
    fVar1 = (float)param_1[9];
  }
  bVar7 = (float)param_1[7] < _DAT_5f75e544 * fVar1;
  if (bVar7) {
    fVar1 = (float)param_1[9];
  }
  fVar2 = (float)param_1[8];
  bVar8 = (float)param_1[7] < _DAT_5f75e540 * fVar2;
  if (bVar8) {
    fVar2 = (float)param_1[8];
  }
  bVar9 = (float)param_1[6] < _DAT_5f75e544 * fVar2;
  if (bVar9) {
    fVar2 = (float)param_1[8];
  }
  fVar3 = (float)param_1[7];
  bVar10 = (float)param_1[6] < _DAT_5f75e540 * fVar3;
  if (bVar10) {
    fVar3 = (float)param_1[7];
  }
  bVar11 = (float)param_1[5] < _DAT_5f75e544 * fVar3;
  if (bVar11) {
    fVar3 = (float)param_1[7];
  }
  if (((bVar6) && (bVar7)) && (_DAT_5f75e548 < fVar1)) {
    bVar5 = true;
  }
  bVar6 = false;
  if (((bVar8) && (bVar6 = false, bVar9)) && (_DAT_5f75e548 < fVar2)) {
    bVar6 = true;
  }
  if (((bVar10) && (bVar11)) && (_DAT_5f75e548 < fVar3)) {
    bVar12 = true;
  }
  if (((bVar5) || (bVar6)) || (bVar12)) {
    param_1[2] = 1;
  }
  if ((param_1[2] == 0) && (param_1[3] != 0)) {
    fVar1 = (float)param_1[7];
    if ((_DAT_5f75e548 < fVar1) && ((float)param_1[8] < fVar1 * _DAT_5f75e540)) {
      param_1[2] = 1;
    }
    if ((_DAT_5f75e548 < (float)param_1[6]) && (fVar1 < (float)param_1[6] * _DAT_5f75e540)) {
      param_1[2] = 1;
    }
    param_1[3] = 0;
  }
  else {
    param_1[3] = param_1[2];
  }
  *param_1 = param_1[1];
  if (param_1[2] == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 2;
  }
  iVar13 = param_1[1];
  if (iVar13 == 2) {
    iVar13 = *param_1;
    if (iVar13 == 0) {
      *param_1 = 1;
      iVar13 = 1;
    }
    if (iVar13 == 3) {
      *param_1 = 2;
      iVar13 = param_1[1];
    }
    else {
      iVar13 = param_1[1];
    }
  }
  if ((iVar13 == 0) && (*param_1 == 2)) {
    param_1[1] = 3;
  }
  return 1;
}


