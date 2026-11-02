/* Module: vidcap30.exe
   Function: FUN_00461440
   Address: 00461440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00461440(int param_1,byte param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    param_1 = param_1 + 400;
    iVar1 = 0xc;
  }
  else {
    iVar1 = 3;
    param_1 = param_1 + 0xf0;
  }
  param_1 = param_1 + iVar1 * 4;
  if (*(char *)(iVar1 + 3 + param_1) == 'c') {
    *param_3 = *(undefined4 *)(iVar1 + param_1 + 4);
    return 0;
  }
  return 0x8004e00a;
}


