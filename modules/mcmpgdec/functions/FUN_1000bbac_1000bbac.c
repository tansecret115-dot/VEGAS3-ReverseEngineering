/* Module: mcmpgdec.dll
   Function: FUN_1000bbac
   Address: 1000bbac
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_1000bbac(uint *param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = malloc(param_2 + 0x60 + param_3 * 2);
  if (pvVar1 == (void *)0x0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    uVar2 = (int)pvVar1 + 0x1fU & 0xffffffe0;
    *param_1 = uVar2;
    uVar2 = param_2 + 0x1f + uVar2 & 0xffffffe0;
    param_1[1] = uVar2;
    param_1[2] = param_3 + 0x1f + uVar2 & 0xffffffe0;
  }
  return pvVar1;
}


