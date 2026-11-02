/* Module: sftrkfx1.dll
   Function: FUN_5cbbce10
   Address: 5cbbce10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbbce10(void *this,int param_1,short *param_2,int *param_3)

{
  double dVar1;
  short sVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  undefined4 uVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_24 [3];
  double local_18 [2];
  
  iVar11 = *param_3;
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x28) + 2);
  iVar7 = FUN_5cbbb3a0(this,local_24);
  if (((iVar7 == 0) && (*(int *)((int)this + 0x2c) != 0)) ||
     (iVar7 = FUN_5cbbcbc0(this,(int)local_24,param_1), -1 < iVar7)) {
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (uVar6 != 0) {
        psVar8 = param_2;
        pdVar10 = local_18;
        uVar12 = uVar6;
        do {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
          uVar12 = uVar12 - 1;
          *pdVar10 = (double)(int)sVar2 * _DAT_5cc04270;
          pdVar10 = pdVar10 + 1;
        } while (uVar12 != 0);
      }
      uVar12 = uVar6;
      psVar8 = param_2;
      if (*(int *)((int)this + 0x9c) == 0) {
        if (*(int *)((int)this + 0x98) % *(int *)((int)this + 0x94) == 0) {
          *(undefined4 *)((int)this + 0x88) = 0;
          *(undefined4 *)((int)this + 0x8c) = 0;
          *(undefined4 *)((int)this + 0x98) = 0;
        }
        dVar4 = _DAT_5cc04098;
        *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
        if (uVar6 != 0) {
          pdVar10 = local_18;
          uVar13 = uVar6;
          do {
            if (dVar4 < ABS(*pdVar10)) {
              dVar4 = ABS(*pdVar10);
            }
            pdVar10 = pdVar10 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if ((*(uint *)((int)this + 0xb4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)((int)this + 0xb0) = 0;
          *(undefined4 *)((int)this + 0xb4) = 0;
        }
        dVar1 = *(double *)((int)this + 0xb0);
        dVar5 = dVar4 * *(double *)((int)this + 0xa0) +
                *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xb0);
        *(double *)((int)this + 0xb0) = dVar5;
        dVar5 = dVar5 - dVar1;
        if (dVar5 <= _DAT_5cc04098) {
          dVar5 = _DAT_5cc04098;
        }
        if (*(double *)((int)this + 0x88) < dVar5 + dVar4) {
          *(double *)((int)this + 0x88) = dVar5 + dVar4;
        }
        switch(*(undefined4 *)((int)this + 0x90)) {
        case 0:
          iVar7 = *(int *)((int)this + 0x5c);
          iVar3 = *(int *)((int)this + 0x78);
          if (iVar3 < iVar7) {
            *(int *)((int)this + 0x78) = iVar3 + 1;
            *(double *)((int)this + 0x80) = (double)(iVar7 - iVar3) / (double)iVar7;
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
          iVar7 = *(int *)((int)this + 0x78);
          if (iVar7 < *(int *)((int)this + 0x58)) {
            *(int *)((int)this + 0x78) = iVar7 + 1;
            *(double *)((int)this + 0x80) = (double)iVar7 / (double)*(int *)((int)this + 0x58);
          }
          else {
            *(undefined4 *)((int)this + 0x80) = 0;
            *(undefined4 *)((int)this + 0x84) = 0x3ff00000;
            *(undefined4 *)((int)this + 0x78) = 0;
            uVar9 = 1;
            if (*(double *)((int)this + 0x88) < *(double *)((int)this + 0x68)) {
              uVar9 = 4;
            }
            *(undefined4 *)((int)this + 0x90) = uVar9;
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
          iVar7 = *(int *)((int)this + 0x7c) + 1;
          *(undefined4 *)((int)this + 0x80) = 0;
          *(undefined4 *)((int)this + 0x84) = 0x3ff00000;
          *(int *)((int)this + 0x7c) = iVar7;
          if (*(int *)((int)this + 0x60) < iVar7) {
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
        dVar4 = *(double *)((int)this + 0xc0) * *(double *)((int)this + 200) +
                *(double *)((int)this + 0xb8) * *(double *)((int)this + 0x80);
        *(double *)((int)this + 0x80) = dVar4 + *(double *)((int)this + 200);
        *(double *)((int)this + 200) = dVar4;
        if (uVar6 != 0) {
          pdVar10 = local_18;
          uVar13 = uVar6;
          do {
            uVar13 = uVar13 - 1;
            *pdVar10 = *(double *)((int)this + 0x80) * *pdVar10;
            pdVar10 = pdVar10 + 1;
          } while (uVar13 != 0);
          goto joined_r0x5cbbd167;
        }
      }
      else {
joined_r0x5cbbd167:
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          iVar7 = ftol();
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *psVar8 = (short)iVar7;
          psVar8 = psVar8 + 1;
        }
      }
      param_2 = param_2 + uVar6;
    }
    iVar7 = 0;
  }
  return iVar7;
}


