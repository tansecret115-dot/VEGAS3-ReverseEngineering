/* Module: vegas30k.dll
   Function: FUN_0102b320
   Address: 0102b320
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0102b320(int *param_1,int *param_2)

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    *param_2 = 0;
    return (int *)0x0;
  }
  piVar3 = (int *)0x0;
  iVar2 = 0;
  _Memory = param_1;
  do {
    piVar1 = (int *)*_Memory;
    if ((_Memory[3] & 0x800000U) == 0) {
      iVar2 = iVar2 + 1;
      piVar3 = _Memory;
    }
    else {
      if (param_1 == _Memory) {
        param_1 = piVar1;
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)piVar1;
      }
      free(_Memory);
    }
    _Memory = piVar1;
  } while (piVar1 != (int *)0x0);
  *param_2 = iVar2;
  return param_1;
}


