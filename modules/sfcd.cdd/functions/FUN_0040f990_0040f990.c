/* Module: sfcd.cdd
   Function: FUN_0040f990
   Address: 0040f990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040f990(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (param_2 == (byte *)0x0) {
    return 0x80004003;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 1;
  if ((param_3 & 8) != 0) {
    *param_2 = 0x81;
  }
  if ((param_3 & 1) != 0) {
    *param_2 = *param_2 | 0x10;
  }
  if ((param_3 & 2) != 0) {
    *param_2 = *param_2 | 0x20;
  }
  if (*(int *)(iVar1 + 0x1e8) != 0) {
    param_2[3] = 2;
    param_2[4] = 0;
    *param_2 = *param_2 | 0x40;
    return 0;
  }
  param_2[3] = 0;
  param_2[4] = 0;
  return 0;
}


