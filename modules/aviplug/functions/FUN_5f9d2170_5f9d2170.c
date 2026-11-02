/* Module: aviplug.dll
   Function: FUN_5f9d2170
   Address: 5f9d2170
   Source: Ghidra pseudocode (Stage 10 batch) */


double * FUN_5f9d2170(double *param_1,int param_2,int param_3,int param_4,int param_5,
                     undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_10 [4];
  
  uVar4 = param_9;
  uVar3 = param_8;
  uVar2 = param_7;
  uVar1 = param_6;
  puVar5 = (undefined4 *)FUN_5f9d2220(&param_6,param_4,param_5,param_6,param_7,param_8,param_9);
  uVar7 = *puVar5;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  pdVar6 = (double *)FUN_5f9d2220(local_10,param_2,param_3,uVar1,uVar2,uVar3,uVar4);
  FUN_5f9cfe60(param_1,*pdVar6,pdVar6[1],(double)CONCAT44(uVar8,uVar7),
               (double)CONCAT44(uVar10,uVar9));
  return param_1;
}


