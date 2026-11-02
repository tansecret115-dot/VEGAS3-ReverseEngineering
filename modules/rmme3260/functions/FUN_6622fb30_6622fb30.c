/* Module: rmme3260.dll
   Function: FUN_6622fb30
   Address: 6622fb30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622fb30(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HMODULE pHVar4;
  
  if ((*(byte *)(param_1 + 0x6f) & 1) != 0) {
    return -0x7ffbfff7;
  }
  iVar1 = FUN_6625a630(param_1);
  if (iVar1 == 0) {
    return -0x7fffbffb;
  }
  FUN_6622d8e0(*(int *)(param_1 + 0x7d));
  iVar1 = FUN_662583f0();
  if (iVar1 == 0) {
    piVar2 = FUN_662582c0(2);
    *(int **)(param_1 + 0x18) = piVar2;
    if (piVar2 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    if (*(int *)(param_1 + 0x81) != 0) {
      (**(code **)(*piVar2 + 0x68))(*(int *)(param_1 + 0x81));
    }
    if (*(int *)(param_1 + 0x85) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x6c))(*(int *)(param_1 + 0x85));
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(param_2,param_3,0);
    if (iVar1 != 0) {
      iVar1 = FUN_6622d650(iVar1);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
        (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
        *(undefined4 *)(param_1 + 0x18) = 0;
        return iVar1;
      }
    }
    iVar1 = 0;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))();
    (**(code **)(**(int **)(param_1 + 0x18) + 0x58))(0x2ffff);
    if (*(int *)(param_1 + 0x5d) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_FUN_6626bf5c;
      }
      *(undefined4 **)(param_1 + 0x5d) = puVar3;
      puVar3[1] = param_1;
    }
    (**(code **)(**(int **)(param_1 + 0x18) + 0x48))(*(undefined4 *)(param_1 + 0x5d));
    pHVar4 = GetModuleHandleA((LPCSTR)0x0);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(pHVar4);
    piVar2 = *(int **)(param_1 + 0x61);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,2,*(undefined4 *)(param_1 + 0x59),0x32,0);
    }
    *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) | 1;
  }
  return iVar1;
}


