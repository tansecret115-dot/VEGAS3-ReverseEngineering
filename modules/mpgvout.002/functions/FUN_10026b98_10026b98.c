/* Module: mpgvout.002
   Function: FUN_10026b98
   Address: 10026b98
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10026b98(int param_1,int param_2,int param_3,int param_4,int param_5,double *param_6,
            double *param_7)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  
  dVar3 = 0.0;
  iVar7 = 0;
  dVar4 = dVar3;
  dVar5 = dVar3;
  if (0 < param_5) {
    do {
      iVar8 = 0;
      iVar7 = iVar7 + 1;
      if (0 < param_4) {
        do {
          dVar2 = (double)*(byte *)(iVar8 + param_1);
          pbVar1 = (byte *)(iVar8 + param_2);
          iVar8 = iVar8 + 1;
          dVar3 = dVar3 + dVar2;
          dVar5 = dVar2 * dVar2 + dVar5;
          dVar2 = dVar2 - (double)*pbVar1;
          dVar4 = dVar2 * dVar2 + dVar4;
        } while (iVar8 < param_4);
      }
      param_2 = param_3 + param_2;
      param_1 = param_3 + param_1;
    } while (iVar7 < param_5);
  }
  dVar6 = (double)(param_4 * param_5);
  dVar2 = dVar4 / dVar6;
  if (dVar4 / dVar6 == 0.0) {
    dVar2 = _DAT_10026b90;
  }
  dVar3 = dVar5 / dVar6 - (dVar3 / dVar6) * (dVar3 / dVar6);
  if (dVar3 == 0.0) {
    *param_6 = _DAT_10026b90;
  }
  else {
    *param_6 = dVar3;
  }
  *param_7 = dVar2;
  return;
}


