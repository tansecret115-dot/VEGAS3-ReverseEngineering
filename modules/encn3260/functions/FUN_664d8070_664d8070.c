/* Module: encn3260.dll
   Function: FUN_664d8070
   Address: 664d8070
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_664d8070(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_664d8060((int)pvVar1);
    *param_1 = iVar2;
    *(undefined4 *)(iVar2 + 8) = 0;
    return param_1;
  }
  *param_1 = 0;
  uRam00000008 = 0;
  return param_1;
}


