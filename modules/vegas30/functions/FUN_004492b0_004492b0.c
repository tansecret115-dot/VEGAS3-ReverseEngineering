/* Module: vegas30.exe
   Function: FUN_004492b0
   Address: 004492b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004492b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 != 0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
    case 5:
    case 7:
    case 8:
      return *(int *)(iVar1 + 8);
    case 2:
    case 3:
      return iVar1;
    }
  }
  return 0;
}


