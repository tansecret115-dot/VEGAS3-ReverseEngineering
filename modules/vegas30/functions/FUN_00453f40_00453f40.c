/* Module: vegas30.exe
   Function: FUN_00453f40
   Address: 00453f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453f40(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffef | 0x80;
  FUN_00452e00(param_1);
  FUN_00455090(param_1,0);
  return;
}


