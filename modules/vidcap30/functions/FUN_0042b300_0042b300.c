/* Module: vidcap30.exe
   Function: FUN_0042b300
   Address: 0042b300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b300(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    if (param_2 == (int *)0x0) {
      param_1[199] = 0;
      param_1[0x52] = param_1[0x52] & 0xfffffdff;
      param_1[0x53] = param_1[0x53];
      return uVar1;
    }
    if (*param_2 == 8) {
      param_1[199] = (int)param_2;
      param_1[0x52] = param_1[0x52] | 0x200;
      param_1[0x53] = param_1[0x53];
      return uVar1;
    }
    uVar1 = 0x80070057;
  }
  return uVar1;
}


