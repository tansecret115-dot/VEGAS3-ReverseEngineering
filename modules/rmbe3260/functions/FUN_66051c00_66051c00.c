/* Module: rmbe3260.dll
   Function: FUN_66051c00
   Address: 66051c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66051c00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068910;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


