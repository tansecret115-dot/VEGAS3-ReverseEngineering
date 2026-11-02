/* Module: aviplug.dll
   Function: FUN_5f9d2220
   Address: 5f9d2220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9d2220(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_30;
  double local_20 [2];
  double local_10 [2];
  
  local_30 = 0;
  if (param_3 < 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    puVar5 = (undefined4 *)(param_3 * 0x10 + param_2);
    uVar3 = 0;
    param_3 = param_3 + 1;
    do {
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      pdVar1 = (double *)
               FUN_5f9cfe30(local_20,(double)CONCAT44(uVar6,local_30),(double)CONCAT44(uVar3,uVar4),
                            (double)CONCAT44(param_5,param_4),(double)CONCAT44(param_7,param_6));
      puVar2 = (undefined4 *)
               FUN_5f9cfed0(local_10,*pdVar1,pdVar1[1],(double)CONCAT44(uVar8,uVar7),
                            (double)CONCAT44(uVar10,uVar9));
      local_30 = *puVar2;
      puVar5 = puVar5 + -4;
      uVar6 = puVar2[1];
      uVar4 = puVar2[2];
      uVar3 = puVar2[3];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = local_30;
  param_1[1] = uVar6;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  return;
}


