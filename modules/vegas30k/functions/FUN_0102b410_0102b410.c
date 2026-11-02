/* Module: vegas30k.dll
   Function: FUN_0102b410
   Address: 0102b410
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0102b410(int *param_1,uint *param_2)

{
  int *piVar1;
  int *_Base;
  uint uVar2;
  uint _NumOfElements;
  
  if (param_1 == (int *)0x0) {
    *param_2 = 0;
    return (int *)0x0;
  }
  _NumOfElements = 0;
  piVar1 = param_1;
  do {
    piVar1 = (int *)*piVar1;
    _NumOfElements = _NumOfElements + 1;
  } while (piVar1 != (int *)0x0);
  *param_2 = _NumOfElements;
  _Base = calloc(1,_NumOfElements * 4);
  piVar1 = _Base;
  if (_Base != (int *)0x0) {
    do {
      *piVar1 = (int)param_1;
      param_1 = (int *)*param_1;
      piVar1 = piVar1 + 1;
    } while (param_1 != (int *)0x0);
    qsort(_Base,_NumOfElements,4,FUN_0102b380);
    uVar2 = 0;
    piVar1 = _Base;
    if (_NumOfElements != 0) {
      while( true ) {
        *(uint *)(*piVar1 + 8) = uVar2;
        uVar2 = uVar2 + 1;
        if (_NumOfElements <= uVar2) break;
        *(int *)*piVar1 = piVar1[1];
        piVar1 = piVar1 + 1;
      }
      *(int *)*piVar1 = 0;
    }
    param_1 = (int *)*_Base;
    free(_Base);
  }
  return param_1;
}


