/* Module: wmfplug2.dll
   Function: FUN_004116c0
   Address: 004116c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004116c0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)((int)param_1 + 0x2c);
  if (piVar2 == (int *)0x0) {
    return -0x7fff0001;
  }
  piVar1 = (int *)((int)param_1 + 0x34);
  if (*(int *)((int)param_1 + 0x34) != 0) {
    (**(code **)(*piVar2 + 0x68))(piVar2,*(int *)((int)param_1 + 0x34));
  }
  iVar3 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x60))
                    (*(int **)((int)param_1 + 0x2c),piVar1);
  if (iVar3 < 0) {
    (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x68))(*(int **)((int)param_1 + 0x2c),*piVar1);
    *piVar1 = 0;
    return iVar3;
  }
  iVar4 = *(int *)(*(int *)(*piVar1 + 0x424) + 0x3e);
  if (*(uint *)(*(int *)(*piVar1 + 0x424) + 0x3a) < 0x7d) {
    *(undefined4 *)(iVar4 + 0x74) = 0;
    *(undefined4 *)(iVar4 + 0x78) = 0;
  }
  else {
    *(int *)(iVar4 + 0x74) = iVar4 + 0x7c;
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    iVar4 = FUN_00414110(param_1);
    if (iVar4 != 0) {
      *(undefined4 *)((int)param_1 + 0x24) = 0;
    }
  }
  return iVar3;
}


