/* Module: pncrt.dll
   Function: FUN_78030b4d
   Address: 78030b4d
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78030b4d(int param_1,uint param_2)

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
        goto LAB_78030bdd;
      }
    }
    else if ((param_2 & 0x80000000) != 0) goto LAB_78030bac;
    log2(in_ST0);
    uVar1 = param_2;
LAB_78030b7a:
    if (DAT_78042718 != 0) {
      return uVar1;
    }
    uVar1 = __math_exit(s_log10_780410b0,0x1b,unaff_retaddr,param_1,param_2);
    return uVar1;
  }
  if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
    uVar1 = FUN_7803468c();
    goto LAB_78030bdd;
  }
  uVar1 = 0;
  if ((in_EAX & 0x80000000) == 0) goto LAB_78030b7a;
LAB_78030bac:
  uVar1 = 1;
LAB_78030bdd:
  if (DAT_78042718 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling(s_log10_780410b0,0x1b,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}


