/* Module: sfcdi.dll
   Function: FUN_5bf0a150
   Address: 5bf0a150
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR FUN_5bf0a150(uint *param_1,LPCSTR param_2)

{
  uint uVar1;
  LPCSTR lpString1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      lpString1 = *(LPCSTR *)(param_1[2] + uVar3 * 4);
      iVar2 = lstrcmpA(lpString1,param_2);
      if ((iVar2 == 0) && (iVar2 = lstrcmpA(lpString1 + 10,param_2 + 10), iVar2 == 0)) {
        return lpString1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return (LPCSTR)0x0;
}


