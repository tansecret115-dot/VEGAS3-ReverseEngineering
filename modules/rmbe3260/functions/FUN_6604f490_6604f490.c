/* Module: rmbe3260.dll
   Function: FUN_6604f490
   Address: 6604f490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604f490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068750;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}


