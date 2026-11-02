/* Module: sfxpfx2.dll
   Function: FUN_5c8d7470
   Address: 5c8d7470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5c8d7470(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint *param_5,uint *param_6
            )

{
  int iVar1;
  uint *puVar2;
  uint local_30 [3];
  uint local_24 [3];
  uint local_18 [3];
  uint local_c [3];
  
  FUN_5c8d5b20();
  FUN_5c8d5170((int)param_2,local_30);
  local_30[0] = local_30[0] & 0x1ffffff;
  FUN_5c8d9890((int)local_30,(int *)param_6,local_24);
  iVar1 = FUN_5c8d96f0(local_30,(int)local_24,local_18);
  if (iVar1 != 0) {
    return 0;
  }
  if ((*param_2 & 0x2000000) == 0) {
    puVar2 = local_18;
  }
  else {
    puVar2 = local_c;
  }
  FUN_5c8d5170((int)puVar2,param_3 + 3);
  FUN_5c8d5170((int)local_30,param_3);
  FUN_5c8d9c50(param_1,param_5,param_4,param_6);
  puVar2 = param_4 + 3;
  iVar1 = 3;
  do {
    *puVar2 = *puVar2 ^ puVar2[-3];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}


