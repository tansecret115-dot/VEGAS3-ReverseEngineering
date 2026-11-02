/* Module: sfppack1.dll
   Function: FUN_5cdd85f0
   Address: 5cdd85f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd85f0(void *this,float *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  float10 fVar8;
  double local_24;
  double local_1c;
  double local_14;
  uint local_c;
  int local_8;
  
  local_c = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (param_3 != 0) {
    local_8 = param_2 * 4;
    do {
      dVar3 = (double)*param_1 * *(double *)((int)this + 0x78);
      dVar4 = (double)param_1[1] * *(double *)((int)this + 0x78);
      fVar8 = (float10)fsin((float10)*(int *)((int)this + 0x1f0) *
                            (float10)*(double *)((int)this + 0x248));
      fVar8 = fVar8 * (float10)*(double *)((int)this + 0x1a0) +
              (float10)*(double *)((int)this + 0x200);
      local_24 = (double)fVar8;
      if (fVar8 < (float10)_DAT_5ce14f18) {
        if (fVar8 < (float10)_DAT_5ce12bf0) {
          local_24 = (double)(fVar8 + (float10)_DAT_5ce14f18);
        }
      }
      else {
        local_24 = (double)(fVar8 - (float10)_DAT_5ce14f18);
      }
      iVar1 = (int)ROUND(local_24);
      iVar7 = iVar1 + 1;
      if (iVar7 == 0x1964) {
        iVar7 = 0;
      }
      iVar2 = *(int *)((int)this + 0x1bc);
      dVar5 = *(double *)((int)this + 0x1d8) * *(double *)((int)this + 0x188) +
              ((local_24 - (double)iVar1) *
               (*(double *)(iVar2 + iVar7 * 8) - *(double *)(iVar2 + iVar1 * 8)) +
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
      iVar7 = *(int *)((int)this + 0x1f0) + 1;
      *(int *)((int)this + 0x1f0) = iVar7;
      if (*(double *)((int)this + 0x230) <= (double)iVar7) {
        *(undefined4 *)((int)this + 0x1f0) = 0;
      }
      local_14 = dVar3 * *(double *)((int)this + 0x80) +
                 dVar5 * *(double *)((int)this + 0xe8) * *(double *)((int)this + 0x218);
      local_1c = dVar4 * *(double *)((int)this + 0x80) +
                 dVar5 * *(double *)((int)this + 0x138) * *(double *)((int)this + 0x218);
      *(double *)(*(int *)((int)this + 0x1bc) + *(int *)((int)this + 0x1c8) * 8) =
           dVar5 * *(double *)((int)this + 0x88) + (dVar4 + dVar3) * _DAT_5ce12df8;
      iVar7 = *(int *)((int)this + 0x1c8) + -1;
      *(int *)((int)this + 0x1c8) = iVar7;
      if (iVar7 < 0) {
        *(undefined4 *)((int)this + 0x1c8) = 0x1963;
      }
      if ((*(int *)((int)this + 0x90) == 2) || (*(int *)((int)this + 0x90) == 3)) {
        FUN_5cdd8f80(this,&local_14,&local_1c,1);
      }
      if (*(int *)((int)this + 0x90) == 3) {
        FUN_5cdd8f80(this,&local_14,&local_1c,2);
      }
      *param_1 = (float)local_14;
      param_1[1] = (float)local_1c;
      param_1 = (float *)((int)param_1 + local_8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  _controlfp(local_c,0xffffffff);
  return 0;
}


