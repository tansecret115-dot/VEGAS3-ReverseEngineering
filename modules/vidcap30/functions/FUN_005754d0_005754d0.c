/* Module: vidcap30.exe
   Function: FUN_005754d0
   Address: 005754d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005754d0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  uint local_438 [6];
  undefined1 local_420 [1056];
  
  FUN_00575240(param_3);
  FUN_00575260(param_2,local_438);
  FUN_00575260(param_1,local_438 + 3);
  puVar6 = local_420;
  iVar7 = 0x58;
  do {
    FUN_00575260(puVar6 + -0xc,puVar6);
    FUN_00575200(puVar6);
    puVar6 = puVar6 + 0xc;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = local_438 + DAT_00662e94 * 3 + 3;
  iVar7 = 3;
  puVar3 = param_3;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *(uint *)(((int)local_438 - (int)param_3) + (int)puVar3) & uVar1;
    puVar3 = puVar3 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar8 = &DAT_00663164;
  do {
    FUN_00575200(local_438);
    puVar5 = local_438 + piVar8[-0xb3] * 3 + 3;
    iVar7 = 3;
    puVar3 = local_438 + *piVar8 * 3 + 3;
    puVar4 = param_3;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = *puVar4 ^ (uVar1 ^ uVar2) & *(uint *)((int)puVar4 + ((int)local_438 - (int)param_3))
      ;
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar7 != 0);
    piVar8 = piVar8 + 1;
  } while ((int)piVar8 < 0x6632c4);
  return;
}


