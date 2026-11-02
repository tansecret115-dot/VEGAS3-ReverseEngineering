/* Module: encn3260.dll
   Function: FUN_664affd0
   Address: 664affd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664affd0(int *param_1)

{
  void *this;
  
  if (DAT_664f087c == 0) {
    this = operator_new(0x148);
    if (this != (void *)0x0) {
      DAT_664f0878 = FUN_664b0870(this,param_1);
      DAT_664f087c = DAT_664f087c + 1;
      return;
    }
    DAT_664f0878 = (undefined4 *)0x0;
  }
  DAT_664f087c = DAT_664f087c + 1;
  return;
}


