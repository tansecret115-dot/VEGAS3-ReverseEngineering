/* Module: rmme3260.dll
   Function: FUN_6624bf90
   Address: 6624bf90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6624bf90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x2da];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2da] = 0;
  }
  FUN_6624c040(param_1);
  return;
}


