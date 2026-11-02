/* Module: vegas30k.dll
   Function: Step
   Address: 01065a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CScanlineIntersect::Step(struct SCANLINESTEP *,enum SF3DRENDERSTATE,long)
    */

int __thiscall
CScanlineIntersect::Step
          (CScanlineIntersect *this,SCANLINESTEP *param_1,SF3DRENDERSTATE param_2,long param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
                    /* 0x65a80  531
                       ?Step@CScanlineIntersect@@QAEHPAUSCANLINESTEP@@W4SF3DRENDERSTATE@@J@Z */
  if (*(int *)(param_1 + 0x94) != 0) {
    return 0;
  }
  if (param_2 == 2) {
    iVar5 = *(int *)this;
    if (iVar5 < *(int *)(param_1 + 4)) {
      if (*(int *)(param_1 + 0x70) == 0) {
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x7c);
        param_2 = *(int *)(this + 0x10) - *(int *)this;
        if ((int)param_2 < 2) {
          param_2 = 1;
        }
        *(int *)(param_1 + 0x8c) =
             (int)(((longlong)(*(int *)(this + 0x2c) - *(int *)(this + 0x28)) * 0x4000) /
                  (longlong)(int)param_2);
        iVar2 = *(int *)(this + 0x34);
        iVar3 = *(int *)(this + 0x30);
        *(undefined4 *)(param_1 + 0x70) = 1;
        *(int *)(param_1 + 0x90) =
             (int)(((longlong)(iVar2 - iVar3) * 0x4000) / (longlong)(int)param_2);
      }
      if ((iVar5 < *(int *)param_1) || (*(int *)(param_1 + 4) <= iVar5)) {
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x8c);
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x90);
      }
      else {
        iVar5 = *(int *)(param_1 + 4) - iVar5;
        lVar4 = (longlong)*(int *)(param_1 + 0x8c) * (longlong)iVar5;
        *(uint *)(param_1 + 0x68) =
             *(int *)(param_1 + 0x68) +
             ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
        lVar4 = (longlong)*(int *)(param_1 + 0x90) * (longlong)iVar5;
        *(uint *)(param_1 + 0x6c) =
             *(int *)(param_1 + 0x6c) +
             ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
      }
    }
    else {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x8c);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x90);
    }
    goto LAB_01065c58;
  }
  iVar5 = *(int *)this;
  if (iVar5 < *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x7c);
    }
    if (iVar5 < *(int *)param_1) goto LAB_01065c34;
    fVar1 = (float)(*(int *)(param_1 + 4) - iVar5) * _DAT_011dd9a8;
    *(float *)(param_1 + 0x74) = fVar1 * *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x68) = fVar1 * *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x68);
    fVar1 = fVar1 * *(float *)(param_1 + 0x90);
  }
  else {
LAB_01065c34:
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x68);
    fVar1 = *(float *)(param_1 + 0x90);
  }
  *(float *)(param_1 + 0x6c) = fVar1 + *(float *)(param_1 + 0x6c);
LAB_01065c58:
  *(int *)param_1 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 4) + 0x4000;
  *(int *)(param_1 + 4) = iVar5;
  if ((*(int *)(param_1 + 0xc) < *(int *)param_1) && (iVar5 < *(int *)(param_1 + 0x10))) {
    if (((*(uint *)(this + 4) & 0x3fff) == 0) &&
       (*(int *)(this + 0xc) - *(uint *)(this + 4) == 0x4000)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar2 = *(int *)(this + 4);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(int *)(param_1 + 0x20) = (iVar2 - iVar5) + 0x4000;
      iVar2 = *(int *)(this + 0xc);
      *(undefined4 *)(param_1 + 0x24) = 0x4000;
      *(int *)(param_1 + 0x40) = (iVar2 - iVar5) + 0x4000;
      iVar2 = *(int *)(this + 4);
      *(undefined4 *)(param_1 + 0x44) = 0x4000;
      *(int *)(param_1 + 0x28) = (iVar2 - iVar5) + 0x4000;
      iVar2 = *(int *)(this + 0xc);
      *(undefined4 *)(param_1 + 0x5c) = 2;
      *(int *)(param_1 + 0x48) = (iVar2 - iVar5) + 0x4000;
    }
  }
  else {
    ClipToPixelBoundries(this,param_1);
  }
  if (*(int *)(param_1 + 0x14) <= *(int *)param_1) {
    *(undefined4 *)(param_1 + 0x94) = 1;
  }
  return 1;
}


