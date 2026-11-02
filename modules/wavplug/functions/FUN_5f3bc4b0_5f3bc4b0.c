/* Module: wavplug.dll
   Function: FUN_5f3bc4b0
   Address: 5f3bc4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f3bc4b0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_5f3c4a60(*param_1);
  return CONCAT22((short)(uVar1 >> 0x10),(short)param_1[499]) & uVar1;
}


