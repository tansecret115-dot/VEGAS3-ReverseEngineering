/* Module: aviplug.dll
   Function: FUN_5f941c30
   Address: 5f941c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f941c30(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x674);
  if (iVar1 != 0) {
    *param_2 = 0;
    return iVar1;
  }
  piVar2 = FUN_5f98fe50((int *)(param_1 + 0x44),0xffffffff);
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    piVar2[3] = 0;
    *param_2 = piVar2;
    return 0;
  }
  *param_2 = 0;
  return -0x7ffb1fd4;
}


