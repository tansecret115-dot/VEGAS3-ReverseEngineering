/* Module: encn3260.dll
   Function: FUN_664ca4c0
   Address: 664ca4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ca4c0(undefined4 *param_1)

{
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    if (((((((*(int *)((int)param_1 + 9) != 0) && (*(int *)((int)param_1 + 0xd) != 0)) &&
           (*(int *)((int)param_1 + 0x11) != 0)) &&
          ((*(int *)((int)param_1 + 0x15) != 0 && (*(int *)((int)param_1 + 0x19) != 0)))) &&
         ((((*(int *)((int)param_1 + 0x1d) != 0 &&
            ((*(int *)((int)param_1 + 0x21) != 0 && (*(int *)((int)param_1 + 0x25) != 0)))) &&
           (*(int *)((int)param_1 + 0x29) != 0)) &&
          (((*(int *)((int)param_1 + 0x2d) != 0 && (*(int *)((int)param_1 + 0x31) != 0)) &&
           (*(int *)((int)param_1 + 0x35) != 0)))))) &&
        (((*(int *)((int)param_1 + 0x39) != 0 && (*(int *)((int)param_1 + 0x3d) != 0)) &&
         ((*(int *)((int)param_1 + 0x41) != 0 &&
          ((*(int *)((int)param_1 + 0x45) != 0 && (*(int *)((int)param_1 + 0x49) != 0)))))))) &&
       (((((*(int *)((int)param_1 + 0x4d) != 0 &&
           ((((*(int *)((int)param_1 + 0x51) != 0 && (*(int *)((int)param_1 + 0x55) != 0)) &&
             (*(int *)((int)param_1 + 0x59) != 0)) &&
            ((*(int *)((int)param_1 + 0x5d) != 0 && (*(int *)((int)param_1 + 0x61) != 0)))))) &&
          (((*(int *)((int)param_1 + 0x65) != 0 &&
            ((*(int *)((int)param_1 + 0x69) != 0 && (*(int *)((int)param_1 + 0x6d) != 0)))) &&
           (*(int *)((int)param_1 + 0x81) != 0)))) &&
         ((((((*(int *)((int)param_1 + 0x85) != 0 && (*(int *)((int)param_1 + 0x89) != 0)) &&
             (*(int *)((int)param_1 + 0x8d) != 0)) &&
            ((*(int *)((int)param_1 + 0xc1) != 0 && (*(int *)((int)param_1 + 0x71) != 0)))) &&
           (*(int *)((int)param_1 + 0x75) != 0)) &&
          ((((*(int *)((int)param_1 + 0x79) != 0 && (*(int *)((int)param_1 + 0x7d) != 0)) &&
            ((*(int *)((int)param_1 + 0x95) != 0 &&
             (((*(int *)((int)param_1 + 0x91) != 0 && (*(int *)((int)param_1 + 0xb5) != 0)) &&
              (*(int *)((int)param_1 + 0x99) != 0)))))) &&
           ((*(int *)((int)param_1 + 0x9d) != 0 && (*(int *)((int)param_1 + 0xa1) != 0)))))))) &&
        ((*(int *)((int)param_1 + 0xa5) != 0 &&
         (((*(int *)((int)param_1 + 0xa9) != 0 && (*(int *)((int)param_1 + 0xbd) != 0)) &&
          ((*(int *)((int)param_1 + 0xad) != 0 &&
           ((*(int *)((int)param_1 + 0xb9) != 0 && (*(int *)((int)param_1 + 0xb1) != 0)))))))))))) {
      *param_1 = 1;
      return;
    }
    *param_1 = 0;
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


