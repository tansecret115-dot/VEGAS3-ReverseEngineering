/* Module: vegas30.exe
   Function: FUN_004bebf0
   Address: 004bebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bebf0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  if (param_4 != *(int *)(param_1 + 0xa8)) {
    *(int *)(param_1 + 0xa8) = param_4;
    *(undefined4 *)(param_1 + 0xac) = param_5;
    FUN_004be8b0(param_1,param_2,param_4,param_5,param_3 >> 2 & 1,param_6);
    if ((DAT_0064cb88 & 1) == 0) {
      DAT_0064cb88 = DAT_0064cb88 | 1;
      _DAT_0063e8cc = *(undefined4 *)(param_2 + 0x1c);
      _DAT_0063e8d0 = 0xfffffffb;
      _DAT_0063e8d4 = *(undefined4 *)(param_2 + 0x1c);
    }
    FUN_00454f60(param_1,param_4,param_5,param_2 + 8,&DAT_0063e8c8,5);
  }
  return;
}


