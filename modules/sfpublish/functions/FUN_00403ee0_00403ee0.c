/* Module: sfpublish.dll
   Function: FUN_00403ee0
   Address: 00403ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403ee0(int param_1,uint param_2)

{
  int *piVar1;
  LPCSTR lpString;
  LPCWSTR lpString_00;
  int iVar2;
  int iVar3;
  uint *puVar4;
  void *this;
  uint uStack_18;
  
  uStack_18 = param_2;
  lpString_00 = (LPCWSTR)Ordinal_2();
  if (lpString_00 == (LPCWSTR)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = &uStack_18;
    iVar2 = lstrlenW(lpString_00);
    FUN_004328f0();
    uStack_18 = uStack_18 & 0xffffff00;
    WideCharToMultiByte(0,0,lpString_00,-1,(LPSTR)&uStack_18,iVar2 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
    this = (void *)0x0;
  }
  else {
    this = *(void **)(piVar1[2] + iVar2 * 4);
  }
  if (this != (void *)0x0) {
    iVar2 = FUN_004114e0(this,(uchar *)puVar4);
    if (-1 < iVar2) {
      FUN_00411700(this,(LPCSTR)puVar4,(uchar *)"NO PASSWORD");
    }
  }
  lpString = *(LPCSTR *)((int)this + 4);
  iVar2 = lstrlenA(lpString);
  FUN_004328f0();
  MultiByteToWideChar(0,1,lpString,-1,(LPWSTR)&uStack_18,iVar2 + 1);
  *(undefined2 *)(&stack0xffffffe6 + (iVar2 + 1) * 2) = 0;
  FUN_00413f30(*(HMODULE *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x20),&uStack_18,0x435728,
               (undefined4 *)0x0);
  Ordinal_6(lpString_00);
  return 0;
}


