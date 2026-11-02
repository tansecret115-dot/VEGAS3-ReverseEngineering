/* Module: aviplug.dll
   Function: FUN_5f967330
   Address: 5f967330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f967330(uint param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  iVar6 = 0;
  if (param_1 == 0) {
    return 0x80004003;
  }
  local_4 = 0;
  if (*(int *)(param_1 + 0x4738) == 0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0xea28,0x3000,4);
    *(LPVOID *)(param_1 + 0x4738) = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      local_4 = 0x8007000e;
    }
  }
  if (*(int *)(param_1 + 0x4738) != 0) {
    puVar3 = (uint *)(*(int *)(param_1 + 0x4738) + 0x3c00);
    param_1 = 0;
    do {
      local_8 = 5;
      do {
        iVar5 = 6;
        puVar4 = (undefined4 *)(iVar6 + *(int *)(uVar1 + 0x4738) + 0xc6b8);
        do {
          *puVar3 = *puVar3 & 0xfffffffb | (param_1 & 1) * 4;
          *puVar4 = puVar3;
          puVar3 = puVar3 + 0x82;
          iVar5 = iVar5 + -1;
          puVar4 = puVar4 + 1;
        } while (iVar5 != 0);
        iVar6 = iVar6 + 0x48;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      param_1 = param_1 + 1;
    } while (iVar6 < 0x2d0);
    *(int *)(*(int *)(uVar1 + 0x4738) + 0xb9a8) = *(int *)(uVar1 + 0x4738) + 0x3c00;
    *(int *)(*(int *)(uVar1 + 0x4738) + 0xb928) = *(int *)(uVar1 + 0x4738) + 0x3c00;
  }
  return local_4;
}


