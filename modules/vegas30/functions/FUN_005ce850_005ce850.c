/* Module: vegas30.exe
   Function: FUN_005ce850
   Address: 005ce850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ce850(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  LPSTR lpString1;
  LPCSTR pCVar1;
  int iVar2;
  int iVar3;
  LPSTR lpString1_00;
  int *local_8;
  undefined4 local_4;
  
  lpString1_00 = (LPSTR)0x0;
  local_4 = 0;
  FUN_005b83b0(param_1,1);
  if (*(int *)(param_2 + 0xc) != 0) {
    pCVar1 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5265);
    iVar2 = lstrlenA(pCVar1);
    iVar3 = lstrlenA(*(LPCSTR *)(param_2 + 0xc));
    lpString1_00 = calloc(1,iVar3 + 1 + iVar2 + 1);
    if (lpString1_00 == (LPSTR)0x0) {
      return -0x7ff8fff2;
    }
    pCVar1 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5265);
    lstrcpynA(lpString1_00,pCVar1,iVar2 + 1);
    lpString1 = lpString1_00 + iVar2;
    *lpString1 = '\0';
    lstrcpynA(lpString1,*(LPCSTR *)(param_2 + 0xc),iVar3 + 1);
    lpString1[iVar3] = '\0';
  }
  iVar2 = FUN_005bad30(0,1,&local_8);
  if (-1 < iVar2) {
    iVar2 = FUN_005bcf00(local_8,0,1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_8 + 0x14))(local_8,0,0,0,0);
      if (-1 < iVar2) {
        iVar2 = FUN_005be080(local_8,1,param_1,&local_4,param_4,0);
      }
    }
    FUN_005bad50(local_8);
  }
  if (lpString1_00 != (LPSTR)0x0) {
    if (-1 < iVar2) {
      iVar2 = FUN_005cb690(param_1,local_4,lpString1_00);
    }
    free(lpString1_00);
  }
  if (-1 < iVar2) {
    iVar2 = FUN_005d2690(param_1,local_4);
  }
  FUN_005b84d0(param_1,1);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_4;
  }
  return iVar2;
}


