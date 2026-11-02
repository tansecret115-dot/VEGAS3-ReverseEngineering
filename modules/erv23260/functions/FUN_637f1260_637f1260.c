/* Module: erv23260.dll
   Function: FUN_637f1260
   Address: 637f1260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f1260(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_63829060;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  param_1[0x10] = 0;
  FUN_637f2030(param_1);
  return;
}


