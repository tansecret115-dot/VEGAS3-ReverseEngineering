/* Module: vegas30.exe
   Function: FUN_0057cc00
   Address: 0057cc00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057cc00(int param_1,int param_2)

{
  short sVar1;
  undefined1 local_9c [156];
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    FUN_0057cef0();
    sVar1 = FUN_0057d600(param_1 + 0x14,0,1,3,4,local_9c);
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x154) = 1;
    }
    if (*(int *)(param_1 + 0x14c) != 0) {
      FUN_0057d0a0();
    }
  }
  return *(undefined4 *)(param_1 + 0x154);
}


