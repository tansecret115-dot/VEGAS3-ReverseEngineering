/* Module: encn3260.dll
   Function: FUN_664a2eb0
   Address: 664a2eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a2eb0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10d);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10d) = 0;
  }
  FreeLibrary(*(HMODULE *)(param_1 + 0x109));
  *(undefined4 *)(param_1 + 0x109) = 0;
  return;
}


