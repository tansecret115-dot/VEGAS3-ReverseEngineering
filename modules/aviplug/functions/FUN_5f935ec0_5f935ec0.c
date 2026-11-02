/* Module: aviplug.dll
   Function: FUN_5f935ec0
   Address: 5f935ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f935ec0(void *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x24) != 0) {
    FUN_5f936cb0(param_1,*(int *)((int)param_1 + 0x24));
  }
  puVar1 = FUN_5f936c60((int)param_1);
  *(undefined **)((int)param_1 + 0x24) = puVar1;
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x14) + 0xc))((int)param_1 + 0x14,puVar1,param_2);
  if (-1 < iVar2) {
    *(undefined4 *)((int)param_1 + 0x28) = 0;
  }
  return;
}


