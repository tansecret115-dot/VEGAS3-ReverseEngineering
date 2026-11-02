/* Module: encn3260.dll
   Function: FUN_66491f20
   Address: 66491f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66491f20(void *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = operator_new(3);
  *puVar1 = 0;
  puVar1[1] = 0xff;
  puVar1[2] = 3;
  FUN_66492030(param_1,puVar1,3);
  return;
}


