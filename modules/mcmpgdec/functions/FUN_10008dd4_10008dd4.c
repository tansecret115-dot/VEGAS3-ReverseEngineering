/* Module: mcmpgdec.dll
   Function: FUN_10008dd4
   Address: 10008dd4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008dd4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58c) == 0) {
    if (*(int *)(param_1 + 0x5f0) != 3) {
      iVar1 = 1;
      goto LAB_10008e37;
    }
    iVar1 = 2;
    if (*(int *)(param_1 + 0x604) != 0) {
      iVar1 = 3;
    }
  }
  else {
    if (*(int *)(param_1 + 0x604) == 0) {
      iVar1 = 1;
      goto LAB_10008e37;
    }
    iVar1 = 2;
    if (*(int *)(param_1 + 0x5f4) != 0) {
      iVar1 = 3;
      goto LAB_10008e37;
    }
  }
  if (iVar1 == 0) {
    return;
  }
LAB_10008e37:
  iVar3 = 0;
  do {
    uVar2 = FUN_10003a04((int *)(param_1 + 0x66c),0x11);
    *(uint *)(param_1 + 0x628 + iVar3) = uVar2 >> 1;
    uVar2 = FUN_10003a04((int *)(param_1 + 0x66c),0x11);
    *(uint *)(param_1 + 0x634 + iVar3) = uVar2 >> 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


