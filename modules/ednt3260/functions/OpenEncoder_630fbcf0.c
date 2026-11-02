/* Module: ednt3260.dll
   Function: OpenEncoder
   Address: 630fbcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int OpenEncoder(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
                    /* 0xbcf0  2  OpenEncoder */
  pvVar1 = operator_new(0x64214);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_630fbdf0((int)pvVar1);
  }
  *param_1 = iVar2;
  return (-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e;
}


