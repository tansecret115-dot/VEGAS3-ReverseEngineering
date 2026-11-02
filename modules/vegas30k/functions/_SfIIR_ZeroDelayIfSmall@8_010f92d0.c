/* Module: vegas30k.dll
   Function: _SfIIR_ZeroDelayIfSmall@8
   Address: 010f92d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfIIR_ZeroDelayIfSmall_8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0xf92d0  1025  _SfIIR_ZeroDelayIfSmall@8 */
  if (0 < param_1) {
    piVar3 = (int *)(param_2 + 200);
    do {
      iVar2 = 0;
      if (0 < *piVar3) {
        piVar1 = piVar3 + -0x12;
        do {
          if ((piVar1[1] & 0x7ff00000U) < 0x3df00000) {
            *piVar1 = 0;
            piVar1[1] = 0;
          }
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 2;
        } while (iVar2 < *piVar3);
      }
      piVar3 = piVar3 + 0x38;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


