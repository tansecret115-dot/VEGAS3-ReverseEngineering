/* Module: sftrkfx1.dll
   Function: FUN_5cbb6e20
   Address: 5cbb6e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb6e20(int *param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (*param_1 != 0) {
    pdVar9 = (double *)(param_1 + 0x12);
    piVar7 = param_1;
    do {
      if ((*(uint *)((int)pdVar9 + 4) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)pdVar9 = 0;
        *(undefined4 *)((int)pdVar9 + 4) = 0;
      }
      if ((*(uint *)((int)pdVar9 + 0xc) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(pdVar9 + 1) = 0;
        *(undefined4 *)((int)pdVar9 + 0xc) = 0;
      }
      if ((*(uint *)((int)pdVar9 + 0x1ec) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(pdVar9 + 0x3d) = 0;
        *(undefined4 *)((int)pdVar9 + 0x1ec) = 0;
      }
      if ((*(uint *)((int)pdVar9 + 500) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(pdVar9 + 0x3e) = 0;
        *(undefined4 *)((int)pdVar9 + 500) = 0;
      }
      iVar10 = piVar7[6];
      if (iVar10 == 1) {
        local_8 = 0;
        if (0 < *(int *)(pdVar9 + 9)) {
          do {
            dVar1 = *pdVar9;
            dVar2 = pdVar9[0x3d];
            for (pdVar8 = param_2; pdVar8 < param_2 + param_3 * 2; pdVar8 = pdVar8 + 2) {
              dVar3 = dVar1 + *pdVar8;
              dVar4 = dVar2 + pdVar8[1];
              dVar1 = pdVar9[8] * *pdVar8 + dVar1 * pdVar9[-4];
              dVar2 = pdVar9[0x45] * pdVar8[1] + dVar2 * pdVar9[0x39];
              pdVar8[1] = dVar4 + dVar2;
              *pdVar8 = dVar3 + dVar1;
            }
            pdVar9[0x3d] = dVar2;
            *pdVar9 = dVar1;
            if (1 < *(int *)(pdVar9 + 9)) {
              FUN_5cbb5af0((int)(pdVar9 + -4));
              FUN_5cbb5af0((int)(pdVar9 + 0x39));
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)(pdVar9 + 9));
        }
      }
      else if (iVar10 == 2) {
        pdVar8 = param_2;
        if ((param_3 & 1) != 0) {
          dVar1 = *pdVar9 * pdVar9[-4] + pdVar9[-3] * pdVar9[1] + pdVar9[8] * *param_2;
          *param_2 = (dVar1 + *param_2) - pdVar9[1];
          *(undefined4 *)(pdVar9 + 1) = *(undefined4 *)pdVar9;
          *pdVar9 = dVar1;
          *(undefined4 *)((int)pdVar9 + 0xc) = *(undefined4 *)((int)pdVar9 + 4);
          dVar1 = pdVar9[0x39] * pdVar9[0x3d] +
                  pdVar9[0x3a] * pdVar9[0x3e] + pdVar9[0x45] * param_2[1];
          param_2[1] = (dVar1 + param_2[1]) - pdVar9[0x3e];
          *(undefined4 *)(pdVar9 + 0x3e) = *(undefined4 *)(pdVar9 + 0x3d);
          pdVar9[0x3d] = dVar1;
          *(undefined4 *)((int)pdVar9 + 500) = *(undefined4 *)((int)pdVar9 + 0x1ec);
          pdVar8 = param_2 + 2;
        }
        dVar1 = *pdVar9;
        dVar2 = pdVar9[1];
        dVar3 = pdVar9[0x3d];
        dVar4 = pdVar9[0x3e];
        for (; pdVar8 < param_2 + param_3 * 2; pdVar8 = pdVar8 + 4) {
          dVar5 = *pdVar8 - dVar2;
          dVar6 = pdVar8[1] - dVar4;
          dVar2 = pdVar9[8] * *pdVar8 + dVar1 * pdVar9[-4] + dVar2 * pdVar9[-3];
          dVar4 = pdVar9[0x45] * pdVar8[1] + dVar3 * pdVar9[0x39] + dVar4 * pdVar9[0x3a];
          pdVar8[1] = dVar6 + dVar4;
          *pdVar8 = dVar5 + dVar2;
          dVar5 = pdVar8[2] - dVar1;
          dVar6 = pdVar8[3] - dVar3;
          dVar1 = pdVar9[8] * pdVar8[2] + dVar2 * pdVar9[-4] + dVar1 * pdVar9[-3];
          dVar3 = pdVar9[0x45] * pdVar8[3] + dVar4 * pdVar9[0x39] + dVar3 * pdVar9[0x3a];
          pdVar8[3] = dVar6 + dVar3;
          pdVar8[2] = dVar5 + dVar1;
        }
        pdVar9[0x3d] = dVar3;
        pdVar9[0x3e] = dVar4;
        *pdVar9 = dVar1;
        pdVar9[1] = dVar2;
      }
      else if ((iVar10 == 3) && (iVar10 = 0, 0 < *(int *)(pdVar9 + 9))) {
        do {
          FUN_5cbb7280(param_2,param_3,(int)param_1,local_c);
          if (1 < *(int *)(pdVar9 + 9)) {
            FUN_5cbb5af0((int)(pdVar9 + -4));
            FUN_5cbb5af0((int)(pdVar9 + 0x39));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(pdVar9 + 9));
      }
      piVar7 = piVar7 + 1;
      local_c = local_c + 1;
      pdVar9 = pdVar9 + 0xe;
    } while (*piVar7 != 0);
  }
  return;
}


