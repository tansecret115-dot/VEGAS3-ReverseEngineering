/* Module: sftrkfx1.dll
   Function: FUN_5cbb7280
   Address: 5cbb7280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb7280(double *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  
  iVar5 = param_4 * 0x70 + param_3;
  dVar1 = *(double *)(iVar5 + 0x48);
  dVar2 = *(double *)(iVar5 + 0x230);
  pdVar6 = param_1 + param_2 * 2;
  for (; param_1 < pdVar6; param_1 = param_1 + 2) {
    dVar3 = *param_1 - dVar1;
    dVar4 = param_1[1] - dVar2;
    dVar1 = *(double *)(iVar5 + 0x88) * *param_1 + dVar1 * *(double *)(iVar5 + 0x28);
    dVar2 = *(double *)(iVar5 + 0x270) * param_1[1] + dVar2 * *(double *)(iVar5 + 0x210);
    param_1[1] = dVar4 + dVar2;
    *param_1 = dVar3 + dVar1;
  }
  *(double *)(iVar5 + 0x230) = dVar2;
  *(double *)(iVar5 + 0x48) = dVar1;
  return;
}


