/* Module: vegas30.exe
   Function: FUN_0045f650
   Address: 0045f650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045f650(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = _SfGetUIFontSize_4(100);
  iVar1 = *(int *)(iVar1 + 4) + 0x10;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (param_3[3] - param_3[1] < iVar1) {
    iVar1 = param_3[3] - param_3[1];
  }
  *(int *)(param_2 + 8) = *param_3;
  *(int *)(param_2 + 0xc) = param_3[1];
  *(int *)(param_2 + 0x10) = param_3[2];
  *(int *)(param_2 + 0x14) = param_3[3];
  iVar1 = *(int *)(param_2 + 0x14) - iVar1;
  *(int *)(param_2 + 0xc) = iVar1;
  param_3[3] = iVar1;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8);
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc);
  FUN_0045f230(param_1,param_2);
  return;
}


