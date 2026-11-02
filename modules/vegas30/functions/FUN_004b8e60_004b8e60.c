/* Module: vegas30.exe
   Function: FUN_004b8e60
   Address: 004b8e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b8e60(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  HCURSOR hCursor;
  
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0xe0000000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x20000000;
  *(undefined4 *)(param_1 + 0xa4) = 0x11;
  if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
    hCursor = (HCURSOR)_SfGetUICursor_4(0xd);
    SetCursor(hCursor);
  }
  FUN_00453ad0(param_1,*(uint *)(param_1 + 0x18) >> 0x11 & 1,param_2 & 4,param_3,param_4,param_5);
  return;
}


