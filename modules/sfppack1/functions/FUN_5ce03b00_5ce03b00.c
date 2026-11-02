/* Module: sfppack1.dll
   Function: FUN_5ce03b00
   Address: 5ce03b00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5ce03b00(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_5ce0c0c0(*param_1);
  return CONCAT22((short)(uVar1 >> 0x10),~*(ushort *)(param_1 + 499)) & uVar1;
}


