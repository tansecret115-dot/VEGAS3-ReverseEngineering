/* Module: vidpcore.dll
   Function: FUN_5df08a40
   Address: 5df08a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5df08a40(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  
  dVar2 = _DAT_5df18838;
  dVar1 = *param_2;
  puVar4 = param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = 0x40;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  if (dVar1 <= dVar2) {
    dVar1 = _DAT_5df18830;
  }
  *(double *)(param_1 + 6) = dVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[4] = *(undefined4 *)(param_2 + 1);
  param_1[5] = *(undefined4 *)((int)param_2 + 0xc);
  return;
}


