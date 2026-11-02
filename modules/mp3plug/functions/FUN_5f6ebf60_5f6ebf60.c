/* Module: mp3plug.dll
   Function: FUN_5f6ebf60
   Address: 5f6ebf60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6ebf60(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 3)) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  else if (param_2 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


