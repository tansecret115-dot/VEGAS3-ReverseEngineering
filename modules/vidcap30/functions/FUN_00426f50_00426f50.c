/* Module: vidcap30.exe
   Function: FUN_00426f50
   Address: 00426f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426f50(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    if (((*(uint *)(param_1 + 0x148) & 0x8000000) != 0) &&
       (piVar1 = *(int **)(param_1 + 0x84c), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,1);
    }
    break;
  case 8:
  case 9:
    if (param_3 == 0) {
      if (((*(uint *)(param_1 + 0x148) & 0x8000000) != 0) &&
         (piVar1 = *(int **)(param_1 + 0x84c), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x28))(piVar1,1);
        return;
      }
    }
    else if (((*(uint *)(param_1 + 0x148) & 0x8000000) != 0) &&
            (piVar1 = *(int **)(param_1 + 0x84c), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,0);
      return;
    }
  }
  return;
}


