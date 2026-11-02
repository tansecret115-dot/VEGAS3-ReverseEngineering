/* Module: vidcap30.exe
   Function: FUN_0044f500
   Address: 0044f500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044f500(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438 [264];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  FUN_0046ed20();
  puVar3 = local_438;
  for (iVar2 = 0x10e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  local_4 = 0;
  local_43c = 0;
  local_18 = param_3;
  local_14 = 5;
  uVar1 = FUN_0044eee0(&local_440,param_2,local_438);
  FUN_0046fdd0(*(undefined4 *)(param_3 + 0x14),&local_43c,0,0);
  *param_1 = local_440;
  return uVar1;
}


