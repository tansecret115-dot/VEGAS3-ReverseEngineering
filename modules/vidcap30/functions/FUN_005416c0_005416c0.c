/* Module: vidcap30.exe
   Function: FUN_005416c0
   Address: 005416c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005416c0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 == 0) {
    *param_4 = param_3;
    return iVar1;
  }
  psVar3 = (short *)(*(int *)(param_1 + 0x1c0) + -0xe + iVar2 * 0x10);
  do {
    param_3 = param_3 - *psVar3;
    if (param_3 < 0) {
      *param_4 = param_3;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + -1;
    psVar3 = psVar3 + -8;
  } while (iVar2 != 0);
  *param_4 = param_3;
  return iVar1;
}


