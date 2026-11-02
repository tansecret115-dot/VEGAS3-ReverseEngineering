/* Module: rmme3260.dll
   Function: FUN_662420d0
   Address: 662420d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662420d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_2c [2];
  void *local_24;
  int local_20 [4];
  void *local_10;
  int local_c [2];
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_662478b0(*(int *)(param_1 + 0x74));
  }
  local_2c[0] = -(uint)(*(int *)(param_1 + 0x3c) != 0);
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = (void *)0x0;
  local_c[0] = 0;
  local_c[1] = 0;
  local_2c[1] = local_2c[0];
  local_24 = (void *)(param_1 + 0x30);
  local_20[0] = 0;
  local_20[1] = 0;
  if (local_2c[0] != 0) {
    FUN_66251190((void *)(param_1 + 0x30),local_2c + 1,local_20 + 1,local_20);
  }
  piVar2 = local_2c;
  piVar3 = local_20 + 2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  while (local_20[2] != 0) {
    FUN_662420d0(local_c[0]);
    local_20[2] = local_20[3];
    if (local_20[3] != 0) {
      FUN_66251190(local_10,local_20 + 3,local_c + 1,local_c);
    }
  }
  return;
}


