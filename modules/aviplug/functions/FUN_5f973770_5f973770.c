/* Module: aviplug.dll
   Function: FUN_5f973770
   Address: 5f973770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973770(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_4;
  
  iVar2 = param_1;
  puVar8 = (undefined4 *)(param_1 + 0xc980);
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0xcac0);
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  param_1 = 0;
  local_4 = 0x3260;
  piVar5 = (int *)(iVar2 + 0xb8b0);
  do {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(&DAT_5f9e00b0 + *piVar5 * 0x44);
      if (-1 < iVar1) {
        piVar7 = (int *)(&DAT_5f9e0070 + iVar1 * 4 + *piVar5 * 0x44);
        iVar6 = iVar1 + 1;
        piVar3 = (int *)(iVar2 + (local_4 + iVar1) * 4);
        do {
          iVar1 = *piVar7;
          piVar7 = piVar7 + -1;
          *piVar3 = *piVar3 + *(int *)(iVar2 + 0xe480 + (iVar1 + (param_1 + iVar4) * 0xc) * 4);
          iVar6 = iVar6 + -1;
          piVar3 = piVar3 + -1;
        } while (iVar6 != 0);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 6);
    local_4 = local_4 + 0x10;
    param_1 = param_1 + 6;
  } while (local_4 < 0x32b0);
  return;
}


