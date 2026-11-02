/* Module: erv33260.dll
   Function: FUN_6707eae0
   Address: 6707eae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707eae0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x1cc);
  do {
    if (((byte)iVar2 & 3) == 3) {
      piVar1[-0x18] = *(int *)(param_1 + 0xa8) + -3;
      *piVar1 = *(int *)(param_1 + 0x9c) * 4 + -0xc;
    }
    else {
      piVar1[-0x18] = 1;
      *piVar1 = 4;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0x10;
  piVar1 = (int *)(param_1 + 0x20c);
  do {
    if (((byte)iVar2 & 1) == 1) {
      piVar1[-0x18] = *(int *)(param_1 + 0xa8) * 2 + -2;
      *piVar1 = *(int *)(param_1 + 0x9c) * 4 + -4;
    }
    else {
      piVar1[-0x18] = 2;
      *piVar1 = 4;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x17);
  return;
}


