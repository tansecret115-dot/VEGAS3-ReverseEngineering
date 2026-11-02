/* Module: pncrt.dll
   Function: FUN_7800d4f0
   Address: 7800d4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_7800d4f0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (*param_2 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (param_2 + DAT_7803f7f4 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_7803f7f4 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


