/* Module: sfpublish.dll
   Function: FUN_00404140
   Address: 00404140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404140(int param_1,uint param_2)

{
  int *piVar1;
  LPCWSTR lpString;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  void *this;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uStack_14;
  
  uStack_14 = param_2;
  lpString = (LPCWSTR)Ordinal_2();
  if (lpString == (LPCWSTR)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = &uStack_14;
    iVar2 = lstrlenW(lpString);
    FUN_004328f0();
    uStack_14 = uStack_14 & 0xffffff00;
    WideCharToMultiByte(0,0,lpString,-1,(LPSTR)&uStack_14,iVar2 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar2 < 0) || (iVar4 + -1 < iVar2)) {
    this = (void *)0x0;
  }
  else {
    this = *(void **)(piVar1[2] + iVar2 * 4);
  }
  if (this != (void *)0x0) {
    iVar2 = FUN_00411590(this,(LPCSTR)puVar5);
    if (iVar2 < 0) {
      pcVar9 = "DeleteAccount() could not delete user \'%s\' for provider \'%s\' hr=%x";
      uVar8 = 0x46d;
      pcVar7 = "sfpub.cpp";
      uVar6 = 1;
      puVar3 = FUN_004012b0();
      FUN_00415b60((int)puVar3,uVar6,pcVar7,uVar8,pcVar9);
    }
  }
  Ordinal_6(lpString);
  return 0;
}


