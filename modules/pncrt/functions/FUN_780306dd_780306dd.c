/* Module: pncrt.dll
   Function: FUN_780306dd
   Address: 780306dd
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780306dd(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_7803468c();
    }
LAB_7803076c:
    if (DAT_78042718 == 0) {
      __startOneArgErrorHandling(&DAT_78041010,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_78034675();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_7803076c;
    if (DAT_78042718 == 0) {
      __math_exit(&DAT_78041010,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


