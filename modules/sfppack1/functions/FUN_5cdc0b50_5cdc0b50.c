/* Module: sfppack1.dll
   Function: FUN_5cdc0b50
   Address: 5cdc0b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdc0b50(void *this,int *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *local_1c;
  int local_18;
  int local_14;
  
  if (param_2 != 0) {
    iVar7 = (int)this + 0x1a0;
    local_1c = param_1;
    local_14 = param_2;
    do {
      pdVar1 = (double *)(iVar7 + 0x80);
      iVar6 = 8;
      pdVar4 = pdVar1;
      do {
        if ((*(uint *)((int)pdVar4 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar4 = 0;
          *(undefined4 *)((int)pdVar4 + 4) = 0;
        }
        pdVar4 = pdVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (param_3 != 0) {
        local_18 = param_3;
        piVar8 = local_1c;
        do {
          iVar6 = 8;
          dVar2 = (double)*piVar8 * _DAT_5ce13278;
          pdVar4 = pdVar1;
          dVar3 = _DAT_5ce12bf0;
          do {
            iVar6 = iVar6 + -1;
            dVar2 = pdVar4[-0x10] * *pdVar4 + dVar2;
            dVar3 = pdVar4[-8] * *pdVar4 + dVar3;
            pdVar4 = pdVar4 + 1;
          } while (iVar6 != 0);
          puVar5 = (undefined4 *)(iVar7 + 0xb8);
          iVar6 = 7;
          do {
            *puVar5 = puVar5[-2];
            puVar5[1] = puVar5[-1];
            puVar5 = puVar5 + -2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          *pdVar1 = dVar2;
          dVar2 = (dVar2 * *(double *)(iVar7 + 0xc0) + dVar3) * _DAT_5ce13260;
          if (_DAT_5ce13258 <= dVar2) {
            if (dVar2 <= _DAT_5ce13250) {
              iVar6 = ftol();
            }
            else {
              iVar6 = 0x7fffffff;
            }
          }
          else {
            iVar6 = -0x80000000;
          }
          *piVar8 = iVar6;
          piVar8 = piVar8 + param_2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      iVar7 = iVar7 + 200;
      local_1c = local_1c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}


