/* Module: mpgmux.dll
   Function: FUN_100127d9
   Address: 100127d9
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_100127d9(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10012824(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100128b6(uVar1);
  return uVar1;
}


