/* Module: vegas30k.dll
   Function: displist_GetItem
   Address: 010ffe10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall displist_GetItem,8 */

int * displist_GetItem(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* 0xffe10  1363  _displist_GetItem@8 */
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *param_1) {
      piVar2 = (int *)param_1[1];
      do {
        if (*piVar2 == param_2) {
          return (int *)param_1[1] + iVar1 * 3;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar1 < *param_1);
    }
  }
  return (int *)0x0;
}


