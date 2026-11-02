/* Module: sfppack1.dll
   Function: FUN_5ce0e610
   Address: 5ce0e610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5ce0e610(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_3c [15];
  
  puVar3 = param_2;
  FUN_5ce09e40(local_3c);
  FUN_5ce09e40(local_3c + 9);
  iVar7 = param_1 - (int)param_2;
  puVar2 = param_2 + 3;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 4;
    *(uint *)((int)local_3c + iVar5) =
         *(uint *)((param_1 - (int)local_3c) + (int)local_3c + iVar5) ^ puVar2[-3];
    *(uint *)((int)local_3c + iVar5 + 0x24) = *(uint *)(iVar7 + -4 + (int)(puVar2 + 1)) ^ *puVar2;
    puVar2 = puVar2 + 1;
    iVar5 = iVar4;
  } while (iVar4 < 0xc);
  FUN_5ce0a300((int)local_3c,local_3c + 0xc);
  FUN_5ce0a0d0((int)(local_3c + 0xc),(int)(local_3c + 9),local_3c + 6);
  FUN_5ce09e60((int)(local_3c + 6),local_3c + 3);
  FUN_5ce09dc0(local_3c + 3);
  if (*param_4 == 0) {
    iVar5 = 3;
    do {
      iVar5 = iVar5 + -1;
      *(uint *)((int)puVar3 + ((int)param_3 - (int)param_2)) =
           *(uint *)((int)puVar3 + (int)local_3c + (0x18 - (int)param_2)) ^
           *(uint *)((int)puVar3 + (int)local_3c + (0xc - (int)param_2)) ^
           *(uint *)((int)puVar3 + iVar7) ^ *puVar3;
      puVar3 = puVar3 + 1;
    } while (iVar5 != 0);
  }
  else {
    iVar5 = 0xc - (int)param_2;
    iVar4 = 0x18 - (int)param_2;
    iVar6 = (int)param_3 - (int)param_2;
    param_2 = (uint *)0x3;
    do {
      param_4 = param_4 + 1;
      *(uint *)((int)puVar3 + iVar6) =
           *(uint *)((int)local_3c + iVar4 + (int)puVar3) ^
           *(uint *)((int)local_3c + iVar5 + (int)puVar3) ^ *(uint *)((int)puVar3 + iVar7) ^
           *param_4 ^ *puVar3;
      param_2 = (uint *)((int)param_2 + -1);
      puVar3 = puVar3 + 1;
    } while (param_2 != (uint *)0x0);
  }
  iVar5 = 3;
  puVar3 = param_3;
  do {
    *(uint *)(((int)local_3c - (int)param_3) + (int)puVar3) =
         *(uint *)((param_1 - (int)param_3) + (int)puVar3) ^ *puVar3;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_5ce0a0d0((int)local_3c,(int)(local_3c + 6),local_3c + 3);
  puVar2 = local_3c + 3;
  puVar3 = param_3 + 3;
  iVar5 = 3;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar3 = *(uint *)((int)puVar3 + (param_1 - (int)param_3)) ^ puVar3[-3] ^ uVar1;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


