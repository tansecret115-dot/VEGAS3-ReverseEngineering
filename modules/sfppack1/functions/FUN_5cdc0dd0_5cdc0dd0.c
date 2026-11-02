/* Module: sfppack1.dll
   Function: FUN_5cdc0dd0
   Address: 5cdc0dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdc0dd0(void *this,int param_1,uint param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  double *pdVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int local_14;
  uint local_10;
  
  local_10 = 0;
  if (param_2 != 0) {
    iVar9 = (int)this + 0x1a0;
    do {
      pdVar2 = (double *)(iVar9 + 0x80);
      iVar8 = 8;
      pdVar6 = pdVar2;
      do {
        if ((*(uint *)((int)pdVar6 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar6 = 0;
          *(undefined4 *)((int)pdVar6 + 4) = 0;
        }
        pdVar6 = pdVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pbVar10 = (byte *)(local_10 + param_1);
      if (param_3 != 0) {
        local_14 = param_3;
        do {
          iVar8 = 8;
          dVar4 = (double)(int)(char)(*pbVar10 ^ 0x80) * _DAT_5ce13240;
          pdVar6 = pdVar2;
          do {
            pdVar1 = pdVar6 + -0x10;
            dVar3 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            iVar8 = iVar8 + -1;
            dVar4 = *pdVar1 * dVar3 + dVar4;
          } while (iVar8 != 0);
          puVar7 = (undefined4 *)(iVar9 + 0xb8);
          iVar8 = 7;
          do {
            *puVar7 = puVar7[-2];
            puVar7[1] = puVar7[-1];
            puVar7 = puVar7 + -2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          *pdVar2 = dVar4;
          iVar8 = ftol();
          if (iVar8 < -0x80) {
            bVar5 = 0;
          }
          else if (iVar8 < 0x80) {
            bVar5 = (byte)iVar8 ^ 0x80;
          }
          else {
            bVar5 = 0xff;
          }
          *pbVar10 = bVar5;
          pbVar10 = pbVar10 + param_2;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_10 = local_10 + 1;
      iVar9 = iVar9 + 200;
    } while (local_10 < param_2);
  }
  return;
}


