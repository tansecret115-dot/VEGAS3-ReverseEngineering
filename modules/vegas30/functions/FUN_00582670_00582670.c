/* Module: vegas30.exe
   Function: FUN_00582670
   Address: 00582670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00582670(int param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  *(uint *)(param_1 + 0xc) = param_2;
  _SfDialogBoxParam_20
            (*(undefined4 *)(DAT_0065a054 + 0x10),param_2 & 0xffff,param_3,&LAB_00582820,param_1);
  return;
}


