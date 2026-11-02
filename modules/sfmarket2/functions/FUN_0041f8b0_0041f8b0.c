/* Module: sfmarket2.dll
   Function: FUN_0041f8b0
   Address: 0041f8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_0041f8b0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_3c [15];
  
  puVar3 = param_2;
  FUN_0041b0d0(local_3c);
  FUN_0041b0d0(local_3c + 9);
  iVar8 = param_1 - (int)param_2;
  puVar2 = param_2 + 3;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 4;
    *(uint *)((int)local_3c + uVar4) =
         *(uint *)((param_1 - (int)local_3c) + (int)((int)local_3c + uVar4)) ^ puVar2[-3];
    *(uint *)((int)local_3c + uVar4 + 0x24) = *(uint *)(iVar8 + -4 + (int)(puVar2 + 1)) ^ *puVar2;
    puVar2 = puVar2 + 1;
    uVar4 = uVar5;
  } while (uVar5 < 0xc);
  FUN_0041b590((int)local_3c,local_3c + 0xc);
  FUN_0041b360((int)(local_3c + 0xc),(int)(local_3c + 9),local_3c + 6);
  FUN_0041b0f0((int)(local_3c + 6),local_3c + 3);
  FUN_0041b050(local_3c + 3);
  if (*param_4 == 0) {
    iVar7 = 3;
    do {
      iVar7 = iVar7 + -1;
      *(uint *)((int)puVar3 + ((int)param_3 - (int)param_2)) =
           *(uint *)((int)puVar3 + (int)local_3c + (0x18 - (int)param_2)) ^
           *(uint *)((int)puVar3 + (int)local_3c + (0xc - (int)param_2)) ^
           *(uint *)((int)puVar3 + iVar8) ^ *puVar3;
      puVar3 = puVar3 + 1;
    } while (iVar7 != 0);
  }
  else {
    iVar7 = 0xc - (int)param_2;
    iVar1 = 0x18 - (int)param_2;
    iVar6 = (int)param_3 - (int)param_2;
    param_2 = (uint *)0x3;
    do {
      param_4 = param_4 + 1;
      *(uint *)((int)puVar3 + iVar6) =
           *(uint *)((int)local_3c + iVar1 + (int)puVar3) ^
           *(uint *)((int)local_3c + iVar7 + (int)puVar3) ^ *(uint *)((int)puVar3 + iVar8) ^
           *param_4 ^ *puVar3;
      param_2 = (uint *)((int)param_2 + -1);
      puVar3 = puVar3 + 1;
    } while (param_2 != (uint *)0x0);
  }
  iVar8 = 3;
  puVar3 = param_3;
  do {
    *(uint *)(((int)local_3c - (int)param_3) + (int)puVar3) =
         *(uint *)((param_1 - (int)param_3) + (int)puVar3) ^ *puVar3;
    puVar3 = puVar3 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_0041b360((int)local_3c,(int)(local_3c + 6),local_3c + 3);
  puVar2 = local_3c + 3;
  puVar3 = param_3 + 3;
  iVar8 = 3;
  do {
    uVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar3 = *(uint *)((int)puVar3 + (param_1 - (int)param_3)) ^ puVar3[-3] ^ uVar4;
    puVar3 = puVar3 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}


