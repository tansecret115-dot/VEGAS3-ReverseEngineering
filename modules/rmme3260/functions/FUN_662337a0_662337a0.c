/* Module: rmme3260.dll
   Function: FUN_662337a0
   Address: 662337a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662337a0(UINT_PTR *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  UINT_PTR *local_8;
  
  bVar1 = (byte)param_1[3];
  *(byte *)(param_1 + 3) = bVar1 | 2;
  if ((bVar1 & 1) == 0) {
    return 0;
  }
  *(byte *)(param_1 + 3) = bVar1 & 0xfe | 2;
  if ((bVar1 & 4) == 0) {
    local_8 = param_1;
    KillTimer((HWND)0x0,*param_1);
    local_8 = (UINT_PTR *)0x0;
    iVar3 = FUN_66256d40(&DAT_6627ce20,*param_1,&local_8);
    if ((iVar3 == 0) || (local_8[1] != *param_1)) goto LAB_662338a0;
    FUN_66256d80(&DAT_6627ce20,*param_1);
  }
  else {
    bVar2 = false;
    local_8 = (UINT_PTR *)0x0;
    if (*param_1 != 0) {
      KillTimer((HWND)0x0,*param_1);
      iVar3 = FUN_66256d40(&DAT_6627ce20,*param_1,&local_8);
      if (iVar3 != 0) {
        FUN_66256d80(&DAT_6627ce20,*param_1);
        operator_delete(local_8);
        local_8 = (UINT_PTR *)0x0;
        bVar2 = true;
      }
    }
    if (param_1[1] == 0) goto LAB_662338a0;
    KillTimer((HWND)0x0,param_1[1]);
    iVar3 = FUN_66256d40(&DAT_6627ce20,param_1[1],&local_8);
    if ((iVar3 == 0) || (FUN_66256d80(&DAT_6627ce20,param_1[1]), bVar2)) goto LAB_662338a0;
  }
  operator_delete(local_8);
LAB_662338a0:
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}


