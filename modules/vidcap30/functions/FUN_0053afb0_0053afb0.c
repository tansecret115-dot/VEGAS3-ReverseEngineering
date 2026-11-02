/* Module: vidcap30.exe
   Function: FUN_0053afb0
   Address: 0053afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053afb0(double param_1,double param_2,int param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_10 [16];
  
  puVar3 = param_4;
  dVar1 = -param_1;
  dVar2 = -param_2;
  if (0 < param_3) {
    iVar6 = param_3;
    puVar5 = param_4 + param_3 * 4;
    do {
      uVar7 = puVar5[-4];
      uVar8 = puVar5[-3];
      uVar9 = puVar5[-2];
      uVar10 = puVar5[-1];
      puVar4 = (undefined4 *)
               FUN_005389a0(&param_1,dVar1,dVar2,*puVar5,puVar5[1],puVar5[2],puVar5[3]);
      puVar4 = (undefined4 *)
               FUN_00538a40(local_10,*puVar4,puVar4[1],puVar4[2],puVar4[3],uVar7,uVar8,uVar9,uVar10)
      ;
      iVar6 = iVar6 + -1;
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
      puVar5 = puVar5 + -4;
    } while (iVar6 != 0);
  }
  puVar5 = (undefined4 *)FUN_005389a0(&param_1,dVar1,dVar2,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  *puVar3 = *puVar5;
  puVar3[1] = puVar5[1];
  puVar3[2] = puVar5[2];
  puVar3[3] = puVar5[3];
  return;
}


