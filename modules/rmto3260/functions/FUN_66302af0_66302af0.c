/* Module: rmto3260.dll
   Function: FUN_66302af0
   Address: 66302af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66302af0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_663084c0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


