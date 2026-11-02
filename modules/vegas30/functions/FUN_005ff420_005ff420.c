/* Module: vegas30.exe
   Function: FUN_005ff420
   Address: 005ff420
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_005ff420(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_00607f70();
  return CONCAT22((short)(uVar1 >> 0x10),~*(ushort *)(param_1 + 499)) & uVar1;
}


