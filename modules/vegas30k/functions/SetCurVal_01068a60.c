/* Module: vegas30k.dll
   Function: SetCurVal
   Address: 01068a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CScanlineIntersect::SetCurVal(struct tSCANEDGE *,struct tSCANEDGE *,enum
   SF3DRENDERSTATE,float,float) */

void __thiscall
CScanlineIntersect::SetCurVal
          (CScanlineIntersect *this,tSCANEDGE *param_1,tSCANEDGE *param_2,SF3DRENDERSTATE param_3,
          float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
                    /* 0x68a60  271
                       ?SetCurVal@CScanlineIntersect@@QAEXPAUtSCANEDGE@@0W4SF3DRENDERSTATE@@MM@Z */
  fVar1 = param_4 - *(float *)(param_1 + 4);
  fVar2 = param_4 - *(float *)(param_2 + 4);
  fVar3 = param_5 - *(float *)(param_1 + 4);
  iVar7 = ftol();
  *(int *)this = iVar7;
  uVar8 = ftol();
  *(undefined4 *)(this + 4) = uVar8;
  uVar9 = ftol();
  *(undefined4 *)(this + 0x10) = uVar9;
  *(undefined4 *)(this + 0x14) = uVar8;
  iVar10 = ftol();
  *(int *)(this + 8) = iVar10;
  uVar8 = ftol();
  *(undefined4 *)(this + 0xc) = uVar8;
  uVar9 = ftol();
  *(undefined4 *)(this + 0x18) = uVar9;
  *(undefined4 *)(this + 0x1c) = uVar8;
  if (iVar10 <= iVar7) {
    iVar7 = iVar10;
  }
  *(int *)(this + 0x50) = iVar7;
  *(undefined4 *)(this + 0x5c) = 0;
  iVar7 = ftol();
  iVar10 = ftol();
  fVar6 = (float)(((iVar7 - iVar10) - *(int *)(param_1 + 0x44)) + *(int *)(param_2 + 0x44)) *
          (float)_DAT_011dba40;
  if (param_3 == 2) {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar10 = ftol();
    *(int *)(this + 0x28) = iVar10 + iVar7;
    iVar11 = ftol();
    iVar10 = *(int *)(param_1 + 0x5c);
    *(int *)(this + 0x2c) = iVar11 + *(int *)(param_2 + 0x54);
    iVar11 = ftol();
    *(int *)(this + 0x30) = iVar11 + iVar10;
    iVar11 = ftol();
    *(int *)(this + 0x34) = iVar11 + *(int *)(param_2 + 0x5c);
    iVar11 = ftol();
    *(int *)(this + 0x40) = iVar11 + iVar7;
    iVar7 = ftol();
    *(int *)(this + 0x44) = iVar7 + iVar10;
    return;
  }
  if (param_3 == 3) {
    fVar4 = fVar1 * *(float *)(param_1 + 100) + *(float *)(param_1 + 0x60);
    *(float *)(this + 0x38) = fVar4;
    fVar5 = fVar1 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x54);
    *(float *)(this + 0x28) = fVar5;
    fVar1 = fVar1 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c);
    *(float *)(this + 0x30) = fVar1;
    *(float *)(this + 0x4c) = fVar3 * *(float *)(param_1 + 100) + *(float *)(param_1 + 0x60);
    *(float *)(this + 0x40) = fVar3 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x54);
    *(float *)(this + 0x44) = fVar3 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c);
    if (ABS(fVar6) < (float)_DAT_011dba50) {
      *(undefined4 *)(this + 0x3c) = 0;
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(this + 0x34) = 0;
      return;
    }
    *(float *)(this + 0x3c) =
         ((fVar2 * *(float *)(param_2 + 100) + *(float *)(param_2 + 0x60)) - fVar4) / fVar6;
    *(float *)(this + 0x2c) =
         ((fVar2 * *(float *)(param_2 + 0x50) + *(float *)(param_2 + 0x54)) - fVar5) / fVar6;
    *(float *)(this + 0x34) =
         ((fVar2 * *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x5c)) - fVar1) / fVar6;
  }
  return;
}


