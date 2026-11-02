/* Module: vidcap30.exe
   Function: FUN_0053aec0
   Address: 0053aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053aec0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_3 = 0;
  param_3[1] = 0x3ff00000;
  param_3[2] = 0;
  param_3[3] = 0;
  iVar2 = param_2;
  puVar1 = param_3;
  if (0 < param_2) {
    do {
      iVar2 = iVar2 + -1;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
    iVar2 = param_2;
    if (0 < param_2) {
      do {
        FUN_0053afb0(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
        param_1 = param_1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


