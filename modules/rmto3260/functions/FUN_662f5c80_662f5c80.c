/* Module: rmto3260.dll
   Function: FUN_662f5c80
   Address: 662f5c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f5c80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_66307e78;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}


