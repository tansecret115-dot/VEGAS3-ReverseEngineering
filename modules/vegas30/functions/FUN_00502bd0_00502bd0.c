/* Module: vegas30.exe
   Function: FUN_00502bd0
   Address: 00502bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00502bd0(undefined4 *param_1,LPCSTR param_2)

{
  uint uVar1;
  LPCSTR lpString1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0x80004005;
  if (DAT_0064b584 == (uint *)0x0) {
    return 0x80004005;
  }
  uVar1 = *DAT_0064b584;
  uVar4 = 0;
  if (uVar1 != 0) {
    while( true ) {
      lpString1 = *(LPCSTR *)(DAT_0064b584[2] + uVar4 * 4);
      iVar2 = lstrcmpiA(lpString1,param_2);
      if (iVar2 == 0) break;
      uVar4 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return 0x80004005;
      }
    }
    pHVar3 = (HWND)*param_1;
    SetDlgItemTextA(pHVar3,0x7fb,lpString1 + 0x500);
    SetDlgItemTextA(pHVar3,0x7fd,lpString1 + 0x900);
    pHVar3 = GetDlgItem(pHVar3,2000);
    SetWindowTextA(pHVar3,lpString1 + 0x100);
    local_8 = 0;
  }
  return local_8;
}


