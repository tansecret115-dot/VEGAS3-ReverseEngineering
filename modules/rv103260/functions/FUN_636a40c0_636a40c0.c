/* Module: rv103260.dll
   Function: FUN_636a40c0
   Address: 636a40c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_636a40c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_636a7250;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    if (*(int *)((int)param_1 + 0xae) != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(*(int *)((int)param_1 + 0xae));
      *(undefined4 *)((int)param_1 + 0xae) = 0;
    }
    if (*(int *)((int)param_1 + 0xb2) != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(*(int *)((int)param_1 + 0xb2));
      *(undefined4 *)((int)param_1 + 0xb2) = 0;
    }
    if (*(int *)((int)param_1 + 0xba) != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(*(int *)((int)param_1 + 0xba));
      *(undefined4 *)((int)param_1 + 0xba) = 0;
    }
  }
  if ((FILE *)param_1[0x1e] != (FILE *)0x0) {
    fclose((FILE *)param_1[0x1e]);
  }
  if ((FILE *)param_1[0x1d] != (FILE *)0x0) {
    fclose((FILE *)param_1[0x1d]);
  }
  FUN_636a2f80(param_1);
  return;
}


