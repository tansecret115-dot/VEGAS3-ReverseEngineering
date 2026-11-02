/* Module: g2plug.dll
   Function: FUN_5f803400
   Address: 5f803400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f803400(undefined4 *param_1)

{
  int *piVar1;
  BOOL BVar2;
  
  *param_1 = &PTR_FUN_5f86ab34;
  param_1[1] = &PTR_LAB_5f86ab20;
  param_1[2] = &PTR_LAB_5f86ab10;
  param_1[3] = &PTR_LAB_5f86aafc;
  if ((HWND)param_1[10] != (HWND)0x0) {
    BVar2 = IsWindow((HWND)param_1[10]);
    if (BVar2 != 0) {
      DestroyWindow((HWND)param_1[10]);
    }
  }
  FUN_5f804ae0(param_1,param_1[7]);
  FUN_5f804ae0(param_1,param_1[9]);
  if (DAT_5f877464 != 0) {
    SfRealG2_Terminate();
    DAT_5f877464 = DAT_5f877464 + -1;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


