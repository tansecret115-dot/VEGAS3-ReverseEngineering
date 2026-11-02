/* Module: encn3260.dll
   Function: FUN_6649d290
   Address: 6649d290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6649d290(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664debc0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


