/* Module: sftrans1.dll
   Function: FUN_00538630
   Address: 00538630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00538630(undefined4 param_1,uint *param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint local_30 [3];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_00536ce0();
  FUN_00536330(param_2,local_30);
  local_30[0] = local_30[0] & 0x1ffffff;
  FUN_0053aa60(local_30,param_6,local_24);
  iVar1 = FUN_0053a8c0(local_30,local_24,local_18);
  if (iVar1 != 0) {
    return 0;
  }
  if ((*param_2 & 0x2000000) == 0) {
    puVar3 = local_18;
  }
  else {
    puVar3 = local_c;
  }
  FUN_00536330(puVar3,param_3 + 0xc);
  FUN_00536330(local_30,param_3);
  FUN_0053ae20(param_1,param_5,param_4,param_6);
  puVar2 = (uint *)(param_4 + 0xc);
  iVar1 = 3;
  do {
    *puVar2 = *puVar2 ^ puVar2[-3];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}


