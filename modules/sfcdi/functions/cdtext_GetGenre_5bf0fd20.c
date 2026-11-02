/* Module: sfcdi.dll
   Function: cdtext_GetGenre
   Address: 5bf0fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_GetGenre(struct _sfcdtext const *,unsigned long *,char *,unsigned int) */

long cdtext_GetGenre(_sfcdtext *param_1,ulong *param_2,char *param_3,uint param_4)

{
                    /* 0xfd20  216  ?cdtext_GetGenre@@YGJPBU_sfcdtext@@PAKPADI@Z */
  if (*(int *)(param_1 + 0x670) != 0) {
    *param_2 = *(ulong *)(param_1 + 0x674);
    lstrcpynA(param_3,(LPCSTR)(param_1 + 0x678),param_4);
    param_3[param_4 - 1] = '\0';
    return 0;
  }
  *param_2 = 1;
  *param_3 = '\0';
  return 0;
}


