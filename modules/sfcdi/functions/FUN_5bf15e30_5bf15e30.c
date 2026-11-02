/* Module: sfcdi.dll
   Function: FUN_5bf15e30
   Address: 5bf15e30
   Source: Ghidra pseudocode (Stage 10 batch) */


_toc * FUN_5bf15e30(HSFCD__ *param_1,uint param_2,uint param_3)

{
  tPARAMETERS_DEVDES *ptVar1;
  long lVar2;
  HGLOBAL hMem;
  _toc *p_Var3;
  
  p_Var3 = (_toc *)0x0;
  if (((param_1 != (HSFCD__ *)0x0) && (param_2 < *(uint *)param_1)) &&
     (ptVar1 = *(tPARAMETERS_DEVDES **)(*(int *)(param_1 + 8) + param_2 * 4),
     ptVar1 != (tPARAMETERS_DEVDES *)0x0)) {
    lVar2 = cdr_Open(ptVar1,&param_1);
    if (-1 < lVar2) {
      hMem = GlobalAlloc(0x42,0x1d90);
      p_Var3 = GlobalLock(hMem);
      if (p_Var3 != (_toc *)0x0) {
        cdr_ReadTOC(param_1,p_Var3,param_3,(_func_int_void_ptr_uint_long *)0x0);
      }
      cdr_Close(param_1);
    }
  }
  return p_Var3;
}


