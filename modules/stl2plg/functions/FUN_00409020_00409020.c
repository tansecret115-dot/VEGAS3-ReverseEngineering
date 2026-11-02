/* Module: stl2plg.dll
   Function: FUN_00409020
   Address: 00409020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00409020(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (piVar1 = *(int **)(param_1 + 0x348), piVar1 != (int *)0x0)
     ) {
    (**(code **)(*piVar1 + 0x18))
              (piVar1,0,0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),
               *(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


