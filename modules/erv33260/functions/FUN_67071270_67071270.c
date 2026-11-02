/* Module: erv33260.dll
   Function: FUN_67071270
   Address: 67071270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67071270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_67090058;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  param_1[0x10] = 0;
  FUN_67072160(param_1);
  return;
}


