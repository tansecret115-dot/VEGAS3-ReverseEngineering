/* Module: vegas30.exe
   Function: FUN_005b8d10
   Address: 005b8d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b8d10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,1);
  if (param_3 == 0) {
    puVar2 = (undefined4 *)(iVar1 + 0xcc);
  }
  else {
    if (param_3 != 5) goto LAB_005b8d58;
    puVar2 = (undefined4 *)(iVar1 + 0xdc);
  }
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  puVar2[2] = param_4[2];
  puVar2[3] = param_4[3];
LAB_005b8d58:
  FUN_005ba030(param_1,iVar1,1,1);
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  return 0;
}


