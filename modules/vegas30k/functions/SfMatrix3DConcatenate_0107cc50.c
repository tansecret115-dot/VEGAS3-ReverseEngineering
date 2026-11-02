/* Module: vegas30k.dll
   Function: SfMatrix3DConcatenate
   Address: 0107cc50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMatrix3DConcatenate(struct tSFMATRIX3D *,struct tSFMATRIX3D *) */

void SfMatrix3DConcatenate(tSFMATRIX3D *param_1,tSFMATRIX3D *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  tSFMATRIX3D *ptVar4;
  int iVar5;
  float *pfVar6;
  tSFMATRIX3D *ptVar7;
  int iVar8;
  float *pfVar9;
  float local_40 [16];
  
  iVar3 = (int)param_2 - (int)param_1;
  pfVar9 = local_40;
                    /* 0x7cc50  415  ?SfMatrix3DConcatenate@@YGXPAUtSFMATRIX3D@@0@Z */
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = *(float *)param_2;
    param_2 = param_2 + 4;
    pfVar9 = pfVar9 + 1;
  }
  param_2 = (tSFMATRIX3D *)&DAT_00000004;
  do {
    pfVar9 = local_40;
    ptVar4 = param_1 + iVar3;
    iVar5 = 4;
    do {
      *(float *)ptVar4 = 0.0;
      iVar8 = 4;
      pfVar6 = pfVar9;
      ptVar7 = param_1;
      do {
        fVar1 = *(float *)ptVar7;
        fVar2 = *pfVar6;
        pfVar6 = pfVar6 + 4;
        ptVar7 = ptVar7 + 4;
        iVar8 = iVar8 + -1;
        *(float *)ptVar4 = fVar1 * fVar2 + *(float *)ptVar4;
      } while (iVar8 != 0);
      ptVar4 = ptVar4 + 4;
      pfVar9 = pfVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + -1;
  } while (param_2 != (tSFMATRIX3D *)0x0);
  return;
}


