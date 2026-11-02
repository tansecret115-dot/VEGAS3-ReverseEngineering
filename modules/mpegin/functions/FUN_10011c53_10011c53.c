/* Module: mpegin.dll
   Function: FUN_10011c53
   Address: 10011c53
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_10011c53(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10011c9e(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10011d30(uVar1);
  return uVar1;
}


