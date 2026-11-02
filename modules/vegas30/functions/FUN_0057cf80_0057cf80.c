/* Module: vegas30.exe
   Function: FUN_0057cf80
   Address: 0057cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057cf80(int param_1)

{
  short sVar1;
  
  sVar1 = FUN_0057d600(param_1 + 0x14,0,1,3,0x401,param_1 + 0xb0);
  if (sVar1 != 0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x150) = 1;
  return 0;
}


