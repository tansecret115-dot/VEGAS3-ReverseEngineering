/* Module: sftrkfx1.dll
   Function: FUN_5cbbdd50
   Address: 5cbbdd50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbbdd50(void *this,int param_1,double *param_2,int *param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  undefined4 local_14 [4];
  
  iVar8 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x28) + 2);
  iVar6 = FUN_5cbbb3a0(this,local_14);
  if (((iVar6 == 0) && (*(int *)((int)this + 0x2c) != 0)) ||
     (iVar6 = FUN_5cbbcbc0(this,(int)local_14,param_1), -1 < iVar6)) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*(int *)((int)this + 0x9c) == 0) {
        if (*(int *)((int)this + 0x98) % *(int *)((int)this + 0x94) == 0) {
          *(undefined4 *)((int)this + 0x88) = 0;
          *(undefined4 *)((int)this + 0x8c) = 0;
          *(undefined4 *)((int)this + 0x98) = 0;
        }
        dVar3 = _DAT_5cc04098;
        *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
        pdVar9 = param_2;
        for (uVar10 = uVar5; uVar10 != 0; uVar10 = uVar10 - 1) {
          if (dVar3 < ABS(*pdVar9)) {
            dVar3 = ABS(*pdVar9);
          }
          pdVar9 = pdVar9 + 1;
        }
        if ((*(uint *)((int)this + 0xb4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)((int)this + 0xb0) = 0;
          *(undefined4 *)((int)this + 0xb4) = 0;
        }
        dVar1 = *(double *)((int)this + 0xb0);
        dVar4 = dVar3 * *(double *)((int)this + 0xa0) +
                *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xb0);
        *(double *)((int)this + 0xb0) = dVar4;
        dVar4 = dVar4 - dVar1;
        if (dVar4 <= _DAT_5cc04098) {
          dVar4 = _DAT_5cc04098;
        }
        if (*(double *)((int)this + 0x88) < dVar4 + dVar3) {
          *(double *)((int)this + 0x88) = dVar4 + dVar3;
        }
        switch(*(undefined4 *)((int)this + 0x90)) {
        case 0:
          iVar6 = *(int *)((int)this + 0x5c);
          iVar2 = *(int *)((int)this + 0x78);
          if (iVar2 < iVar6) {
            *(int *)((int)this + 0x78) = iVar2 + 1;
            *(double *)((int)this + 0x80) = (double)(iVar6 - iVar2) / (double)iVar6;
            if (*(double *)((int)this + 0x68) <= *(double *)((int)this + 0x88)) {
              *(undefined4 *)((int)this + 0x90) = 2;
            }
          }
          else {
            *(undefined4 *)((int)this + 0x80) = 0;
            *(undefined4 *)((int)this + 0x84) = 0;
            *(undefined4 *)((int)this + 0x78) = 0;
            *(undefined4 *)((int)this + 0x90) = 3;
          }
          break;
        case 1:
          *(undefined4 *)((int)this + 0x80) = 0;
          *(undefined4 *)((int)this + 0x84) = 0x3ff00000;
          if (*(double *)((int)this + 0x88) < *(double *)((int)this + 0x70)) {
            *(undefined4 *)((int)this + 0x90) = 4;
          }
          break;
        case 2:
          iVar6 = *(int *)((int)this + 0x78);
          if (iVar6 < *(int *)((int)this + 0x58)) {
            *(int *)((int)this + 0x78) = iVar6 + 1;
            *(double *)((int)this + 0x80) = (double)iVar6 / (double)*(int *)((int)this + 0x58);
          }
          else {
            *(undefined4 *)((int)this + 0x80) = 0;
            *(undefined4 *)((int)this + 0x84) = 0x3ff00000;
            *(undefined4 *)((int)this + 0x78) = 0;
            uVar7 = 1;
            if (*(double *)((int)this + 0x88) < *(double *)((int)this + 0x68)) {
              uVar7 = 4;
            }
            *(undefined4 *)((int)this + 0x90) = uVar7;
          }
          break;
        case 3:
          *(undefined4 *)((int)this + 0x80) = 0;
          *(undefined4 *)((int)this + 0x84) = 0;
          if (*(double *)((int)this + 0x68) <= *(double *)((int)this + 0x88)) {
            *(undefined4 *)((int)this + 0x90) = 2;
            *(undefined4 *)((int)this + 0x78) = 0;
          }
          break;
        case 4:
          iVar6 = *(int *)((int)this + 0x7c) + 1;
          *(undefined4 *)((int)this + 0x80) = 0;
          *(undefined4 *)((int)this + 0x84) = 0x3ff00000;
          *(int *)((int)this + 0x7c) = iVar6;
          if (*(int *)((int)this + 0x60) < iVar6) {
            *(undefined4 *)((int)this + 0x7c) = 0;
            *(undefined4 *)((int)this + 0x90) = 0;
          }
          if (*(double *)((int)this + 0x70) <= *(double *)((int)this + 0x88)) {
            *(undefined4 *)((int)this + 0x90) = 4;
            *(undefined4 *)((int)this + 0x7c) = 0;
          }
        }
        if ((*(uint *)((int)this + 0xcc) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)((int)this + 200) = 0;
          *(undefined4 *)((int)this + 0xcc) = 0;
        }
        dVar3 = *(double *)((int)this + 0xc0) * *(double *)((int)this + 200) +
                *(double *)((int)this + 0xb8) * *(double *)((int)this + 0x80);
        *(double *)((int)this + 0x80) = dVar3 + *(double *)((int)this + 200);
        *(double *)((int)this + 200) = dVar3;
        pdVar9 = param_2;
        for (uVar10 = uVar5; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pdVar9 = *(double *)((int)this + 0x80) * *pdVar9;
          pdVar9 = pdVar9 + 1;
        }
      }
      param_2 = param_2 + uVar5;
    }
    iVar6 = 0;
  }
  return iVar6;
}


