/* Module: encn3260.dll
   Function: FUN_664b58d0
   Address: 664b58d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b58d0(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0x100) != 0)) {
    if ((*param_1 & 1) == 0) {
      if ((HGDIOBJ)param_1[0x21c] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0x21c]);
        param_1[0x21c] = 0;
      }
      if ((HDC)param_1[0x219] != (HDC)0x0) {
        DeleteDC((HDC)param_1[0x219]);
        param_1[0x219] = 0;
      }
      if ((HDC)param_1[0x21a] != (HDC)0x0) {
        DeleteDC((HDC)param_1[0x21a]);
        param_1[0x21a] = 0;
      }
    }
    else {
      free((void *)param_1[0x215]);
      free((void *)param_1[0x216]);
      (**(code **)(*(int *)param_1[0x2da] + 8))((int *)param_1[0x2da]);
      param_1[0x2da] = 0;
      if ((param_1[0x21b] != 0) && (param_1[0x219] != 0)) {
        FUN_664b4dc0((int *)(param_1 + 0x21a),(int *)(param_1 + 0x21b),param_1 + 0x219);
      }
    }
  }
  *param_1 = 0;
  FUN_664b5860((int)param_1);
  if ((undefined4 *)param_1[0x217] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x217])(1);
    param_1[0x217] = 0;
  }
  return 0;
}


