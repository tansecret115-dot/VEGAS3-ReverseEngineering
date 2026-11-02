/* Module: vidcap30.exe
   Function: FUN_0044be40
   Address: 0044be40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044be40(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  FUN_00412310(param_2,param_4,0,0x800);
  if (((byte)*(undefined4 *)(param_1 + 0xc) & 7) == 2) {
    FUN_004152e0(param_2,*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1]);
  }
  FUN_0040a520(param_1,param_2,DAT_005bb9d0,*(undefined4 *)(param_1 + 0x1d8),param_1 + 0x198,
               param_1 + 0x1c8,param_1 + 0x1b8,"Clip Explorer",param_1 + 0x1dc,0);
  return;
}


