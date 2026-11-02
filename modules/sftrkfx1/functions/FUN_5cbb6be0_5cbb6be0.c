/* Module: sftrkfx1.dll
   Function: FUN_5cbb6be0
   Address: 5cbb6be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb6be0(int *param_1,double *param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  
  if (*param_1 != 0) {
    pdVar6 = (double *)(param_1 + 0x14);
    do {
      iVar5 = param_1[6];
      if (iVar5 == 1) {
        iVar5 = 0;
        if (0 < *(int *)(pdVar6 + 8)) {
          do {
            if ((*(uint *)((int)pdVar6 + -4) & 0x7ff00000) < 0x3df00000) {
              *(undefined4 *)(pdVar6 + -1) = 0;
              *(undefined4 *)((int)pdVar6 + -4) = 0;
            }
            if ((*(uint *)((int)pdVar6 + 4) & 0x7ff00000) < 0x3df00000) {
              *(undefined4 *)pdVar6 = 0;
              *(undefined4 *)((int)pdVar6 + 4) = 0;
            }
            dVar1 = pdVar6[-1];
            dVar3 = *pdVar6;
            for (pdVar4 = param_2; dVar2 = dVar1, pdVar4 < param_2 + param_3 * param_4;
                pdVar4 = pdVar4 + param_4) {
              dVar1 = dVar2 * pdVar6[-5] + *pdVar4 * pdVar6[7];
              *pdVar4 = *pdVar4 + dVar2 + dVar1;
              dVar3 = dVar2;
            }
            *pdVar6 = dVar3;
            pdVar6[-1] = dVar2;
            if (1 < *(int *)(pdVar6 + 8)) {
              FUN_5cbb5af0((int)(pdVar6 + -5));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(pdVar6 + 8));
        }
      }
      else if (iVar5 == 2) {
        if ((*(uint *)((int)pdVar6 + -4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)(pdVar6 + -1) = 0;
          *(undefined4 *)((int)pdVar6 + -4) = 0;
        }
        if ((*(uint *)((int)pdVar6 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar6 = 0;
          *(undefined4 *)((int)pdVar6 + 4) = 0;
        }
        dVar1 = pdVar6[-1];
        dVar3 = *pdVar6;
        for (pdVar4 = param_2; dVar2 = dVar1, pdVar4 < param_2 + param_3 * param_4;
            pdVar4 = pdVar4 + param_4) {
          dVar1 = *pdVar4 * pdVar6[7] + dVar3 * pdVar6[-4] + dVar2 * pdVar6[-5];
          *pdVar4 = (dVar1 + *pdVar4) - dVar3;
          dVar3 = dVar2;
        }
        *pdVar6 = dVar3;
        pdVar6[-1] = dVar2;
      }
      else if ((iVar5 == 3) && (iVar5 = 0, 0 < *(int *)(pdVar6 + 8))) {
        do {
          if ((*(uint *)((int)pdVar6 + -4) & 0x7ff00000) < 0x3df00000) {
            *(undefined4 *)(pdVar6 + -1) = 0;
            *(undefined4 *)((int)pdVar6 + -4) = 0;
          }
          if ((*(uint *)((int)pdVar6 + 4) & 0x7ff00000) < 0x3df00000) {
            *(undefined4 *)pdVar6 = 0;
            *(undefined4 *)((int)pdVar6 + 4) = 0;
          }
          dVar1 = pdVar6[-1];
          dVar3 = *pdVar6;
          for (pdVar4 = param_2; dVar2 = dVar1, pdVar4 < param_2 + param_3 * param_4;
              pdVar4 = pdVar4 + param_4) {
            dVar1 = *pdVar4 * pdVar6[7] + dVar2 * pdVar6[-5];
            *pdVar4 = (*pdVar4 + dVar1) - dVar2;
            dVar3 = dVar2;
          }
          *pdVar6 = dVar3;
          pdVar6[-1] = dVar2;
          if (1 < *(int *)(pdVar6 + 8)) {
            FUN_5cbb5af0((int)(pdVar6 + -5));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(pdVar6 + 8));
      }
      pdVar6 = pdVar6 + 0xe;
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
  }
  return;
}


