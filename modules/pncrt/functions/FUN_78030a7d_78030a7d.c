/* Module: pncrt.dll
   Function: FUN_78030a7d
   Address: 78030a7d
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78030a7d(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (!in_ZF) {
    if ((param_2 & 0x7ff00000) == 0) {
      if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
        uVar1 = 2;
        goto LAB_78030b0d;
      }
    }
    else if ((param_2 & 0x80000000) != 0) goto LAB_78030adc;
    log2(in_ST0);
    uVar1 = param_2;
LAB_78030aaa:
    if (DAT_78042718 != 0) {
      return uVar1;
    }
    uVar1 = __math_exit(&DAT_780410a0,0x1a,unaff_retaddr,param_1,param_2);
    return uVar1;
  }
  if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
    uVar1 = FUN_7803468c();
    goto LAB_78030b0d;
  }
  uVar1 = 0;
  if ((in_EAX & 0x80000000) == 0) goto LAB_78030aaa;
LAB_78030adc:
  uVar1 = 1;
LAB_78030b0d:
  if (DAT_78042718 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling(&DAT_780410a0,0x1a,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}


