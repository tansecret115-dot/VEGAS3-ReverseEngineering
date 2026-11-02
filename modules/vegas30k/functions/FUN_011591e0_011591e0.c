/* Module: vegas30k.dll
   Function: FUN_011591e0
   Address: 011591e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011591e0(int param_1)

{
  FUN_01158cd0(param_1,&DAT_01206fcc,0,0);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  return;
}


