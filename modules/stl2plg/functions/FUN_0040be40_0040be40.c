/* Module: stl2plg.dll
   Function: FUN_0040be40
   Address: 0040be40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040be40(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x368) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x364), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x18))
              (piVar1,0,0,0,0,*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 0x368));
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  return;
}


