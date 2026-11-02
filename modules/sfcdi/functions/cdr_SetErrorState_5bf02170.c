/* Module: sfcdi.dll
   Function: cdr_SetErrorState
   Address: 5bf02170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_SetErrorState(struct HSFCD__ *,struct tCDR_ERRORDATA *) */

long cdr_SetErrorState(HSFCD__ *param_1,tCDR_ERRORDATA *param_2)

{
  int iVar1;
  HSFCD__ *pHVar2;
  
                    /* 0x2170  201  ?cdr_SetErrorState@@YGJPAUHSFCD__@@PAUtCDR_ERRORDATA@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == (tCDR_ERRORDATA *)0x0) {
    pHVar2 = param_1 + 0x168;
    for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pHVar2 = 0;
      pHVar2 = pHVar2 + 4;
    }
    *(undefined2 *)pHVar2 = 0;
    return 0;
  }
  pHVar2 = param_1 + 0x168;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pHVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pHVar2 = pHVar2 + 4;
  }
  *(undefined2 *)pHVar2 = *(undefined2 *)param_2;
  return 0;
}


