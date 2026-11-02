/* Module: encn3260.dll
   Function: FUN_664b4dc0
   Address: 664b4dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664b4dc0(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  if ((param_2 != (int *)0x0) && (piVar1 = (int *)*param_2, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  if ((HMODULE)*param_3 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_3);
    *param_3 = 0;
  }
  return;
}


