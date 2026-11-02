/* Module: mcplug.dll
   Function: FUN_004076f0
   Address: 004076f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004076f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_004769b8;
  FUN_00407790(param_1);
  if ((int *)param_1[0x46] != (int *)0x0) {
    FUN_00407740(param_1,(int *)param_1[0x46]);
    FUN_0042bcd0((int *)param_1[0x46]);
  }
  if (param_1[0x4a] != 0) {
    FUN_00407070((void *)param_1[1],param_1[0x4a]);
  }
  return;
}


