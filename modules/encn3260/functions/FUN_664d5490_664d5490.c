/* Module: encn3260.dll
   Function: FUN_664d5490
   Address: 664d5490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d5490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664dff90;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


