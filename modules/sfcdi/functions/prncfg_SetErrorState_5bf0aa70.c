/* Module: sfcdi.dll
   Function: prncfg_SetErrorState
   Address: 5bf0aa70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall prncfg_SetErrorState(struct tPARAMETERS_PRNCFG *,struct tCDR_ERRORDATA *) */

int prncfg_SetErrorState(tPARAMETERS_PRNCFG *param_1,tCDR_ERRORDATA *param_2)

{
  int iVar1;
  tPARAMETERS_PRNCFG *ptVar2;
  
                    /* 0xaa70  257
                       ?prncfg_SetErrorState@@YGHPAUtPARAMETERS_PRNCFG@@PAUtCDR_ERRORDATA@@@Z */
  if (param_1 == (tPARAMETERS_PRNCFG *)0x0) {
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


