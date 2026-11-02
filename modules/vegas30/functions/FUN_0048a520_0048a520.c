/* Module: vegas30.exe
   Function: FUN_0048a520
   Address: 0048a520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048a520(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 1) {
    iVar2 = (int)*(char *)(iVar1 + param_2);
    iVar1 = (int)*(char *)(iVar1 + param_3);
  }
  else if (iVar2 == 2) {
    iVar2 = (int)*(short *)(iVar1 + param_2);
    iVar1 = (int)*(short *)(iVar1 + param_3);
  }
  else {
    if (iVar2 != 4) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + param_2);
    iVar1 = *(int *)(iVar1 + param_3);
  }
  if (iVar1 <= iVar2) {
    if (iVar2 <= iVar1) {
      return 0;
    }
    return 1;
  }
  return 0xffffffff;
}


