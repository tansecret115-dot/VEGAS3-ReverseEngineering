/* Module: mp3plug.dll
   Function: FUN_5f711330
   Address: 5f711330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f711330(uint *param_1,uint param_2)

{
  int in_EAX;
  uint *in_stack_00000030;
  
  if ((((0x3d < param_2) && (*(char *)(in_EAX + 0x24) == 'V')) && (*(char *)(in_EAX + 0x25) == 'B'))
     && (*(char *)(in_EAX + 0x26) == 'R')) {
    if (*(char *)(in_EAX + 0x27) != 'I') {
      return 0;
    }
    if (CONCAT11(*(undefined1 *)(in_EAX + 0x28),*(undefined1 *)(in_EAX + 0x29)) == 1) {
      *in_stack_00000030 =
           (uint)*(byte *)(in_EAX + 0x2e) << 0x18 | (uint)*(byte *)(in_EAX + 0x2f) << 0x10 |
           (uint)*(byte *)(in_EAX + 0x30) << 8 | (uint)*(byte *)(in_EAX + 0x31);
      *param_1 = (uint)*(byte *)(in_EAX + 0x32) << 0x18 | (uint)*(byte *)(in_EAX + 0x33) << 0x10 |
                 (uint)*(byte *)(in_EAX + 0x34) << 8 | (uint)*(byte *)(in_EAX + 0x35);
      return 1;
    }
  }
  return 0;
}


