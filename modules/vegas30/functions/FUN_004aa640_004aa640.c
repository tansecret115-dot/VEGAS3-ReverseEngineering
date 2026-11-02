/* Module: vegas30.exe
   Function: FUN_004aa640
   Address: 004aa640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aa640(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  FUN_004aa620(param_1);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  if (param_5 != (int *)0x0) {
    *(int *)(param_1 + 0x4c) = *param_5;
    iVar1 = *param_5;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 4) != *(int *)(param_1 + 8)) && (*(int *)(iVar1 + 4) != 0)) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(int *)(param_1 + 0x58) = param_2;
        *(int *)(param_1 + 0x60) = param_2 + param_3;
        return;
      }
      if ((param_6 != (int *)0x0) && (iVar2 = *param_6, iVar2 != 0)) {
        *(int *)(param_1 + 0x50) = iVar2;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(iVar2 + 0x218) + 0x24);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(iVar2 + 0x218) + 0x2c);
        return;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(iVar1 + 0x69c) + 0x1c) + 3;
      *(int *)(param_1 + 0x60) = *(int *)(*(int *)(iVar1 + 0x69c) + 0x24) + -4;
      return;
    }
    *(int *)(param_1 + 0x58) = param_2;
    *(int *)(param_1 + 0x60) = param_2 + param_3;
  }
  return;
}


