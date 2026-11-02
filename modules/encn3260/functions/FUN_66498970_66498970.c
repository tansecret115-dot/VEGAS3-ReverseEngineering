/* Module: encn3260.dll
   Function: FUN_66498970
   Address: 66498970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66498970(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 0x10) == 0) {
    piVar1 = (int *)(param_1 + -8);
    (**(code **)(*(int *)(param_1 + -8) + 4))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    if ((*(byte *)(param_1 + 0x18) & 0x10) == 0) {
      switch(param_2) {
      case 0:
        FUN_66498330((int)piVar1);
        break;
      default:
        FUN_66498330((int)piVar1);
      case 1:
        FUN_66498500(piVar1);
        break;
      case 3:
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
        (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_3,0);
        break;
      case 4:
        (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),param_3);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x58) + 8))();
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0;
}


