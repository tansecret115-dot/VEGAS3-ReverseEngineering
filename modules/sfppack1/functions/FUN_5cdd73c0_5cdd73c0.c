/* Module: sfppack1.dll
   Function: FUN_5cdd73c0
   Address: 5cdd73c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd73c0(void *this,byte *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  int iVar8;
  float10 fVar9;
  double local_28;
  double local_20;
  double local_18;
  uint local_10;
  int local_c;
  int local_8;
  
  pcVar7 = _controlfp_exref;
  local_10 = _controlfp(0,0);
  _controlfp(0x300,0x300);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    dVar3 = (double)(int)(char)(*param_1 ^ 0x80) * _DAT_5ce13240 * *(double *)((int)this + 0x78);
    dVar4 = (double)(int)(char)(param_1[1] ^ 0x80) * _DAT_5ce13240 * *(double *)((int)this + 0x78);
    fVar9 = (float10)fsin((float10)*(int *)((int)this + 0x1f0) *
                          (float10)*(double *)((int)this + 0x248));
    fVar9 = fVar9 * (float10)*(double *)((int)this + 0x1a0) +
            (float10)*(double *)((int)this + 0x200);
    local_28 = (double)fVar9;
    if (fVar9 < (float10)_DAT_5ce14f18) {
      if (fVar9 < (float10)_DAT_5ce12bf0) {
        local_28 = (double)(fVar9 + (float10)_DAT_5ce14f18);
      }
    }
    else {
      local_28 = (double)(fVar9 - (float10)_DAT_5ce14f18);
    }
    iVar1 = (int)ROUND(local_28);
    iVar8 = iVar1 + 1;
    if (iVar8 == 0x1964) {
      iVar8 = 0;
    }
    iVar2 = *(int *)((int)this + 0x1bc);
    dVar5 = *(double *)((int)this + 0x1d8) * *(double *)((int)this + 0x188) +
            ((local_28 - (double)iVar1) *
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
    local_20 = dVar3 * *(double *)((int)this + 0x80) +
               dVar5 * *(double *)((int)this + 0xe8) * *(double *)((int)this + 0x218);
    local_18 = dVar4 * *(double *)((int)this + 0x80) +
               dVar5 * *(double *)((int)this + 0x138) * *(double *)((int)this + 0x218);
    *(double *)(*(int *)((int)this + 0x1bc) + *(int *)((int)this + 0x1c8) * 8) =
         dVar5 * *(double *)((int)this + 0x88) + (dVar4 + dVar3) * _DAT_5ce12df8;
    iVar8 = *(int *)((int)this + 0x1c8) + -1;
    *(int *)((int)this + 0x1c8) = iVar8;
    if (iVar8 < 0) {
      *(undefined4 *)((int)this + 0x1c8) = 0x1963;
    }
    if ((*(int *)((int)this + 0x90) == 2) || (*(int *)((int)this + 0x90) == 3)) {
      FUN_5cdd8f80(this,&local_20,&local_18,1);
    }
    if (*(int *)((int)this + 0x90) == 3) {
      FUN_5cdd8f80(this,&local_20,&local_18,2);
    }
    local_20 = local_20 * _DAT_5ce13238;
    local_8 = (int)ROUND(local_20);
    if (local_8 < -0x80) {
      iVar8 = 0;
    }
    else {
      iVar8 = local_8;
      if (0x7f < local_8) {
        iVar8 = 0xff;
      }
    }
    local_18 = local_18 * _DAT_5ce13238;
    *param_1 = (byte)iVar8 ^ 0x80;
    local_c = (int)ROUND(local_18);
    if (local_c < -0x80) {
      iVar8 = 0;
    }
    else {
      iVar8 = local_c;
      if (0x7f < local_c) {
        iVar8 = 0xff;
      }
    }
    param_1[1] = (byte)iVar8 ^ 0x80;
    param_1 = param_1 + param_2;
    pcVar7 = _controlfp_exref;
  }
  (*pcVar7)(local_10,0xffffffff);
  return 0;
}


