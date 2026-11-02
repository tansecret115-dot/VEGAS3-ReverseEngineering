/* Module: vegas30.exe
   Function: FUN_0057c950
   Address: 0057c950
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0057c950(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_0057cef0();
  if (-1 < (int)uVar2) {
    sVar1 = FUN_0057d600(param_1 + 0x14,0,1,3,3,param_2);
    uVar2 = -(uint)(sVar1 != 0) & 0x80004005;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_0057d0a0();
  }
  return uVar2;
}


