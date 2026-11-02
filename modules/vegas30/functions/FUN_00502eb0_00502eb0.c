/* Module: vegas30.exe
   Function: FUN_00502eb0
   Address: 00502eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00502eb0(int param_1,LPSTR param_2,int param_3)

{
  uint uVar1;
  LPCSTR lpString2;
  int iVar2;
  uint uVar3;
  
  if (DAT_0064b584 == (uint *)0x0) {
    return 0x80004005;
  }
  uVar1 = *DAT_0064b584;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      lpString2 = *(LPCSTR *)(DAT_0064b584[2] + uVar3 * 4);
      iVar2 = lstrcmpiA(lpString2 + 0x100,(LPCSTR)(param_1 + 0x810));
      if (((iVar2 == 0) &&
          (iVar2 = lstrcmpiA(lpString2 + 0x500,(LPCSTR)(param_1 + 0x410)), iVar2 == 0)) &&
         (iVar2 = lstrcmpiA(lpString2 + 0x900,(LPCSTR)(param_1 + 0x10)), iVar2 == 0)) {
        lstrcpynA(param_2,lpString2,param_3);
        param_2[param_3 + -1] = '\0';
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  lstrcpynA(param_2,"(Untitled)",param_3);
  param_2[param_3 + -1] = '\0';
  return 1;
}


