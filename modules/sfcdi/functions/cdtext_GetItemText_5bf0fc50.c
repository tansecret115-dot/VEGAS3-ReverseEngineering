/* Module: sfcdi.dll
   Function: cdtext_GetItemText
   Address: 5bf0fc50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_GetItemText(struct _sfcdtext const *,unsigned int,unsigned int,char
   *,unsigned int) */

long cdtext_GetItemText(_sfcdtext *param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  uint uVar1;
  _cdtexttrkfield *p_Var2;
  
                    /* 0xfc50  217  ?cdtext_GetItemText@@YGJPBU_sfcdtext@@IIPADI@Z */
  if (*(int *)(param_1 + 0x498) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = cdtext_GetTrackCount(param_1);
  }
  if (uVar1 < param_2) {
    *param_4 = '\0';
    return -0x7ff8ffa9;
  }
  p_Var2 = FUN_5bf0fb40(param_1,param_2,param_3);
  if ((p_Var2 != (_cdtexttrkfield *)0x0) && (*(int *)p_Var2 != 0)) {
    lstrcpynA(param_4,(LPCSTR)(p_Var2 + 4),param_5);
    param_4[param_5 - 1] = '\0';
    return 0;
  }
  *param_4 = '\0';
  return 0;
}


