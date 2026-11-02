/* Module: mp3plug.dll
   Function: FUN_5f6f89f0
   Address: 5f6f89f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6f89f0(undefined4 param_1,uint param_2,uint param_3)

{
  if (param_3 < 0x11) {
    FUN_5f6f8410(param_3,param_2 & 0xffff);
    return;
  }
  FUN_5f6f8410(param_3 - 0x10,param_2 >> 0x10);
  FUN_5f6f8410(0x10,param_2 & 0xffff);
  return;
}


