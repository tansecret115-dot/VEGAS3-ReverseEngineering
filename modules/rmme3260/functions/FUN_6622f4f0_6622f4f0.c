/* Module: rmme3260.dll
   Function: FUN_6622f4f0
   Address: 6622f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622f4f0(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HMODULE pHVar4;
  undefined4 uVar5;
  
  if (param_4 == (int *)0x0) {
    return 0x80040009;
  }
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(int **)(param_1 + 8) = param_4;
  (**(code **)(*param_4 + 4))(param_4);
  iVar1 = FUN_6625a630(param_1);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  FUN_6622d8e0(*(int *)(param_1 + 0xc));
  FUN_662583f0();
  piVar2 = FUN_662582c0(1);
  *(int **)(param_1 + 0x14) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar2 + 0x2c))();
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar3 = operator_new(8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_6626bee8;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    puVar3[1] = param_1;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(*(undefined4 *)(param_1 + 0x18));
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(param_2,param_3,2,0,pHVar4);
  return uVar5;
}


