/* Module: mp3plug.dll
   Function: FUN_5f6c4240
   Address: 5f6c4240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c4240(double param_1,double param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double local_10 [2];
  
  pdVar3 = param_4;
  dVar1 = -param_1;
  dVar2 = -param_2;
  if (0 < param_3) {
    iVar6 = param_3;
    pdVar7 = param_4 + param_3 * 2;
    do {
      uVar8 = *(undefined4 *)(pdVar7 + -2);
      uVar9 = *(undefined4 *)((int)pdVar7 + -0xc);
      uVar10 = *(undefined4 *)(pdVar7 + -1);
      uVar11 = *(undefined4 *)((int)pdVar7 + -4);
      pdVar4 = (double *)FUN_5f6c1c30(&param_1,dVar1,dVar2,*pdVar7,pdVar7[1]);
      puVar5 = (undefined4 *)
               FUN_5f6c1cd0(local_10,*pdVar4,pdVar4[1],(double)CONCAT44(uVar9,uVar8),
                            (double)CONCAT44(uVar11,uVar10));
      iVar6 = iVar6 + -1;
      *(undefined4 *)pdVar7 = *puVar5;
      *(undefined4 *)((int)pdVar7 + 4) = puVar5[1];
      *(undefined4 *)(pdVar7 + 1) = puVar5[2];
      *(undefined4 *)((int)pdVar7 + 0xc) = puVar5[3];
      pdVar7 = pdVar7 + -2;
    } while (iVar6 != 0);
  }
  puVar5 = (undefined4 *)FUN_5f6c1c30(&param_1,dVar1,dVar2,*pdVar3,pdVar3[1]);
  *(undefined4 *)pdVar3 = *puVar5;
  *(undefined4 *)((int)pdVar3 + 4) = puVar5[1];
  *(undefined4 *)(pdVar3 + 1) = puVar5[2];
  *(undefined4 *)((int)pdVar3 + 0xc) = puVar5[3];
  return;
}


