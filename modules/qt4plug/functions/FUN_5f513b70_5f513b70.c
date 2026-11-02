/* Module: qt4plug.dll
   Function: FUN_5f513b70
   Address: 5f513b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f513b70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f59660c;
  param_1[1] = &PTR_LAB_5f5965fc;
  FUN_5f513c10(param_1);
  if ((int *)param_1[0x47] != (int *)0x0) {
    FUN_5f513bc0(param_1,(int *)param_1[0x47]);
    FUN_5f52b4c0((int *)param_1[0x47]);
  }
  if (param_1[0x4b] != 0) {
    FUN_5f513a40((void *)param_1[2],param_1[0x4b]);
  }
  return;
}


