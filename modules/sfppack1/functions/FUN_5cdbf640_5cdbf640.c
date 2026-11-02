/* Module: sfppack1.dll
   Function: FUN_5cdbf640
   Address: 5cdbf640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5cdbf640(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  double dStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_18;
  
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  if (0 < *param_4) {
    do {
      (**(code **)((int)this + 0x330))(param_1,param_2);
      if (*(int *)((int)this + 0xe8) != 0) break;
      iVar6 = *(int *)((int)this + 0xa0);
      iVar7 = *(int *)((int)this + 0xe4);
      dStack_30 = 0.0;
      uStack_18 = 0.0;
      dVar4 = (double)*(int *)((int)this + 0xa4) -
              (*(double *)((int)this + 0xd0) - *(double *)((int)this + 0xd8));
      if (iVar6 == 2) {
        uVar2 = *(ushort *)(*(int *)((int)this + 0x70) + 2);
        if (1 < uVar2) {
          uStack_18 = (_DAT_5ce12e70 - dVar4) * *(double *)(*(int *)((int)this + 0xb4) + iVar7 * 8);
        }
        iVar6 = iVar7 + 1;
        if (1 < iVar6) {
          iVar6 = 0;
        }
        dStack_30 = dVar4 * *(double *)(*(int *)((int)this + 0xb0) + iVar6 * 8) +
                    (_DAT_5ce12e70 - dVar4) * *(double *)(*(int *)((int)this + 0xb0) + iVar7 * 8);
        if (1 < uVar2) {
          uStack_18 = dVar4 * *(double *)(*(int *)((int)this + 0xb4) + iVar6 * 8) + uStack_18;
        }
      }
      else if (0 < iVar6) {
        iVar3 = *(int *)((int)this + 0xb8);
        uVar2 = *(ushort *)(*(int *)((int)this + 0x70) + 2);
        iVar1 = iVar6 + -1;
        do {
          iVar5 = ftol();
          fVar8 = (float10)*(double *)(iVar3 + iVar5 * 8);
          fVar8 = (extraout_ST0 - (float10)iVar5) *
                  ((float10)*(double *)(iVar3 + 8 + iVar5 * 8) - fVar8) + fVar8;
          iVar5 = iVar7 * 8;
          if (1 < uVar2) {
            uStack_18 = (double)(fVar8 * (float10)*(double *)
                                                   (*(int *)((int)this + 0xb4) + iVar7 * 8) +
                                (float10)uStack_18);
          }
          iVar7 = iVar7 + 1;
          if (iVar1 < iVar7) {
            iVar7 = 0;
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        dStack_30 = (double)(fVar8 * (float10)*(double *)(*(int *)((int)this + 0xb0) + iVar5) +
                            extraout_ST1);
      }
      (**(code **)((int)this + 0x334))
                (param_3,SUB84(dStack_30,0),uStack_2c,(undefined4)uStack_18,uStack_18._4_4_);
      *(double *)((int)this + 0xd0) =
           (double)*(int *)((int)this + 0xe0) * *(double *)((int)this + 200);
      iVar6 = ftol();
      *(int *)((int)this + 0xe8) = iVar6;
      if (iVar6 < 0) {
        *(undefined4 *)((int)this + 0xe8) = 0;
      }
    } while (*(int *)((int)this + 0xf0) < *param_4);
  }
  *param_2 = *(undefined4 *)((int)this + 0xec);
  *param_4 = *(int *)((int)this + 0xf0);
  return 0;
}


