/* Module: vegas30.exe
   Function: FUN_0057cef0
   Address: 0057cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057cef0(int param_1)

{
  short sVar1;
  
  sVar1 = FUN_0057d600(param_1 + 0x14,0,1,4,0x301,param_1 + 4);
  if (sVar1 != 0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x14c) = 1;
  return 0;
}


