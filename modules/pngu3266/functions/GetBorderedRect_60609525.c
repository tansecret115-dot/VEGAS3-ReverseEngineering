/* Module: pngu3266.dll
   Function: GetBorderedRect
   Address: 60609525
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::GetBorderedRect(class CPNxRect &,unsigned long) */

void __cdecl CPNDrawHelper::GetBorderedRect(CPNxRect *param_1,ulong param_2)

{
                    /* 0x19525  1102  ?GetBorderedRect@CPNDrawHelper@@SAXAAVCPNxRect@@K@Z */
  if (param_2 == 1) {
    *(int *)param_1 = *(int *)param_1 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -2;
    return;
  }
  if (param_2 == 2) {
    *(int *)param_1 = *(int *)param_1 + 2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
  }
  else {
    if ((param_2 != 3) && (param_2 != 4)) {
      return;
    }
    *(int *)param_1 = *(int *)param_1 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return;
}


