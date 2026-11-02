/* Module: pncrt.dll
   Function: _statusfp
   Address: 780102a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _statusfp(void)

{
  uint uVar1;
  byte in_FPUStatusWord;
  
                    /* 0x102a0  454  _statusfp */
  uVar1 = FUN_780104a0(in_FPUStatusWord);
  return uVar1;
}


