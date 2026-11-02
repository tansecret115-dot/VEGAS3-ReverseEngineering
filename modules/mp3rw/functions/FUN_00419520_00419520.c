/* Module: mp3rw.dll
   Function: FUN_00419520
   Address: 00419520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00419520(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint *param_5,uint *param_6
            )

{
  int iVar1;
  uint *puVar2;
  uint local_30 [3];
  uint local_24 [3];
  uint local_18 [3];
  uint local_c [3];
  
  FUN_00417bd0();
  FUN_00417220((int)param_2,local_30);
  local_30[0] = local_30[0] & 0x1ffffff;
  FUN_0041b950((int)local_30,(int *)param_6,local_24);
  iVar1 = FUN_0041b7b0(local_30,(int)local_24,local_18);
  if (iVar1 != 0) {
    return 0;
  }
  if ((*param_2 & 0x2000000) == 0) {
    puVar2 = local_18;
  }
  else {
    puVar2 = local_c;
  }
  FUN_00417220((int)puVar2,param_3 + 3);
  FUN_00417220((int)local_30,param_3);
  FUN_0041bd10(param_1,param_5,param_4,param_6);
  puVar2 = param_4 + 3;
  iVar1 = 3;
  do {
    *puVar2 = *puVar2 ^ puVar2[-3];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}


