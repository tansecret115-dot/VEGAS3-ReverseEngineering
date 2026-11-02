/* Module: vegas30k.dll
   Function: _SfSummary_Compare@8
   Address: 010ff980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSummary_Compare_8(uint *param_1,uint *param_2)

{
  LPCSTR lpString1;
  LPCSTR lpString2;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
                    /* 0xff980  1206  _SfSummary_Compare@8 */
  if (((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) || (*param_1 != *param_2)) {
    return 0;
  }
  uVar4 = 0;
  if (*param_2 != 0) {
    puVar2 = (undefined4 *)(param_2[1] + 4);
    piVar3 = (int *)(param_1[1] + 4);
    do {
      lpString1 = (LPCSTR)*puVar2;
      if (lpString1 == (LPCSTR)0x0) {
        iVar1 = *piVar3;
joined_r0x010ff9d6:
        if (iVar1 != 0) {
          return 0;
        }
      }
      else {
        lpString2 = (LPCSTR)*piVar3;
        if (lpString2 == (LPCSTR)0x0) {
          return 0;
        }
        if ((lpString1 != (LPCSTR)0x0) && (lpString2 != (LPCSTR)0x0)) {
          iVar1 = lstrcmpA(lpString1,lpString2);
          goto joined_r0x010ff9d6;
        }
      }
      puVar2 = puVar2 + 2;
      piVar3 = piVar3 + 2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_2);
  }
  return 1;
}


