/* Module: vegas30.exe
   Function: FUN_00449230
   Address: 00449230
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00449230(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xb4) + 0x14) == 0) {
    return 0xffffffff;
  }
  uVar1 = _SfVideoKeyframe_InsertSmart_20
                    (*(int *)(param_1 + 0xb4),param_2,param_3,0xffffffff,0xffffffff);
  PostMessageA(*(HWND *)(param_1 + 8),0x66f,(uVar1 & 0xffff) << 5 | 2,*(LPARAM *)(param_1 + 0xb4));
  FUN_004491d0(param_1,uVar1);
  FUN_00453250(DAT_00647630,0);
  return uVar1;
}


