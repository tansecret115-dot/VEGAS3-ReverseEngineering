/* Module: sfppack1.dll
   Function: FUN_5cdc4fd0
   Address: 5cdc4fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_5cdc4fd0(void *param_1,double param_2,uint *param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  
  dVar2 = *(double *)(*(int *)((int)param_1 + 0x78) + *param_3 * 8);
  pdVar1 = (double *)(*(int *)((int)param_1 + 0x78) + *param_3 * 8);
  dVar3 = *(double *)((int)param_1 + 0x60);
  dVar4 = *(double *)((int)param_1 + 0x68);
  *pdVar1 = *(double *)((int)param_1 + 0x70) * *pdVar1 + param_2;
  uVar5 = *param_3 + (uint)*(ushort *)(*(int *)((int)param_1 + 0x4c) + 2);
  *param_3 = uVar5;
  if (*(uint *)((int)param_1 + 0x7c) <= uVar5) {
    *param_3 = param_4;
  }
  return (float10)param_2 * (float10)dVar4 + (float10)dVar2 * (float10)dVar3;
}


