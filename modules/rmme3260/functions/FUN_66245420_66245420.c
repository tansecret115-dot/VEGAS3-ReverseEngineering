/* Module: rmme3260.dll
   Function: FUN_66245420
   Address: 66245420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66245420(int *param_1)

{
  void *this;
  
  if (DAT_6627d084 == 0) {
    this = operator_new(0x148);
    if (this != (void *)0x0) {
      DAT_6627d080 = FUN_66245cd0(this,param_1);
      DAT_6627d084 = DAT_6627d084 + 1;
      return;
    }
    DAT_6627d080 = (undefined4 *)0x0;
  }
  DAT_6627d084 = DAT_6627d084 + 1;
  return;
}


