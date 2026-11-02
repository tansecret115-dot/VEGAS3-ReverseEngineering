/* Module: vegas30k.dll
   Function: FUN_0116c5f0
   Address: 0116c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0116c5f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 0x1b5);
  puVar1 = (uint *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
  }
  piVar5 = *(int **)(iVar2 + 0x10);
  uVar3 = *puVar1;
  (**(code **)(*(int *)(param_1 + 0x1c9) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),puVar1);
  if (uVar3 < *puVar1) {
    (**(code **)(*(int *)(param_1 + 0x1d1) + 4))
              (param_1,*(int *)(iVar2 + 0xc) + uVar3 * 4,0,*puVar1 - uVar3);
    *piVar5 = *piVar5 + param_2;
  }
  if (*(uint *)(iVar2 + 0x10) <= *puVar1) {
    *puVar1 = 0;
    *(uint *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(uint *)(iVar2 + 0x10);
  }
  return;
}


