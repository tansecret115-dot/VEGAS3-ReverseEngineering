/* Module: sfcdi.dll
   Function: cdtext_SetItemText
   Address: 5bf0fbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_SetItemText(struct _sfcdtext *,unsigned int,unsigned int,char *) */

long cdtext_SetItemText(_sfcdtext *param_1,uint param_2,uint param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  _cdtexttrkfield *p_Var3;
  
                    /* 0xfbd0  232  ?cdtext_SetItemText@@YGJPAU_sfcdtext@@IIPAD@Z */
  for (uVar1 = cdtext_GetTrackCount(param_1); uVar1 < param_2; uVar1 = uVar1 + 1) {
    iVar2 = FUN_5bf2ade0(*(int **)(param_1 + 0x498),(int *)0x0,0x47c,-1,(int *)0x0);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  p_Var3 = FUN_5bf0fb40(param_1,param_2,param_3);
  if (p_Var3 != (_cdtexttrkfield *)0x0) {
    if (param_4 == (char *)0x0) {
      *(undefined4 *)p_Var3 = 0;
      return 0;
    }
    *(undefined4 *)p_Var3 = 1;
    lstrcpynA((LPSTR)(p_Var3 + 4),param_4,0xa0);
    p_Var3[0xa3] = (_cdtexttrkfield)0x0;
  }
  return 0;
}


