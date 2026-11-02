/* Module: sfxpfx1.dll
   Function: FUN_5c97b2dd
   Address: 5c97b2dd
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c97b2dd(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


