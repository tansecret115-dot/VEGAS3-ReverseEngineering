/* Module: vegas30.exe
   Function: FUN_004ca4b0
   Address: 004ca4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ca4b0(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x18) = (param_3 & 1) << 0x14 | *(uint *)(param_1 + 0x18) & 0xffefffff;
  if (param_2 < 0xc) {
    param_2 = 3;
  }
  else if (param_2 < 3) {
    param_2 = 3;
  }
  else if (0x4000 < param_2) {
    param_2 = 0x4000;
  }
  *(int *)(param_1 + 0x3a4) = param_2;
  if (param_3 == 0) {
    if (param_2 < 4) {
      DAT_006477c8 = 1;
    }
    else {
      DAT_006477c8 = 0;
      DAT_006477c4 = param_2;
    }
  }
  FUN_00453030(param_1);
  FUN_004530a0(param_1,0x1400);
  return;
}


