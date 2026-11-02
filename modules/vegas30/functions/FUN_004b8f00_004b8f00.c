/* Module: vegas30.exe
   Function: FUN_004b8f00
   Address: 004b8f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8f00(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  if (param_4 != *(int *)(param_1 + 0xa8)) {
    *(int *)(param_1 + 0xa8) = param_4;
    *(undefined4 *)(param_1 + 0xac) = param_5;
    FUN_00453cb0(param_1,param_4,param_5,0);
    if ((DAT_0064cb70 & 1) == 0) {
      DAT_0064cb70 = DAT_0064cb70 | 1;
      _DAT_0063e80c = *(undefined4 *)(param_2 + 0x1c);
      _DAT_0063e810 = 0xfffffffb;
      _DAT_0063e814 = *(undefined4 *)(param_2 + 0x1c);
    }
    FUN_00454f60(param_1,param_4,param_5,param_2 + 8,&DAT_0063e808,9);
  }
  return;
}


