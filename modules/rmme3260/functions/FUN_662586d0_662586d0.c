/* Module: rmme3260.dll
   Function: FUN_662586d0
   Address: 662586d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662586d0(uint param_1)

{
  void *this;
  
  if (DAT_6627f198 == (int *)0x0) {
    FUN_66254ca0(&DAT_6627f198);
  }
  (**(code **)(*DAT_6627f198 + 4))();
  if (DAT_6627f17c == (void *)0x0) {
    this = operator_new(0x1c);
    if (this == (void *)0x0) {
      DAT_6627f17c = (void *)0x0;
    }
    else {
      DAT_6627f17c = (void *)CMap<>(this,10);
    }
  }
  FUN_66250fc0(DAT_6627f17c,param_1,0);
  (**(code **)(*DAT_6627f198 + 8))();
  return;
}


