/* Module: vegas30k.dll
   Function: FUN_0105fc70
   Address: 0105fc70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0105fc70(int param_1,int param_2,int param_3)

{
  sbyte sVar1;
  
  if ((param_2 < 0x40) || (0x1000000 < param_2)) {
    if ((param_3 == 0) || (sVar1 = 0xb, *(int *)(param_1 + 0xc) != 0)) {
      sVar1 = 8;
    }
    param_2 = 1 << sVar1;
  }
  return param_2;
}


