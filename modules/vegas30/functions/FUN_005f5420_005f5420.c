/* Module: vegas30.exe
   Function: FUN_005f5420
   Address: 005f5420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f5420(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_0062cd78;
  param_1[1] = &PTR_LAB_0062cd60;
  if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
    FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  return;
}


