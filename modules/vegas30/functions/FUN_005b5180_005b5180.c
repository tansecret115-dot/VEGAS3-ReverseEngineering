/* Module: vegas30.exe
   Function: FUN_005b5180
   Address: 005b5180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b5180(uint *param_1)

{
  int *piVar1;
  
  if ((HANDLE)param_1[0x46] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x46]);
    param_1[0x46] = 0;
  }
  piVar1 = (int *)param_1[0x45];
  if (piVar1 != (int *)0x0) {
    *param_1 = *param_1 & 0xfffffffe;
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x45] = 0;
  }
  return;
}


