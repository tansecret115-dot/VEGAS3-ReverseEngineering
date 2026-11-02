/* Module: vidcap30.exe
   Function: FUN_00541ff0
   Address: 00541ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00541ff0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (param_1[2] < *param_1) {
    uVar1 = param_1[2];
  }
  *param_2 = uVar1;
  uVar1 = param_1[2];
  if (param_1[2] <= *param_1) {
    uVar1 = *param_1;
  }
  param_2[2] = uVar1;
  uVar1 = param_1[3];
  if (param_1[1] <= param_1[3]) {
    uVar1 = param_1[1];
  }
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  if (param_1[3] <= param_1[1]) {
    uVar1 = param_1[1];
  }
  param_2[3] = uVar1;
  if ((param_1[2] == 0xffff) || (*param_1 == 0xffff)) {
    *param_2 = 0;
    param_2[2] = 0xff00;
  }
  if ((param_1[3] == 0xffff) || (param_1[1] == 0xffff)) {
    param_2[1] = 0;
    param_2[3] = 0xff00;
  }
  return 1;
}


