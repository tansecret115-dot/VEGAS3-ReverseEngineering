/* Module: vidcap30.exe
   Function: FUN_0043a9a0
   Address: 0043a9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043a9a0(int param_1,uint param_2)

{
  undefined1 local_104 [260];
  
  local_104[0] = 0;
  if ((0x9d12 < param_2) && (param_2 < 0x9d1d)) {
    FUN_00420ed0(param_1 + 0xa48,1,param_2 - 0x9d13,local_104,0x104);
    FUN_00434830(param_1,local_104);
    return 0;
  }
  if ((0x9d22 < param_2) && (param_2 < 0x9d2d)) {
    FUN_00420ed0(param_1 + 0xa48,0,param_2 - 0x9d23,local_104,0x104);
    FUN_004348b0(param_1,local_104);
    return 0;
  }
  if ((param_1 != 0) && (*(HWND *)(param_1 + 8) != (HWND)0x0)) {
    SendMessageA(*(HWND *)(param_1 + 8),0x111,param_2 & 0xffff,0);
  }
  return 0;
}


