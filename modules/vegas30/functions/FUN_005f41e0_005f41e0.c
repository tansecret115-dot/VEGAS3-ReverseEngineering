/* Module: vegas30.exe
   Function: FUN_005f41e0
   Address: 005f41e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005f41e0(int param_1)

{
  _SfVideo_InitBitmapInfo_28
            (param_1 + 0xa0,0x1c,*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c),
             *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60),0,0,param_1 + 0x4c8);
  return 0;
}


