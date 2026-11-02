/* Module: pncrt.dll
   Function: _clearfp
   Address: 780102c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _clearfp(void)

{
  uint uVar1;
  byte in_FPUStatusWord;
  
                    /* 0x102c0  188  _clearfp */
  uVar1 = FUN_780104a0(in_FPUStatusWord);
  return uVar1;
}


