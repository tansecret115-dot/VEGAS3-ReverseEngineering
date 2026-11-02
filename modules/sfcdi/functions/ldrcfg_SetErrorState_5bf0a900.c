/* Module: sfcdi.dll
   Function: ldrcfg_SetErrorState
   Address: 5bf0a900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldrcfg_SetErrorState(struct tPARAMETERS_LDRCFG *,struct tCDR_ERRORDATA *) */

int ldrcfg_SetErrorState(tPARAMETERS_LDRCFG *param_1,tCDR_ERRORDATA *param_2)

{
  int iVar1;
  tPARAMETERS_LDRCFG *ptVar2;
  
                    /* 0xa900  247
                       ?ldrcfg_SetErrorState@@YGHPAUtPARAMETERS_LDRCFG@@PAUtCDR_ERRORDATA@@@Z */
  if (param_1 == (tPARAMETERS_LDRCFG *)0x0) {
    return -4;
  }
  if (param_2 == (tCDR_ERRORDATA *)0x0) {
    ptVar2 = param_1 + 0x150;
    for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)ptVar2 = 0;
      ptVar2 = ptVar2 + 4;
    }
    *(undefined2 *)ptVar2 = 0;
    return 0;
  }
  ptVar2 = param_1 + 0x150;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ptVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    ptVar2 = ptVar2 + 4;
  }
  *(undefined2 *)ptVar2 = *(undefined2 *)param_2;
  return 0;
}


