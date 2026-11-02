/* Module: vegas30k.dll
   Function: FUN_0118db80
   Address: 0118db80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0118db80(int param_1,int *param_2)

{
  double dVar1;
  int *piVar2;
  bool bVar3;
  double dVar4;
  
  piVar2 = *(int **)(param_1 + 0x18);
  *param_2 = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  dVar1 = *(double *)(param_1 + 0xa0);
  bVar3 = _DAT_011db3d8 <= dVar1;
  *(double *)(param_2 + 0x44) = dVar1;
  dVar4 = _DAT_011db3d8;
  if ((bVar3) && (dVar4 = dVar1, _DAT_011ea810 < dVar1)) {
    dVar4 = _DAT_011ea810;
  }
  *(double *)(param_2 + 0x44) = dVar4;
  param_2[0x42] = *(int *)(param_1 + 0x98);
  param_2[0x46] = *(int *)(param_1 + 0xa8);
  param_2[0x47] = *(int *)(param_1 + 0xac);
  param_2[0x48] = *(int *)(param_1 + 0xb0);
  param_2[0x49] = *(int *)(param_1 + 0xb4);
  param_2[0x4a] = *(int *)(param_1 + 0xb8);
  param_2[0x4b] = *(int *)(param_1 + 0xbc);
  param_2[0x4c] = *(int *)(param_1 + 0xc0);
  return 0;
}


