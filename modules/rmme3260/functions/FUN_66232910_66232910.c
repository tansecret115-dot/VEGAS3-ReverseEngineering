/* Module: rmme3260.dll
   Function: FUN_66232910
   Address: 66232910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66232910(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626c058;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


