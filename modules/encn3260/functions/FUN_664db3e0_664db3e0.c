/* Module: encn3260.dll
   Function: FUN_664db3e0
   Address: 664db3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664db3e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664dfc28;
  param_1[1] = &PTR_LAB_664dfc10;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  return;
}


