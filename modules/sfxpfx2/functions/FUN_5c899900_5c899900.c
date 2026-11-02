/* Module: sfxpfx2.dll
   Function: FUN_5c899900
   Address: 5c899900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c899900(void *this,byte *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  float10 extraout_ST0;
  float10 extraout_ST1;
  int local_3c;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (param_3 != 0) {
    local_3c = param_3;
    do {
      local_28 = (double)(int)(char)(*param_1 ^ 0x80) * _DAT_5c8dc950;
      local_30 = (double)(int)(char)(param_1[1] ^ 0x80) * _DAT_5c8dc950;
      local_18 = local_28 * *(double *)((int)this + 0x68);
      local_20 = local_30 * *(double *)((int)this + 0x68);
      fsin((float10)*(int *)((int)this + 0x1e0) * (float10)*(double *)((int)this + 0x238));
      local_10 = local_30;
      iVar10 = ftol();
      iVar11 = iVar10 + 1;
      if (iVar11 == 0x1964) {
        iVar11 = 0;
      }
      iVar8 = *(int *)((int)this + 0x1ac);
      dVar1 = (double)((float10)*(double *)((int)this + 0x178) *
                       (float10)*(double *)((int)this + 0x1c8) +
                      ((extraout_ST0 - (float10)iVar10) *
                       ((float10)*(double *)(iVar8 + iVar11 * 8) -
                       (float10)*(double *)(iVar8 + iVar10 * 8)) +
                      (float10)*(double *)(iVar8 + iVar10 * 8)) *
                      (float10)*(double *)((int)this + 0x180));
      *(double *)((int)this + 0x1c8) = dVar1;
      dVar2 = *(double *)((int)this + 0x1f0) - _DAT_5c8dc920;
      *(double *)((int)this + 0x1f0) = dVar2;
      if (dVar2 < _DAT_5c8dc8e8) {
        *(undefined4 *)((int)this + 0x1f0) = 0;
        *(undefined4 *)((int)this + 500) = 0x40b96300;
      }
      iVar11 = *(int *)((int)this + 0x1e0) + 1;
      *(int *)((int)this + 0x1e0) = iVar11;
      if (*(double *)((int)this + 0x220) <= (double)iVar11) {
        *(undefined4 *)((int)this + 0x1e0) = 0;
      }
      dVar2 = *(double *)((int)this + 0x208);
      dVar3 = *(double *)((int)this + 0xd8);
      dVar4 = *(double *)((int)this + 0x70);
      dVar5 = *(double *)((int)this + 0x208);
      dVar6 = *(double *)((int)this + 0x128);
      dVar7 = *(double *)((int)this + 0x70);
      *(double *)(*(int *)((int)this + 0x1ac) + *(int *)((int)this + 0x1b8) * 8) =
           dVar1 * *(double *)((int)this + 0x78) + (local_20 + local_18) * _DAT_5c8dc8f8;
      iVar11 = *(int *)((int)this + 0x1b8) + -1;
      *(int *)((int)this + 0x1b8) = iVar11;
      if (iVar11 < 0) {
        *(undefined4 *)((int)this + 0x1b8) = 0x1963;
      }
      local_28 = (double)(((float10)local_18 * (float10)dVar4 +
                          (float10)dVar1 * (float10)dVar2 * (float10)dVar3) *
                          (float10)*(double *)((int)this + 0x58) +
                         extraout_ST1 * (float10)*(double *)((int)this + 0x60));
      local_30 = (local_20 * dVar7 + dVar5 * dVar6 * dVar1) * *(double *)((int)this + 0x58) +
                 local_10 * *(double *)((int)this + 0x60);
      if ((*(int *)((int)this + 0x80) == 2) || (*(int *)((int)this + 0x80) == 3)) {
        FUN_5c89b400(this,&local_28,&local_30,1);
      }
      if (*(int *)((int)this + 0x80) == 3) {
        FUN_5c89b400(this,&local_28,&local_30,2);
      }
      iVar11 = ftol();
      if (iVar11 < -0x80) {
        bVar9 = 0;
      }
      else if (iVar11 < 0x80) {
        bVar9 = (byte)iVar11 ^ 0x80;
      }
      else {
        bVar9 = 0xff;
      }
      *param_1 = bVar9;
      iVar11 = ftol();
      if (iVar11 < -0x80) {
        bVar9 = 0;
      }
      else if (iVar11 < 0x80) {
        bVar9 = (byte)iVar11 ^ 0x80;
      }
      else {
        bVar9 = 0xff;
      }
      param_1[1] = bVar9;
      param_1 = param_1 + param_2;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  return 0;
}


