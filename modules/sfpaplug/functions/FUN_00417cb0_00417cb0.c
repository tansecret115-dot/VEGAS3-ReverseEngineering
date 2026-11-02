/* Module: sfpaplug.dll
   Function: FUN_00417cb0
   Address: 00417cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00417cb0(HMODULE param_1)

{
  int iVar1;
  
  FUN_00443060();
  FUN_00443070();
  DAT_0045c358 = FUN_00417490();
  DAT_0045c378 = param_1;
  DAT_0045c374 = FUN_00417b80(0);
  DAT_0045c5f0 = 100;
  DAT_0045c5e4 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0045c5e8 = 0;
  _DAT_0045c5f4 = 0;
  FUN_00440a30();
  FUN_004423e0(1);
  iVar1 = FUN_00416d50();
  if (-1 < iVar1) {
    iVar1 = FUN_00416510(&DAT_0045c380,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00416d60(DAT_0045c380,&PTR_s_The_reason_for_the_error_could_n_0045af08,0x1a9,4000);
      FUN_004166e0((uint *)0x0,0);
    }
  }
  FUN_00443080();
  return -1 < iVar1;
}


