/* Module: rmme3260.dll
   Function: FUN_662657f0
   Address: 662657f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662657f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626d478;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


