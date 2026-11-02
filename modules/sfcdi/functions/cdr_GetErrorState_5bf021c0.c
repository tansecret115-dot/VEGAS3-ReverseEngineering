/* Module: sfcdi.dll
   Function: cdr_GetErrorState
   Address: 5bf021c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetErrorState(struct HSFCD__ *,struct tCDR_ERRORDATA *) */

long cdr_GetErrorState(HSFCD__ *param_1,tCDR_ERRORDATA *param_2)

{
  int iVar1;
  HSFCD__ *pHVar2;
  
                    /* 0x21c0  177  ?cdr_GetErrorState@@YGJPAUHSFCD__@@PAUtCDR_ERRORDATA@@@Z */
  if (param_2 == (tCDR_ERRORDATA *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_1 == (HSFCD__ *)0x0) {
    for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)param_2 = 0;
      param_2 = param_2 + 4;
    }
    *(undefined2 *)param_2 = 0;
    return -0x7ff8ffa9;
  }
  pHVar2 = param_1 + 0x168;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_2 = *(undefined4 *)pHVar2;
    pHVar2 = pHVar2 + 4;
    param_2 = param_2 + 4;
  }
  *(undefined2 *)param_2 = *(undefined2 *)pHVar2;
  return 0;
}


