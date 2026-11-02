/* Module: mcplug.dll
   Function: FUN_0040c650
   Address: 0040c650
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040c650(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)((int)param_1 + 0x40);
  if (piVar2 == (int *)0x0) {
    return -0x7fff0001;
  }
  puVar1 = (undefined4 *)((int)param_1 + 0x44);
  if (*(int *)((int)param_1 + 0x44) != 0) {
    (**(code **)(*piVar2 + 0x68))(piVar2,*(int *)((int)param_1 + 0x44));
  }
  iVar3 = (**(code **)(**(int **)((int)param_1 + 0x40) + 0x60))
                    (*(int **)((int)param_1 + 0x40),puVar1);
  if (iVar3 < 0) {
    (**(code **)(**(int **)((int)param_1 + 0x40) + 0x68))(*(int **)((int)param_1 + 0x40),*puVar1);
    *puVar1 = 0;
    return iVar3;
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    iVar4 = FUN_00410a10(param_1);
    if (iVar4 != 0) {
      *(undefined4 *)((int)param_1 + 0x24) = 0;
    }
  }
  return iVar3;
}


