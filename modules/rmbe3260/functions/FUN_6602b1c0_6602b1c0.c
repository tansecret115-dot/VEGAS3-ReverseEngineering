/* Module: rmbe3260.dll
   Function: FUN_6602b1c0
   Address: 6602b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6602b1c0(int *param_1,uint param_2)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    return -0x7fffbffb;
  }
  pvVar1 = operator_new(param_2);
  *param_1 = (int)pvVar1;
  return (-(uint)(pvVar1 != (void *)0x0) & 0x7fffbffb) + 0x80004005;
}


