/* Module: vegas30k.dll
   Function: _SfSummary_GetItemIndex@8
   Address: 010ff890
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfSummary_GetItemIndex_8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* 0xff890  1209  _SfSummary_GetItemIndex@8 */
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = (int *)param_1[1];
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *param_1);
  }
  return -0x7ffb1ff6;
}


