/* Module: pncrt.dll
   Function: FUN_78030eed
   Address: 78030eed
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78030eed(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_7803468c();
      goto LAB_78030f6b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x78030f5c:
    if (uVar1 == 0) {
LAB_78030f0e:
      if (DAT_78042718 != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_780410e0,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_78034675();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_78030f0e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x78030f5c;
  }
  uVar2 = 1;
LAB_78030f6b:
  if (DAT_78042718 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_780410e0,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}


