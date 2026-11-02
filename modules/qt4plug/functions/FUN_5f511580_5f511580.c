/* Module: qt4plug.dll
   Function: FUN_5f511580
   Address: 5f511580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f511580(undefined4 *param_1)

{
  int *piVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  
  *param_1 = &PTR_FUN_5f5964a4;
  param_1[1] = &PTR_LAB_5f596490;
  param_1[2] = &PTR_LAB_5f59647c;
  param_1[3] = &PTR_LAB_5f59646c;
  param_1[4] = &PTR_LAB_5f596458;
  if ((HWND)param_1[0xb] != (HWND)0x0) {
    BVar2 = IsWindow((HWND)param_1[0xb]);
    if (BVar2 != 0) {
      DestroyWindow((HWND)param_1[0xb]);
    }
  }
  if ((LPCVOID)param_1[0xd] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0xd]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0xd]);
    GlobalFree(pvVar3);
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    FUN_5f52b4c0((int *)param_1[0xc]);
  }
  FUN_5f513a40(param_1,param_1[8]);
  FUN_5f513a40(param_1,param_1[10]);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0xf] != 0) {
    FUN_5f5196a0(0);
  }
  return;
}


