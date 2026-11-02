/* Module: sfppack1.dll
   Function: FUN_5cdd79e0
   Address: 5cdd79e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd79e0(void *this,short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  short sVar7;
  int iVar8;
  code *pcVar9;
  float10 fVar10;
  double local_38;
  double local_30;
  double local_28;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pcVar9 = _controlfp_exref;
  local_20 = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (param_3 != 0) {
    local_1c = param_2 * 2;
    do {
      dVar3 = (double)(int)*param_1 * _DAT_5ce13270 * *(double *)((int)this + 0x78);
      dVar4 = (double)(int)param_1[1] * _DAT_5ce13270 * *(double *)((int)this + 0x78);
      fVar10 = (float10)fsin((float10)*(int *)((int)this + 0x1f0) *
                             (float10)*(double *)((int)this + 0x248));
      fVar10 = fVar10 * (float10)*(double *)((int)this + 0x1a0) +
               (float10)*(double *)((int)this + 0x200);
      local_38 = (double)fVar10;
      if (fVar10 < (float10)_DAT_5ce14f18) {
        if (fVar10 < (float10)_DAT_5ce12bf0) {
          local_38 = (double)(fVar10 + (float10)_DAT_5ce14f18);
        }
      }
      else {
        local_38 = (double)(fVar10 - (float10)_DAT_5ce14f18);
      }
      iVar1 = (int)ROUND(local_38);
      iVar8 = iVar1 + 1;
      if (iVar8 == 0x1964) {
        iVar8 = 0;
      }
      iVar2 = *(int *)((int)this + 0x1bc);
      dVar5 = *(double *)((int)this + 0x1d8) * *(double *)((int)this + 0x188) +
              ((local_38 - (double)iVar1) *
               (*(double *)(iVar2 + iVar8 * 8) - *(double *)(iVar2 + iVar1 * 8)) +
              *(double *)(iVar2 + iVar1 * 8)) * *(double *)((int)this + 400);
      if (ABS(dVar5) < _DAT_5ce14f10) {
        dVar5 = _DAT_5ce12bf0;
      }
      *(double *)((int)this + 0x1d8) = dVar5;
      dVar6 = *(double *)((int)this + 0x200) - _DAT_5ce12e70;
      *(double *)((int)this + 0x200) = dVar6;
      if (dVar6 < _DAT_5ce12bf0) {
        *(undefined4 *)((int)this + 0x200) = 0;
        *(undefined4 *)((int)this + 0x204) = 0x40b96300;
      }
      iVar8 = *(int *)((int)this + 0x1f0) + 1;
      *(int *)((int)this + 0x1f0) = iVar8;
      if (*(double *)((int)this + 0x230) <= (double)iVar8) {
        *(undefined4 *)((int)this + 0x1f0) = 0;
      }
      local_30 = dVar3 * *(double *)((int)this + 0x80) +
                 *(double *)((int)this + 0xe8) * *(double *)((int)this + 0x218) * dVar5;
      local_28 = dVar4 * *(double *)((int)this + 0x80) +
                 dVar5 * *(double *)((int)this + 0x218) * *(double *)((int)this + 0x138);
      *(double *)(*(int *)((int)this + 0x1bc) + *(int *)((int)this + 0x1c8) * 8) =
           dVar5 * *(double *)((int)this + 0x88) + (dVar4 + dVar3) * _DAT_5ce12df8;
      iVar8 = *(int *)((int)this + 0x1c8) + -1;
      *(int *)((int)this + 0x1c8) = iVar8;
      if (iVar8 < 0) {
        *(undefined4 *)((int)this + 0x1c8) = 0x1963;
      }
      if ((*(int *)((int)this + 0x90) == 2) || (*(int *)((int)this + 0x90) == 3)) {
        FUN_5cdd8f80(this,&local_30,&local_28,1);
      }
      if (*(int *)((int)this + 0x90) == 3) {
        FUN_5cdd8f80(this,&local_30,&local_28,2);
      }
      local_30 = local_30 * _DAT_5ce13248;
      local_28 = local_28 * _DAT_5ce13248;
      if ((int)ROUND(local_30) < -0x8000) {
        sVar7 = -0x8000;
      }
      else {
        local_8 = (int)ROUND(local_30);
        sVar7 = 0x7fff;
        if (local_8 < 0x8000) {
          local_c = (int)ROUND(local_30);
          sVar7 = (short)local_c;
        }
      }
      *param_1 = sVar7;
      local_10 = (int)ROUND(local_28);
      if (local_10 < -0x8000) {
        iVar8 = -0x8000;
      }
      else {
        local_14 = (int)ROUND(local_28);
        iVar8 = 0x7fff;
        if (local_14 < 0x8000) {
          iVar8 = (int)ROUND(local_28);
          local_18 = iVar8;
        }
      }
      param_1[1] = (short)iVar8;
      param_1 = (short *)((int)param_1 + local_1c);
      param_3 = param_3 + -1;
      pcVar9 = _controlfp_exref;
    } while (param_3 != 0);
  }
  (*pcVar9)(local_20,0xffffffff);
  return 0;
}


