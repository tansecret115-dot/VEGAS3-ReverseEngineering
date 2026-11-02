/* Module: sfcdi.dll
   Function: FUN_5bf0d250
   Address: 5bf0d250
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5bf0d250(void)

{
  long lVar1;
  int iVar2;
  _toc *p_Var3;
  undefined4 *puVar4;
  HSFCD__ *in_stack_00001d94;
  _toc *in_stack_00001d98;
  
  FUN_5bf52dd0();
  puVar4 = (undefined4 *)register0x00000010;
  for (iVar2 = 0x764; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  cdr_ReadTOC(in_stack_00001d94,(_toc *)&stack0x00000000,0x8020,(_func_int_void_ptr_uint_long *)0x0)
  ;
  FUN_5bf2bd60((uint *)&stack0x0000000c);
  puVar4 = (undefined4 *)register0x00000010;
  for (iVar2 = 0x764; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  cdr_ReadTOC(in_stack_00001d94,(_toc *)&stack0x00000000,0x4020,(_func_int_void_ptr_uint_long *)0x0)
  ;
  FUN_5bf2bd60((uint *)&stack0x0000000c);
  iVar2 = 0x764;
  puVar4 = (undefined4 *)register0x00000010;
  p_Var3 = in_stack_00001d98;
  if (in_stack_00001d98 == (_toc *)0x0) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    lVar1 = cdr_ReadTOC(in_stack_00001d94,(_toc *)&stack0x00000000,0xc020,
                        (_func_int_void_ptr_uint_long *)0x0);
    FUN_5bf2bd60((uint *)&stack0x0000000c);
    return lVar1;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = p_Var3 + 4;
  }
  lVar1 = cdr_ReadTOC(in_stack_00001d94,in_stack_00001d98,0xc020,(_func_int_void_ptr_uint_long *)0x0
                     );
  return lVar1;
}


