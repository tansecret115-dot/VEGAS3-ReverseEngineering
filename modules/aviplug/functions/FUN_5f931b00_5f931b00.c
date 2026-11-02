/* Module: aviplug.dll
   Function: FUN_5f931b00
   Address: 5f931b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f931b00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  *param_1 = &PTR_LAB_5f9d7714;
  param_1[1] = &PTR_LAB_5f9d76f0;
  param_1[2] = &PTR_LAB_5f9d76d4;
  if (piVar1 != (int *)0x0) {
    param_1[3] = param_1[3] + 1;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[4] != 0) {
    WaitForSingleObject(DAT_5f9f410c,0xffffffff);
    DAT_5f9f4134 = 0;
    ReleaseMutex(DAT_5f9f410c);
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


