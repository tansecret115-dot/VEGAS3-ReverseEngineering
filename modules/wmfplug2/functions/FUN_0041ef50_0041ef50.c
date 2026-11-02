/* Module: wmfplug2.dll
   Function: FUN_0041ef50
   Address: 0041ef50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ef50(LPCSTR param_1)

{
  LPCSTR lpString2;
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  lpString2 = param_1;
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    if (DAT_00489d98 != 0) {
      iVar1 = lstrcmpiA(param_1,&DAT_00489d7c);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00489d7c = 0;
      DAT_00489d9c = 0;
    }
    DAT_00489d98 = 1;
    lstrcpynA(&DAT_00489d7c,lpString2,0x19);
    DAT_00489d94 = 0;
    lstrcpynA((LPSTR)&param_1,lpString2,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    puVar2 = (undefined *)FUN_004790a0((char *)&param_1);
    ppuVar3 = (undefined **)&DAT_00488b90;
    do {
      if (puVar2 == *ppuVar3) {
        DAT_00489d9c = 1;
        return 0;
      }
      ppuVar3 = ppuVar3 + 1;
    } while (ppuVar3 < &PTR_u_ASFV1_00488b98);
    DAT_00489d9c = 0;
    return 0;
  }
  DAT_00489d9c = 0;
  DAT_00489d98 = 1;
  DAT_00489d7c = 0;
  return 0;
}


