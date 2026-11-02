/* Module: oggplug.dll
   Function: FUN_00442430
   Address: 00442430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00442430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar2 = param_2;
  puVar6 = param_1;
  for (iVar3 = 0x38a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    puVar2 = param_1 + 0x249;
    do {
      iVar3 = iVar3 + 1;
      *puVar2 = *(undefined4 *)(((int)param_2 - (int)param_1) + (int)puVar2);
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[7]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    puVar2 = param_1 + 0x109;
    do {
      uVar1 = (**(code **)((&PTR_PTR_00452c48)[puVar2[-0x40]] + 0xc))
                        (*(undefined4 *)((int)puVar2 + ((int)param_2 - (int)param_1)));
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    puVar2 = param_1 + 0x189;
    do {
      uVar1 = (**(code **)((&PTR_PTR_00452c4c)[puVar2[-0x40]] + 0xc))
                        (*(undefined4 *)((int)puVar2 + ((int)param_2 - (int)param_1)));
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[5]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[6]) {
    puVar2 = param_1 + 0x209;
    do {
      uVar1 = (**(code **)((&PTR_PTR_00452c54)[puVar2[-0x40]] + 0xc))
                        (*(undefined4 *)((int)puVar2 + ((int)param_2 - (int)param_1)));
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[6]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[3]) {
    puVar2 = param_1 + 0x89;
    do {
      uVar1 = (**(code **)((&PTR_PTR_00452c60)[puVar2[-0x40]] + 0xc))
                        (*(undefined4 *)((int)puVar2 + ((int)param_2 - (int)param_1)));
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[3]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[2]) {
    iVar7 = (int)param_2 - (int)param_1;
    piVar4 = param_1 + 9;
    do {
      puVar2 = calloc(1,0x10);
      *piVar4 = (int)puVar2;
      iVar3 = iVar3 + 1;
      piVar5 = piVar4 + 1;
      *puVar2 = **(undefined4 **)(iVar7 + (int)piVar4);
      *(undefined4 *)(*piVar4 + 4) = *(undefined4 *)(*(int *)(iVar7 + -4 + (int)piVar5) + 4);
      *(undefined4 *)(*piVar4 + 8) = *(undefined4 *)(*(int *)(iVar7 + -4 + (int)piVar5) + 8);
      *(undefined4 *)(*piVar4 + 0xc) = *(undefined4 *)(*(int *)(iVar7 + -4 + (int)piVar5) + 0xc);
      piVar4 = piVar5;
    } while (iVar3 < (int)param_1[2]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[8]) {
    puVar2 = param_1 + 0x349;
    do {
      uVar1 = FUN_004326d0(*(undefined4 **)((int)puVar2 + ((int)param_2 - (int)param_1)));
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[8]);
  }
  return;
}


