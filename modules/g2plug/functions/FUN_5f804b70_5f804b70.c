/* Module: g2plug.dll
   Function: FUN_5f804b70
   Address: 5f804b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f804b70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f86ac70;
  FUN_5f804c10(param_1);
  if ((int *)param_1[0x46] != (int *)0x0) {
    FUN_5f804bc0(param_1,(int *)param_1[0x46]);
    FUN_5f81e1d0((int *)param_1[0x46]);
  }
  if (param_1[0x4a] != 0) {
    FUN_5f804ae0((void *)param_1[1],param_1[0x4a]);
  }
  return;
}


