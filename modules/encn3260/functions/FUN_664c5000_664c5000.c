/* Module: encn3260.dll
   Function: FUN_664c5000
   Address: 664c5000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664c5000(uint param_1)

{
  void *this;
  
  if (DAT_664f2990 == (int *)0x0) {
    FUN_664bbfc0(&DAT_664f2990);
  }
  (**(code **)(*DAT_664f2990 + 4))();
  if (DAT_664f2974 == (void *)0x0) {
    this = operator_new(0x1c);
    if (this == (void *)0x0) {
      DAT_664f2974 = (void *)0x0;
    }
    else {
      DAT_664f2974 = (void *)CMap<>(this,10);
    }
  }
  FUN_664c3e40(DAT_664f2974,param_1,0);
  (**(code **)(*DAT_664f2990 + 8))();
  return;
}


