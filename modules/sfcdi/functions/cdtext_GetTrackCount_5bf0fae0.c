/* Module: sfcdi.dll
   Function: cdtext_GetTrackCount
   Address: 5bf0fae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdtext_GetTrackCount(struct _sfcdtext const *) */

int cdtext_GetTrackCount(_sfcdtext *param_1)

{
                    /* 0xfae0  218  ?cdtext_GetTrackCount@@YGHPBU_sfcdtext@@@Z */
  if (param_1 == (_sfcdtext *)0x0) {
    return 0;
  }
  if (*(int **)(param_1 + 0x498) == (int *)0x0) {
    return 0;
  }
  return **(int **)(param_1 + 0x498);
}


