/* Module: mp3plug.dll
   Function: FUN_5f70f9f0
   Address: 5f70f9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f70f9f0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == 0x400) || (param_2 == 0x80)) && (param_3 < 0)) {
    FUN_5f70f860(param_2,param_2);
    return 1;
  }
  uVar1 = FUN_5f70def0(param_2,param_1 + 4);
  return uVar1;
}


