/* Module: rmbe3260.dll
   Function: FUN_660576e0
   Address: 660576e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_660576e0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_660576d0((int)pvVar1);
    *param_1 = iVar2;
    *(undefined4 *)(iVar2 + 8) = 0;
    return param_1;
  }
  *param_1 = 0;
  uRam00000008 = 0;
  return param_1;
}


