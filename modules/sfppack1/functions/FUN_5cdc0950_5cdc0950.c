/* Module: sfppack1.dll
   Function: FUN_5cdc0950
   Address: 5cdc0950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdc0950(void *this,double *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  double *local_14;
  int local_10;
  int local_c;
  
  if (param_2 != 0) {
    iVar7 = (int)this + 0x1a0;
    local_14 = param_1;
    local_c = param_2;
    do {
      pdVar1 = (double *)(iVar7 + 0x80);
      iVar6 = 8;
      pdVar3 = pdVar1;
      do {
        if ((*(uint *)((int)pdVar3 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar3 = 0;
          *(undefined4 *)((int)pdVar3 + 4) = 0;
        }
        pdVar3 = pdVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (param_3 != 0) {
        local_10 = param_3;
        pdVar3 = local_14;
        do {
          iVar6 = 8;
          pdVar4 = pdVar1;
          dVar2 = _DAT_5ce12bf0;
          do {
            iVar6 = iVar6 + -1;
            *pdVar3 = pdVar4[-0x10] * *pdVar4 + *pdVar3;
            dVar2 = pdVar4[-8] * *pdVar4 + dVar2;
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
          *(undefined4 *)pdVar1 = *(undefined4 *)pdVar3;
          *(undefined4 *)(iVar7 + 0x84) = *(undefined4 *)((int)pdVar3 + 4);
          *pdVar3 = *(double *)(iVar7 + 0xc0) * *pdVar3 + dVar2;
          pdVar3 = pdVar3 + param_2;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      iVar7 = iVar7 + 200;
      local_14 = local_14 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


