/* Module: encn3260.dll
   Function: FUN_6648c0a0
   Address: 6648c0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6648c0a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    FUN_66486e00(*(void **)(param_1 + 0x6a),param_1,*(undefined4 *)(param_1 + 0x3c));
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_66489b40(*(int **)(param_1 + 0x6a));
      FUN_66486e20(*(void **)(param_1 + 0x6a),0);
    }
    else {
      FUN_6648a710(*(void **)(param_1 + 0x6a),0);
    }
    *(undefined4 *)(param_1 + 0x6a) = 0;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),0x1000);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x6a);
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (iVar1 == 0) {
      return 0x80004005;
    }
    (**(code **)(*(int *)(iVar1 + 0x30) + 4))(iVar1 + 0x30);
    FUN_66486e20(*(void **)(param_1 + 0x6a),0x80040044);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x30) + 4))(iVar1 + 0x30);
    FUN_6648a710(*(void **)(param_1 + 0x6a),-0x7ffbffbc);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x6a) + 0x30);
  (**(code **)(*piVar3 + 8))(piVar3);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  return 0x80004005;
}


