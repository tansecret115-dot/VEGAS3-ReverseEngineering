/* Module: vidpcore.dll
   Function: FUN_5df0a7c0
   Address: 5df0a7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5df0a7c0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_5df12d80();
  return CONCAT22((short)(uVar1 >> 0x10),~*(ushort *)(param_1 + 499)) & uVar1;
}


