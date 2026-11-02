/* Module: rmme3260.dll
   Function: FUN_6622dcb0
   Address: 6622dcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622dcb0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  HMODULE pHVar4;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0x10) != 0)) {
    return 0x80040009;
  }
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = operator_new(8);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_6626bde4;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar1[1] = param_1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = FUN_6625a630(param_1);
    if (iVar2 == 0) {
      return 0x80004005;
    }
    FUN_6622d8e0(*(int *)(param_1 + 0x18));
    FUN_662583f0();
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  piVar3 = FUN_662582c0(2);
  *(int **)(param_1 + 0x14) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar3 + 0x10))(0,0,0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
  (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(*(undefined4 *)(param_1 + 4));
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(pHVar4);
  *(undefined4 *)(param_1 + 0x10) = 1;
  (**(code **)**(undefined4 **)(param_1 + 0x14))(param_2,0);
  return 0;
}


