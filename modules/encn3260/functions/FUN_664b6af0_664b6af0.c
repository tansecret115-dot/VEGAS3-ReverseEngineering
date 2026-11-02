/* Module: encn3260.dll
   Function: FUN_664b6af0
   Address: 664b6af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664b6af0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x2da];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2da] = 0;
  }
  FUN_664b6ba0(param_1);
  return;
}


