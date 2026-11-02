/* Module: rmto3260.dll
   Function: FUN_66304910
   Address: 66304910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66304910(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66308608;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


