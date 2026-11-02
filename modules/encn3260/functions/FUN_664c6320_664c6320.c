/* Module: encn3260.dll
   Function: FUN_664c6320
   Address: 664c6320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c6320(int param_1)

{
  void *pvVar1;
  undefined4 *this;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0x80004005;
    return;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    pvVar1 = operator_new(0x400);
    *(void **)(param_1 + 0x5c) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0x8007000e;
      return;
    }
  }
  this = FUN_664ca810(*(undefined4 *)(param_1 + 0x52),1);
  *(undefined4 **)(param_1 + 0x60) = this;
  FUN_664ca880(this,param_1,*(char **)(param_1 + 0x58),*(int *)(param_1 + 0x5c),0x400);
  *(undefined4 *)(param_1 + 100) = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x8004004e;
  return;
}


