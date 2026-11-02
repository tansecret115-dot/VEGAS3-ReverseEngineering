/* Module: sftrkfx1.dll
   Function: FUN_5cbb4f90
   Address: 5cbb4f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb4f90(int param_1,double *param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  double local_10;
  undefined8 local_8;
  
  iVar1 = *(int *)(param_1 + 0x80 + param_3 * 4);
  *(int *)(param_2 + 0xd) = iVar1;
  local_10 = *(double *)(param_1 + 0x30 + param_3 * 8);
  local_8 = *(undefined8 *)(param_1 + 0x10 + param_3 * 8);
  if (1 < iVar1) {
    FUN_5cbb5070(&local_10,iVar1,0);
  }
  fVar2 = (float10)fptan((float10)local_10 * (float10)_DAT_5cc04728);
  fVar2 = ((float10)_DAT_5cc040b8 - fVar2) / (fVar2 + (float10)_DAT_5cc040b8);
  *param_2 = (double)fVar2;
  local_10 = (double)(((float10)_DAT_5cc040b8 - fVar2) * (float10)_DAT_5cc04118);
  param_2[0xc] = local_10;
  if (*(double *)(param_1 + 0x10 + param_3 * 8) <= _DAT_5cc04718) {
    param_2[0xc] = local_10 * _DAT_5cc04140;
    return;
  }
  fVar2 = (float10)_CIpow();
  param_2[0xc] = (double)((fVar2 - (float10)_DAT_5cc040b8) * (float10)local_10);
  return;
}


