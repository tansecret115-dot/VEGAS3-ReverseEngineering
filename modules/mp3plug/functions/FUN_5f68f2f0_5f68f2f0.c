/* Module: mp3plug.dll
   Function: FUN_5f68f2f0
   Address: 5f68f2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f68f2f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f72cd18;
  param_1[1] = &PTR_LAB_5f72cd08;
  FUN_5f68f390(param_1);
  if ((int *)param_1[0x47] != (int *)0x0) {
    FUN_5f68f340(param_1,(int *)param_1[0x47]);
    FUN_5f6b66f0((int *)param_1[0x47]);
  }
  if (param_1[0x4b] != 0) {
    FUN_5f68f010((void *)param_1[2],param_1[0x4b]);
  }
  return;
}


