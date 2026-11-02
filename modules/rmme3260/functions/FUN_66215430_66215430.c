/* Module: rmme3260.dll
   Function: FUN_66215430
   Address: 66215430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66215430(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2e8) == 1) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(int *)(param_1 + -0xb4) = param_2;
      FUN_66213e60((void *)(param_1 + -0xd8),param_2,(int *)0x0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x2e8) = 2;
    FUN_66213ca0((void *)(param_1 + -0xd8));
    return 0;
  }
  iVar1 = *(int *)(param_1 + 600);
  if (iVar1 == 1) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x27c) = 0;
      *(int *)(param_1 + -0xb4) = param_2;
      (**(code **)(**(int **)(param_1 + 0x254) + 0x10))(*(int **)(param_1 + 0x254),param_2);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x29a) = param_3;
    iVar1 = *(int *)(param_1 + 0x27c);
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x27c) = 3;
    }
    else {
      if (iVar1 == 4) {
        *(undefined4 *)(param_1 + 0x27c) = 5;
        FUN_66214440((int *)(param_1 + -0xd8));
        return 0;
      }
      if (iVar1 == 8) {
        *(undefined4 *)(param_1 + 0x27c) = 9;
        FUN_66214440((int *)(param_1 + -0xd8));
        return 0;
      }
    }
    FUN_66214440((int *)(param_1 + -0xd8));
    return 0;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      if (param_2 < 0) {
        *(undefined4 *)(param_1 + 0x25c) = 0;
        *(int *)(param_1 + -0xb4) = param_2;
        (**(code **)(**(int **)(param_1 + 0x254) + 0x1c))(*(int **)(param_1 + 0x254),param_2);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x29a) = param_3;
      if (*(int *)(param_1 + 0x25c) == 1) {
        *(undefined4 *)(param_1 + 0x25c) = 2;
      }
      FUN_66216ba0((int *)(param_1 + -0xd8));
    }
    return 0;
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x2ae) = 0;
    *(int *)(param_1 + -0xb4) = param_2;
    (**(code **)(**(int **)(param_1 + 0x254) + 0x14))(*(int **)(param_1 + 0x254),param_2);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x29a) = param_3;
  iVar1 = *(int *)(param_1 + 0x2ae);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x2ae) = 3;
  }
  else {
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0x2ae) = 5;
      FUN_66215af0((int *)(param_1 + -0xd8));
      return 0;
    }
    if (iVar1 == 8) {
      *(undefined4 *)(param_1 + 0x2ae) = 9;
      FUN_66215af0((int *)(param_1 + -0xd8));
      return 0;
    }
  }
  FUN_66215af0((int *)(param_1 + -0xd8));
  return 0;
}


