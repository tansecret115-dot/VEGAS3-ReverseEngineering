/* Module: aviplug.dll
   Function: FUN_5f972330
   Address: 5f972330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972330(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_c;
  int local_8;
  int local_4;
  
  puVar5 = (undefined4 *)(param_2 + 0xc980);
  for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)(param_2 + 0xcac0);
  for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_14 = (undefined4 *)(param_2 + 0xc820);
  local_18 = 0xcac0;
  piVar6 = (int *)(param_2 + 0xd380);
  do {
    local_20 = 0;
    local_1c = local_14;
    do {
      puVar1 = (uint *)local_1c[-0x5a];
      puVar2 = (uint *)*local_1c;
      iVar3 = 0;
      piVar4 = (int *)(local_18 + param_2);
      piVar7 = piVar6;
      do {
        FUN_5f972250(puVar1,*puVar1 & 3,puVar2,*puVar2 & 3,iVar3,local_20,&local_8,&local_4,&local_c
                    );
        piVar6 = piVar7 + 1;
        piVar7[-0x1e0] = local_c;
        *piVar7 = local_8;
        piVar4[-0x50] = piVar4[-0x50] + local_8;
        piVar7[0x1e0] = local_4;
        iVar3 = iVar3 + 1;
        *piVar4 = *piVar4 + local_4;
        piVar4 = piVar4 + 1;
        piVar7 = piVar6;
      } while (iVar3 < 0x10);
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
    } while (local_20 < 6);
    local_18 = local_18 + 0x40;
    local_14 = local_14 + 0x12;
  } while (local_18 < 0xcc00);
  return;
}


