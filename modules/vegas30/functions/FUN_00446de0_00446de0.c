/* Module: vegas30.exe
   Function: FUN_00446de0
   Address: 00446de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446de0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  undefined1 local_8 [8];
  
  if (param_1 != 0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x140) = param_2;
      return;
    case 2:
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x78) = param_2;
      return;
    case 3:
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x7c) = param_2;
      return;
    case 4:
      uVar2 = FUN_005ba4b0(*(undefined4 *)(param_1 + 0x88),0);
      FUN_005ba960(*(undefined4 *)(param_1 + 0x88),uVar2,param_2,0);
      break;
    case 5:
      piVar1 = *(int **)(param_1 + 0xb0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x18))(piVar1,local_8);
        piVar1 = *(int **)(param_1 + 0xb0);
        (**(code **)(*piVar1 + 0x24))
                  (piVar1,*(undefined4 *)(param_1 + 0x88),unaff_retaddr,1,
                   (undefined4 *)(param_1 + 0xb0),&stack0xfffffff0);
        return;
      }
      break;
    case 6:
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x138) = param_2;
      return;
    case 7:
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x200) = param_2;
      return;
    case 8:
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x204) = param_2;
      return;
    }
  }
  return;
}


