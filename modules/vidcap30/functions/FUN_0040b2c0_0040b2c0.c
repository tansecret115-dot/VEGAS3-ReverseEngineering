/* Module: vidcap30.exe
   Function: FUN_0040b2c0
   Address: 0040b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b2c0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x24) = *param_4;
  *(int *)(param_1 + 0x28) = param_4[1];
  *(int *)(param_1 + 0x2c) = param_4[2] - *param_4;
  *(int *)(param_1 + 0x30) = param_4[3] - param_4[1];
  if (param_3 == 0) {
    if ((*(byte *)(param_1 + 0xc) & 0x50) == 0) {
      *param_4 = *param_4 + 0xf;
      param_4[2] = param_4[2] + -4;
    }
    uVar1 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0xc) & 0x50) == 0) {
      *param_4 = *param_4 + 0xf;
      param_4[2] = param_4[2] + -4;
    }
    if ((*(byte *)(param_1 + 0xc) & 0x50) == 0) {
      param_4[4] = param_4[4] + 0xf;
      param_4[6] = param_4[6] + -4;
    }
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
      uVar1 = 0x100;
    }
    if ((*(uint *)(param_1 + 0xc) & 0x200) != 0) {
      return uVar1 | 0x200;
    }
  }
  return uVar1;
}


