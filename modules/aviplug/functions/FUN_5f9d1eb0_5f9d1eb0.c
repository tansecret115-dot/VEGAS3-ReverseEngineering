/* Module: aviplug.dll
   Function: FUN_5f9d1eb0
   Address: 5f9d1eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


double * FUN_5f9d1eb0(double *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined4 in_stack_ffffffb0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_stack_ffffffc0;
  undefined4 uVar5;
  undefined4 in_stack_ffffffc4;
  undefined4 uVar6;
  undefined4 in_stack_ffffffc8;
  undefined4 uVar7;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_10 [2];
  
  uVar8 = param_5;
  uVar7 = param_4;
  uVar6 = param_3;
  uVar5 = param_2;
  uVar3 = 0x5f9d1ee8;
  uVar9 = param_2;
  uVar10 = param_3;
  uVar11 = param_4;
  uVar12 = param_5;
  FUN_5f9d2e40(&stack0xffffffc0,0,0x40000000);
  pdVar2 = (double *)&param_2;
  uVar4 = 0x5f9d1ef2;
  puVar1 = (undefined4 *)
           FUN_5f9cff10(pdVar2,(double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0),
                        (double)CONCAT44(in_stack_ffffffcc,in_stack_ffffffc8),
                        (double)CONCAT44(uVar10,uVar9),(double)CONCAT44(uVar12,uVar11));
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  FUN_5f9d2e40(&stack0xffffffb0,0,0x40000000);
  pdVar2 = (double *)
           FUN_5f9cfed0(local_10,(double)CONCAT44(uVar3,in_stack_ffffffb0),
                        (double)CONCAT44(pdVar2,uVar4),(double)CONCAT44(uVar6,uVar5),
                        (double)CONCAT44(uVar8,uVar7));
  FUN_5f9cfe60(param_1,*pdVar2,pdVar2[1],(double)CONCAT44(uVar10,uVar9),
               (double)CONCAT44(uVar12,uVar11));
  return param_1;
}


