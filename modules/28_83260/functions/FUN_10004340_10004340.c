/* Module: 28_83260.dll
   Function: FUN_10004340
   Address: 10004340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10004340(void *param_1)

{
  FUN_10001cb0(param_1,(undefined4 *)((int)param_1 + 0xbd8));
  *(undefined4 *)((int)param_1 + 0x16f0) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x1a1c) = 0;
  FUN_10001d10(param_1,(undefined4 *)((int)param_1 + 0xc98));
  FUN_10005910((int)param_1);
  *(undefined4 *)((int)param_1 + 0x1784) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x1788) = 0xbf800000;
  *(undefined4 *)((int)param_1 + 0x1a20) = 0;
  *(int *)((int)param_1 + 0x974) = (int)param_1 + 0x884;
  return;
}


