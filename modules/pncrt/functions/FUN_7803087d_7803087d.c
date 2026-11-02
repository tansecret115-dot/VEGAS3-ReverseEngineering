/* Module: pncrt.dll
   Function: FUN_7803087d
   Address: 7803087d
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7803087d(int param_1,undefined4 param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_7803468c();
      if (DAT_78042718 != 0) {
        return;
      }
      __startOneArgErrorHandling(&DAT_78041030,0xf,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    fpatan(in_ST0,(float10)1);
  }
  if (DAT_78042718 != 0) {
    return;
  }
  __math_exit(&DAT_78041030,0xf,unaff_retaddr,param_1,param_2);
  return;
}


