/* Module: mpegin.dll
   Function: FUN_1000bc80
   Address: 1000bc80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000bc80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar8 = *(int *)(param_1 + 0x1bc);
  iVar1 = *(int *)(param_1 + 0x204);
  iVar2 = *(int *)(param_1 + 0xcec);
  if ((-1 < *(int *)(*(int *)(param_1 + 0x12e54) + 0x74)) && (*(int *)(param_1 + 0x20) != 0)) {
    iVar6 = FUN_10006440(param_1,0);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x1bc);
    if ((*(int *)(param_1 + 0xc4) != 0) || (*(int *)(param_1 + 0xcec) < iVar6 + 1)) {
      *(int *)(param_1 + 0xcec) = iVar6 + 1;
    }
    iVar3 = *(int *)(param_1 + 0x12e54);
    iVar4 = *(int *)(iVar3 + 0x7c);
    if ((0 < iVar4) || (-1 < iVar4)) {
      *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0x78);
      *(int *)(iVar3 + 0x74) = iVar4;
      return 0;
    }
    if (*(int *)(param_1 + 0xc4) == 0) {
      uVar7 = iVar6 - iVar8;
    }
    else {
      uVar7 = (iVar6 - iVar8) + iVar2;
    }
    if (*(double *)(param_1 + 0x48) == *(double *)(param_1 + 0x40)) {
      lVar11 = __allmul(*(uint *)(iVar3 + 0xa8),*(int *)(iVar3 + 0xac),uVar7,(int)uVar7 >> 0x1f);
      uVar7 = *(uint *)(iVar3 + 0x70);
      *(uint *)(iVar3 + 0x70) = uVar7 + (uint)lVar11;
      *(uint *)(iVar3 + 0x74) =
           *(int *)(iVar3 + 0x74) + (int)((ulonglong)lVar11 >> 0x20) +
           (uint)CARRY4(uVar7,(uint)lVar11);
      return 0;
    }
    lVar11 = __allmul((int)uVar7 / 2,(int)uVar7 / 2 >> 0x1f,*(uint *)(iVar3 + 0xb0),
                      *(int *)(iVar3 + 0xb4));
    lVar12 = __allmul(*(uint *)(iVar3 + 0xa8),*(int *)(iVar3 + 0xac),uVar7,(int)uVar7 >> 0x1f);
    uVar9 = (uint)(lVar12 + lVar11);
    uVar5 = *(uint *)(iVar3 + 0x70);
    *(uint *)(iVar3 + 0x70) = uVar5 + uVar9;
    uVar7 = uVar7 & 0x80000001;
    bVar10 = uVar7 == 0;
    *(uint *)(iVar3 + 0x74) =
         *(int *)(iVar3 + 0x74) + (int)((ulonglong)(lVar12 + lVar11) >> 0x20) +
         (uint)CARRY4(uVar5,uVar9);
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar10) {
      return 0;
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x12e54);
    uVar7 = *(uint *)(iVar8 + 0x70);
    *(uint *)(iVar8 + 0x70) = uVar7 + *(uint *)(iVar8 + 0xb0);
    *(uint *)(iVar8 + 0x74) =
         *(int *)(iVar8 + 0x74) + *(int *)(iVar8 + 0xb4) +
         (uint)CARRY4(uVar7,*(uint *)(iVar8 + 0xb0));
    return 0;
  }
  iVar8 = FUN_10006440(param_1,0);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar8 = *(int *)(param_1 + 0x1bc) + 1;
    if (*(int *)(param_1 + 0xcec) < iVar8) {
      *(int *)(param_1 + 0xcec) = iVar8;
    }
  }
  else {
    *(int *)(param_1 + 0xcec) = *(int *)(param_1 + 0x1bc) + 1;
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_1000c09a;
    iVar8 = *(int *)(param_1 + 0x264) +
            (*(int *)(param_1 + 0x260) + *(int *)(param_1 + 0x25c) * 0x3c) * 0x3c;
    iVar2 = *(int *)(param_1 + 0x12e54);
    *(int *)(iVar2 + 0x80) = iVar8;
    *(int *)(iVar2 + 0x84) = iVar8 >> 0x1f;
    if ((*(int *)(param_1 + 0x178) == 4) &&
       (iVar8 = *(int *)(param_1 + 0x12e54), *(int *)(iVar8 + 0x118) == 0)) {
      lVar11 = __allmul(*(uint *)(iVar8 + 0x80),*(int *)(iVar8 + 0x84),0x1e,0);
      *(longlong *)(iVar8 + 0x80) = lVar11;
    }
    else {
      FUN_1000dfdc((double)*(longlong *)(*(int *)(param_1 + 0x12e54) + 0x80) *
                   *(double *)(param_1 + 0x40));
      lVar11 = __ftol();
      *(longlong *)(*(int *)(param_1 + 0x12e54) + 0x80) = lVar11;
    }
    iVar8 = *(int *)(param_1 + 0x12e54);
    uVar7 = *(uint *)(param_1 + 0x268);
    uVar5 = *(uint *)(iVar8 + 0x80);
    *(uint *)(iVar8 + 0x80) = uVar5 + uVar7;
    *(uint *)(iVar8 + 0x84) =
         *(int *)(iVar8 + 0x84) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar5,uVar7);
    iVar8 = *(int *)(param_1 + 0x12e54);
    lVar11 = __allmul(*(uint *)(iVar8 + 0xa8),*(int *)(iVar8 + 0xac),*(uint *)(iVar8 + 0x80),
                      *(int *)(iVar8 + 0x84));
    *(longlong *)(iVar8 + 0x80) = lVar11;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar8 = *(int *)(param_1 + 0x12e54);
    lVar11 = *(longlong *)(iVar8 + 0x80);
    if (*(int *)(iVar8 + 0x84) < 0) {
      *(undefined4 *)(iVar8 + 0x78) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0x7c) = 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x1bc);
      if (*(double *)(param_1 + 0x40) == *(double *)(param_1 + 0x48)) {
        lVar12 = __allmul(*(uint *)(iVar8 + 0xa8),*(int *)(iVar8 + 0xac),uVar7,(int)uVar7 >> 0x1f);
        *(longlong *)(iVar8 + 0x78) = lVar12 + lVar11;
      }
      else {
        lVar12 = __allmul(*(uint *)(iVar8 + 0xa8),*(int *)(iVar8 + 0xac),uVar7,(int)uVar7 >> 0x1f);
        *(longlong *)(iVar8 + 0x78) = lVar12 + lVar11;
        iVar8 = *(int *)(param_1 + 0x12e54);
        uVar7 = *(int *)(param_1 + 0x1bc) / 2;
        lVar11 = __allmul(uVar7,(int)uVar7 >> 0x1f,*(uint *)(iVar8 + 0xb0),*(int *)(iVar8 + 0xb4));
        uVar7 = *(uint *)(iVar8 + 0x78);
        *(uint *)(iVar8 + 0x78) = uVar7 + (uint)lVar11;
        *(uint *)(iVar8 + 0x7c) =
             *(int *)(iVar8 + 0x7c) + (int)((ulonglong)lVar11 >> 0x20) +
             (uint)CARRY4(uVar7,(uint)lVar11);
        uVar7 = *(uint *)(param_1 + 0x1bc) & 0x80000001;
        bVar10 = uVar7 == 0;
        if ((int)uVar7 < 0) {
          bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if ((!bVar10) && (iVar1 != 0)) {
          iVar8 = *(int *)(param_1 + 0x12e54);
          uVar7 = *(uint *)(iVar8 + 0x78);
          *(uint *)(iVar8 + 0x78) = uVar7 + *(uint *)(iVar8 + 0xb0);
          *(uint *)(iVar8 + 0x7c) =
               *(int *)(iVar8 + 0x7c) + *(int *)(iVar8 + 0xb4) +
               (uint)CARRY4(uVar7,*(uint *)(iVar8 + 0xb0));
        }
      }
    }
  }
LAB_1000c09a:
  iVar8 = *(int *)(param_1 + 0x12e54);
  *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar8 + 0x78);
  *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(iVar8 + 0x7c);
  return 0;
}


