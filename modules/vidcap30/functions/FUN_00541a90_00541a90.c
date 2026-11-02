/* Module: vidcap30.exe
   Function: FUN_00541a90
   Address: 00541a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00541a90(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < param_3) {
    iVar2 = *(int *)(param_1 + 0x16c);
    if ((int)(0x2000 / (longlong)iVar2) < (int)(param_3 - param_2)) {
      return -0x2000;
    }
    iVar1 = param_2 - param_3;
  }
  else {
    iVar1 = param_2 - param_3;
    iVar2 = *(int *)(param_1 + 0x16c);
    if ((int)(0x2000 / (longlong)iVar2) < iVar1) {
      return 0x2000;
    }
  }
  return iVar1 * iVar2;
}


