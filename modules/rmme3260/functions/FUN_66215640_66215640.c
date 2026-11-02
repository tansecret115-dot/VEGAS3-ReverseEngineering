/* Module: rmme3260.dll
   Function: FUN_66215640
   Address: 66215640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66215640(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 600) != 1) {
    if (*(int *)(param_1 + 600) != 2) {
      if (*(int *)(param_1 + 0x25c) != 2) {
        if (*(int *)(param_1 + 0x2e8) != 3) {
          if (*(int *)(param_1 + 0x2e8) == 4) {
            if (param_2 < 0) {
              *(undefined4 *)(param_1 + 0x2e8) = 0;
              *(int *)(param_1 + -0xb4) = param_2;
              FUN_66213e60((void *)(param_1 + -0xd8),param_2,(int *)0x0);
              return 0;
            }
            piVar1 = *(int **)(param_1 + 0x2f8);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *(undefined4 *)(param_1 + 0x2f8) = 0;
            }
            *(int **)(param_1 + 0x2f8) = param_3;
            (**(code **)(*param_3 + 4))(param_3);
            *(undefined4 *)(param_1 + 0x2e8) = 5;
            FUN_66213ca0((void *)(param_1 + -0xd8));
          }
          return 0;
        }
        if (-1 < param_2) {
          iVar2 = (**(code **)(*param_3 + 0x18))(param_3);
          if (iVar2 == 0xc) {
            puVar3 = (undefined1 *)(**(code **)(*param_3 + 0x1c))(param_3);
            if (CONCAT11(*puVar3,puVar3[1]) == 0) {
              piVar1 = *(int **)(param_1 + 0x2f4);
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 8))(piVar1);
                *(undefined4 *)(param_1 + 0x2f4) = 0;
              }
              *(int **)(param_1 + 0x2f4) = param_3;
              (**(code **)(*param_3 + 4))(param_3);
              *(undefined4 *)(param_1 + 0x2e8) = 4;
              FUN_66213ca0((void *)(param_1 + -0xd8));
              return 0;
            }
          }
        }
        *(undefined4 *)(param_1 + 0x2e8) = 0;
        if (param_2 == 0) {
          param_2 = -0x7fffbffb;
        }
        *(int *)(param_1 + -0xb4) = param_2;
        FUN_66213e60((void *)(param_1 + -0xd8),param_2,(int *)0x0);
        return 0;
      }
      if (param_2 < 0) {
        *(undefined4 *)(param_1 + 0x25c) = 0;
        *(int *)(param_1 + -0xb4) = param_2;
        (**(code **)(**(int **)(param_1 + 0x254) + 0x1c))(*(int **)(param_1 + 0x254),param_2);
        return 0;
      }
      piVar1 = *(int **)(param_1 + 0x29e);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x29e) = 0;
      }
      *(int **)(param_1 + 0x29e) = param_3;
      (**(code **)(*param_3 + 4))(param_3);
      *(undefined4 *)(param_1 + 0x25c) = 3;
      FUN_66216ba0((int *)(param_1 + -0xd8));
      return 0;
    }
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x2ae) = 0;
      *(int *)(param_1 + -0xb4) = param_2;
      (**(code **)(**(int **)(param_1 + 0x254) + 0x14))(*(int **)(param_1 + 0x254),param_2);
      return 0;
    }
    piVar1 = *(int **)(param_1 + 0x29e);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x29e) = 0;
    }
    *(int **)(param_1 + 0x29e) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    iVar2 = *(int *)(param_1 + 0x2ae);
    if (iVar2 == 3) {
      *(undefined4 *)(param_1 + 0x2ae) = 4;
    }
    else {
      if (iVar2 == 5) {
        *(undefined4 *)(param_1 + 0x2ae) = 6;
        FUN_66215af0((int *)(param_1 + -0xd8));
        return 0;
      }
      if (iVar2 == 9) {
        *(undefined4 *)(param_1 + 0x2ae) = 10;
        FUN_66215af0((int *)(param_1 + -0xd8));
        return 0;
      }
    }
    FUN_66215af0((int *)(param_1 + -0xd8));
    return 0;
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x27c) = 0;
    *(int *)(param_1 + -0xb4) = param_2;
    (**(code **)(**(int **)(param_1 + 0x254) + 0x10))(*(int **)(param_1 + 0x254),param_2);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x29e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x29e) = 0;
  }
  *(int **)(param_1 + 0x29e) = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  iVar2 = *(int *)(param_1 + 0x27c);
  if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x27c) = 4;
  }
  else {
    if (iVar2 == 5) {
      *(undefined4 *)(param_1 + 0x27c) = 6;
      FUN_66214440((int *)(param_1 + -0xd8));
      return 0;
    }
    if (iVar2 == 9) {
      *(undefined4 *)(param_1 + 0x27c) = 10;
      FUN_66214440((int *)(param_1 + -0xd8));
      return 0;
    }
  }
  FUN_66214440((int *)(param_1 + -0xd8));
  return 0;
}


