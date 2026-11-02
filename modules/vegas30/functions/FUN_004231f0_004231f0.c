/* Module: vegas30.exe
   Function: FUN_004231f0
   Address: 004231f0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_004231f0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                    int *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  undefined4 local_40 [16];
  
  iVar2 = param_2;
  fVar5 = (float10)FUN_005ba670(param_1,param_2,&param_6,local_40,&local_50,param_6);
  uVar1 = param_6;
  local_48 = (double)fVar5;
  iVar2 = FUN_005ba820(param_1,iVar2,&local_58,0,&param_2);
  if ((iVar2 < 0) || (param_2 == 0)) {
    local_58 = 1;
    local_54 = 1;
  }
  if ((1 < local_58) && (local_50 = local_50 / local_58, local_50 < 9)) {
    local_50 = 8;
  }
  if ((1 < local_54) && (local_4c = local_4c / local_54, local_4c < 9)) {
    local_4c = 8;
  }
  puVar3 = local_40;
  puVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((DAT_0064b158 < 1) && (local_54 != 1)) {
    local_40[3] = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = local_50;
    param_5[1] = local_4c;
  }
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_4 = *puVar3;
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
    }
  }
  return (float10)local_48;
}


