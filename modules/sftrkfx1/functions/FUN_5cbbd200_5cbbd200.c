/* Module: sftrkfx1.dll
   Function: FUN_5cbbd200
   Address: 5cbbd200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbbd200(void *this,int param_1,int *param_2,int *param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  double *pdVar9;
  int iVar10;
  uint uVar11;
  uint local_38;
  undefined4 local_24 [3];
  double local_18 [2];
  
  iVar10 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x28) + 2);
  iVar6 = FUN_5cbbb3a0(this,local_24);
  if (((iVar6 == 0) && (*(int *)((int)this + 0x2c) != 0)) ||
     (iVar6 = FUN_5cbbcbc0(this,(int)local_24,param_1), -1 < iVar6)) {
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (uVar5 != 0) {
        piVar7 = param_2;
        pdVar9 = local_18;
        uVar11 = uVar5;
        do {
          iVar6 = *piVar7;
          piVar7 = piVar7 + 1;
          uVar11 = uVar11 - 1;
          *pdVar9 = (double)iVar6 * _DAT_5cc04290;
          pdVar9 = pdVar9 + 1;
        } while (uVar11 != 0);
      }
      if (*(int *)((int)this + 0x9c) == 0) {
        if (*(int *)((int)this + 0x98) % *(int *)((int)this + 0x94) == 0) {
          *(undefined4 *)((int)this + 0x88) = 0;
          *(undefined4 *)((int)this + 0x8c) = 0;
          *(undefined4 *)((int)this + 0x98) = 0;
        }
        dVar3 = _DAT_5cc04098;
        *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
        if (uVar5 != 0) {
          pdVar9 = local_18;
          uVar11 = uVar5;
          do {
            if (dVar3 < ABS(*pdVar9)) {
              dVar3 = ABS(*pdVar9);
            }
            pdVar9 = pdVar9 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if ((*(uint *)((int)this + 0xb4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)((int)this + 0xb0) = 0;
          *(undefined4 *)((int)this + 0xb4) = 0;
        }
        dVar1 = *(double *)((int)this + 0xb0);
        dVar4 = *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xb0) +
                dVar3 * *(double *)((int)this + 0xa0);
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
            uVar8 = 1;
            if (*(double *)((int)this + 0x88) < *(double *)((int)this + 0x68)) {
              uVar8 = 4;
            }
            *(undefined4 *)((int)this + 0x90) = uVar8;
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
        if (uVar5 != 0) {
          pdVar9 = local_18;
          uVar11 = uVar5;
          do {
            uVar11 = uVar11 - 1;
            *pdVar9 = *pdVar9 * *(double *)((int)this + 0x80);
            pdVar9 = pdVar9 + 1;
          } while (uVar11 != 0);
          goto LAB_5cbbd54c;
        }
      }
      else {
LAB_5cbbd54c:
        if (uVar5 != 0) {
          pdVar9 = local_18;
          piVar7 = param_2;
          local_38 = uVar5;
          do {
            if (_DAT_5cc04280 <= *pdVar9 * _DAT_5cc04288) {
              if (*pdVar9 * _DAT_5cc04288 <= _DAT_5cc04278) {
                iVar6 = ftol();
              }
              else {
                iVar6 = 0x7fffffff;
              }
            }
            else {
              iVar6 = -0x80000000;
            }
            *piVar7 = iVar6;
            pdVar9 = pdVar9 + 1;
            piVar7 = piVar7 + 1;
            local_38 = local_38 - 1;
          } while (local_38 != 0);
        }
      }
      param_2 = param_2 + uVar5;
    }
    iVar6 = 0;
  }
  return iVar6;
}


