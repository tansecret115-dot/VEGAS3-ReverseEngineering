/* Module: rmme3260.dll
   Function: FUN_6623c580
   Address: 6623c580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623c580(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_2c [2];
  int *local_24;
  int local_20 [4];
  void *local_10;
  int *local_c;
  int local_8;
  
  iVar1 = FUN_66247f80(param_1[0x1d]);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  local_24 = param_1 + 0xc;
  local_2c[0] = -(uint)(param_1[0xf] != 0);
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = (void *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  local_2c[1] = local_2c[0];
  local_20[0] = 0;
  local_20[1] = 0;
  if (local_2c[0] != 0) {
    FUN_66251190(param_1 + 0xc,local_2c + 1,local_20 + 1,local_20);
  }
  piVar2 = local_2c;
  piVar3 = local_20 + 2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  while (local_20[2] != 0) {
    FUN_6623c580(local_c);
    local_20[2] = local_20[3];
    if (local_20[3] != 0) {
      FUN_66251190(local_10,local_20 + 3,&local_8,(int *)&local_c);
    }
  }
  return;
}


