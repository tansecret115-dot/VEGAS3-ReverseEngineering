/* Module: pncrt.dll
   Function: FUN_7800ae00
   Address: 7800ae00
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_7800ae00(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_7800ae50(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = _callnewh(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}


