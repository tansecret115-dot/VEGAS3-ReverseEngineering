/* Module: mp3plug.dll
   Function: FUN_5f6d61f0
   Address: 5f6d61f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d61f0(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_1 | (uint)param_2) & 0xf) != 0)) {
    bVar12 = (param_3 & 1) != 0;
    if (bVar12) {
      *param_2 = ABS(*param_1);
    }
    uVar11 = (uint)bVar12;
    if ((int)uVar11 < (int)param_3) {
      while( true ) {
        fVar3 = param_1[uVar11 + 1];
        if ((int)param_3 <= (int)(uVar11 + 2)) break;
        param_2[uVar11] = ABS(param_1[uVar11]);
        param_2[uVar11 + 1] = ABS(fVar3);
        uVar11 = uVar11 + 2;
      }
      param_2[uVar11] = ABS(param_1[uVar11]);
      param_2[uVar11 + 1] = ABS(fVar3);
    }
  }
  else {
    iVar10 = 0;
    if (0 < (int)(param_3 & 0xfffffff8)) {
      do {
        pfVar1 = param_1 + iVar10;
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = param_1 + iVar10 + 4;
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar2 = param_2 + iVar10;
        *pfVar2 = ABS(*pfVar1);
        pfVar2[1] = ABS(fVar3);
        pfVar2[2] = ABS(fVar4);
        pfVar2[3] = ABS(fVar5);
        pfVar1 = param_2 + iVar10 + 4;
        *pfVar1 = ABS(fVar6);
        pfVar1[1] = ABS(fVar7);
        pfVar1[2] = ABS(fVar8);
        pfVar1[3] = ABS(fVar9);
        iVar10 = iVar10 + 8;
      } while (iVar10 < (int)(param_3 & 0xfffffff8));
    }
    if (iVar10 + 4 <= (int)param_3) {
      pfVar1 = param_1 + iVar10;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = param_2 + iVar10;
      *pfVar2 = ABS(*pfVar1);
      pfVar2[1] = ABS(fVar3);
      pfVar2[2] = ABS(fVar4);
      pfVar2[3] = ABS(fVar5);
      iVar10 = iVar10 + 4;
    }
    for (; iVar10 < (int)param_3; iVar10 = iVar10 + 1) {
      param_2[iVar10] = ABS(param_1[iVar10]);
    }
  }
  return;
}


