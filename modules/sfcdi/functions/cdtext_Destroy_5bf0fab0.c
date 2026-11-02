/* Module: sfcdi.dll
   Function: cdtext_Destroy
   Address: 5bf0fab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_Destroy(struct _sfcdtext *) */

long cdtext_Destroy(_sfcdtext *param_1)

{
  int iVar1;
  
                    /* 0xfab0  210  ?cdtext_Destroy@@YGJPAU_sfcdtext@@@Z */
  if (*(int **)(param_1 + 0x498) != (int *)0x0) {
    FUN_5bf2b040(*(int **)(param_1 + 0x498));
  }
  for (iVar1 = 0x1c7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = param_1 + 4;
  }
  return 0;
}


