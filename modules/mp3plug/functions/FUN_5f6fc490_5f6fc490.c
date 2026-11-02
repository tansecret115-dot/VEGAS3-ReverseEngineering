/* Module: mp3plug.dll
   Function: FUN_5f6fc490
   Address: 5f6fc490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6fc490(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *in_EAX;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  
  iVar11 = 0;
  iVar12 = 0;
  while( true ) {
    fVar1 = (float)(&DAT_5f746db8)[iVar11 * 2];
    fVar2 = *(float *)((int)in_EAX + iVar12 + 0x44);
    fVar3 = *(float *)((int)&DAT_5f746dfc + iVar12);
    fVar4 = in_EAX[iVar11 * 2];
    fVar5 = in_EAX[iVar11 * 2 + 1];
    fVar6 = in_EAX[iVar11 * 2 + 1];
    fVar7 = *(float *)((int)in_EAX + iVar12 + 0x40);
    fVar8 = *(float *)((int)in_EAX + iVar12 + 0x40);
    in_EAX[iVar11 * 2 + 1] =
         *(float *)((int)&DAT_5f746dfc + iVar12) * *(float *)((int)in_EAX + iVar12 + 0x44) -
         (float)(&DAT_5f746db8)[iVar11 * 2] * in_EAX[iVar11 * 2];
    in_EAX[iVar11 * 2] = fVar3 * fVar4 + fVar1 * fVar2;
    fVar1 = *(float *)((int)&DAT_5f746df8 + iVar12);
    fVar2 = *(float *)((int)in_EAX + iVar12 + 0x3c);
    fVar3 = (float)(&DAT_5f746dbc)[iVar11 * 2];
    *(float *)((int)in_EAX + iVar12 + 0x44) =
         fVar5 * (float)(&DAT_5f746dbc)[iVar11 * 2] -
         fVar7 * *(float *)((int)&DAT_5f746df8 + iVar12);
    fVar4 = *(float *)((int)in_EAX + iVar12 + 0x38);
    *(float *)((int)in_EAX + iVar12 + 0x40) = fVar8 * fVar3 + fVar6 * fVar1;
    fVar1 = *(float *)((int)&DAT_5f746df4 + iVar12);
    fVar3 = in_EAX[iVar11 * 2 + 3];
    fVar5 = in_EAX[iVar11 * 2 + 3];
    fVar6 = (float)(&DAT_5f746dc0)[iVar11 * 2];
    fVar7 = *(float *)((int)in_EAX + iVar12 + 0x38);
    in_EAX[iVar11 * 2 + 3] =
         *(float *)((int)in_EAX + iVar12 + 0x3c) * *(float *)((int)&DAT_5f746df4 + iVar12) -
         (float)(&DAT_5f746dc0)[iVar11 * 2] * in_EAX[iVar11 * 2 + 2];
    in_EAX[iVar11 * 2 + 2] = fVar2 * fVar6 + fVar1 * in_EAX[iVar11 * 2 + 2];
    fVar1 = fVar4 * (float)(&DAT_5f746dc4)[iVar11 * 2] +
            fVar3 * *(float *)((int)&DAT_5f746df0 + iVar12);
    fVar2 = fVar5 * (float)(&DAT_5f746dc4)[iVar11 * 2] -
            fVar7 * *(float *)((int)&DAT_5f746df0 + iVar12);
    iVar11 = iVar11 + 2;
    if (3 < iVar11) break;
    *(float *)((int)in_EAX + iVar12 + 0x38) = fVar1;
    *(float *)((int)in_EAX + iVar12 + 0x3c) = fVar2;
    iVar12 = iVar12 + -0x10;
  }
  *(float *)((int)in_EAX + iVar12 + 0x38) = fVar1;
  *(float *)((int)in_EAX + iVar12 + 0x3c) = fVar2;
  fVar1 = in_EAX[iVar11 * 2];
  fVar2 = (float)(&DAT_5f746db8)[iVar11 * 2];
  fVar3 = (float)(&DAT_5f746dbc)[iVar11 * 2];
  fVar4 = in_EAX[iVar11 * 2 + 1];
  in_EAX[iVar11 * 2] =
       (float)(&DAT_5f746dbc)[iVar11 * 2] * in_EAX[iVar11 * 2] +
       (float)(&DAT_5f746db8)[iVar11 * 2] * in_EAX[iVar11 * 2 + 1];
  in_EAX[iVar11 * 2 + 1] = fVar3 * fVar4 - fVar1 * fVar2;
  FUN_5f70cf80(in_EAX);
  pfVar15 = (float *)&DAT_5f746d90;
  pfVar13 = (float *)&DAT_5f746db4;
  iVar12 = 0;
  iVar11 = 0;
  fVar1 = _DAT_5f746d90;
  fVar2 = _DAT_5f746db4;
  do {
    fVar3 = *(float *)((int)in_EAX + iVar11 + 0x40);
    fVar4 = *(float *)((int)in_EAX + iVar11 + 0x40);
    fVar5 = in_EAX[iVar12 * 2];
    fVar6 = *(float *)((int)in_EAX + iVar11 + 0x44);
    fVar7 = *(float *)((int)in_EAX + iVar11 + 0x44);
    in_EAX[iVar12 * 2] = in_EAX[iVar12 * 2 + 1] * fVar1 + in_EAX[iVar12 * 2] * fVar2;
    pfVar14 = pfVar13 + -1;
    pfVar16 = pfVar15 + 1;
    *(float *)((int)in_EAX + iVar11 + 0x44) = fVar1 * fVar5 - fVar2 * in_EAX[iVar12 * 2 + 1];
    fVar1 = *pfVar14;
    fVar2 = *pfVar16;
    fVar5 = *pfVar14;
    fVar8 = *pfVar16;
    fVar9 = *pfVar16;
    pfVar15 = pfVar15 + 2;
    fVar10 = *pfVar14;
    *(float *)((int)in_EAX + iVar11 + 0x40) = fVar6 * *pfVar14 + fVar3 * *pfVar16;
    in_EAX[iVar12 * 2 + 1] = fVar4 * fVar10 - fVar7 * fVar9;
    fVar3 = *(float *)((int)in_EAX + iVar11 + 0x3c);
    fVar4 = *(float *)((int)in_EAX + iVar11 + 0x3c);
    fVar6 = *(float *)((int)in_EAX + iVar11 + 0x38);
    fVar7 = *(float *)((int)in_EAX + iVar11 + 0x38);
    fVar9 = in_EAX[iVar12 * 2 + 2];
    in_EAX[iVar12 * 2 + 2] = fVar1 * in_EAX[iVar12 * 2 + 2] + fVar2 * in_EAX[iVar12 * 2 + 3];
    pfVar13 = pfVar13 + -2;
    *(float *)((int)in_EAX + iVar11 + 0x3c) = fVar8 * fVar9 - fVar5 * in_EAX[iVar12 * 2 + 3];
    fVar5 = *pfVar15;
    fVar1 = *pfVar15;
    fVar2 = *pfVar13;
    fVar8 = *pfVar13;
    *(float *)((int)in_EAX + iVar11 + 0x38) = fVar6 * *pfVar15 + fVar3 * *pfVar13;
    in_EAX[iVar12 * 2 + 3] = fVar7 * fVar8 - fVar4 * fVar5;
    iVar12 = iVar12 + 2;
    iVar11 = iVar11 + -0x10;
  } while (iVar12 < 4);
  fVar3 = in_EAX[iVar12 * 2];
  in_EAX[iVar12 * 2] = in_EAX[iVar12 * 2 + 1] * fVar1 + in_EAX[iVar12 * 2] * fVar2;
  in_EAX[iVar12 * 2 + 1] = fVar1 * fVar3 - fVar2 * in_EAX[iVar12 * 2 + 1];
  return;
}


