/* Module: vidcap30.exe
   Function: FUN_0057de60
   Address: 0057de60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057de60(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  *param_2 = iVar1;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00582b00(param_2 + 2,*(int *)(param_1 + 8),0x80);
    param_2[1] = *(int *)(param_1 + 0x10);
    return 0;
  }
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[1] = *(int *)(param_1 + 0x10);
  return 0;
}


