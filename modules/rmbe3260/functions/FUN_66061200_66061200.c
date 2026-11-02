/* Module: rmbe3260.dll
   Function: FUN_66061200
   Address: 66061200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66061200(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068f60;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


