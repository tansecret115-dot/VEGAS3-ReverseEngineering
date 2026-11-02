/* Module: sfcdi.dll
   Function: cdtext_SetGenre
   Address: 5bf0fcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_SetGenre(struct _sfcdtext *,unsigned long,char *) */

long cdtext_SetGenre(_sfcdtext *param_1,ulong param_2,char *param_3)

{
                    /* 0xfcd0  231  ?cdtext_SetGenre@@YGJPAU_sfcdtext@@KPAD@Z */
  if (param_3 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x670) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x670) = 1;
  *(ulong *)(param_1 + 0x674) = param_2;
  lstrcpynA((LPSTR)(param_1 + 0x678),param_3,0xa0);
  param_1[0x717] = (_sfcdtext)0x0;
  return 0;
}


