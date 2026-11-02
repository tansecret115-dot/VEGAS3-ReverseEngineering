/* Module: aviplug.dll
   Function: FUN_5f93e3f0
   Address: 5f93e3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93e3f0(LPCSTR param_1)

{
  LPCSTR lpString2;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  lpString2 = param_1;
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    if (DAT_5f9f4104 != 0) {
      iVar1 = lstrcmpiA(param_1,&DAT_5f9f4114);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_5f9f4114 = 0;
      DAT_5f9f4108 = 0;
    }
    DAT_5f9f4104 = 1;
    lstrcpynA(&DAT_5f9f4114,lpString2,0x19);
    DAT_5f9f412c = 0;
    lstrcpynA((LPSTR)&param_1,lpString2,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    uVar2 = FUN_5f9d5930((char *)&param_1);
    puVar3 = &DAT_5f9f2be0;
    do {
      if (uVar2 == *puVar3) {
        DAT_5f9f4108 = 1;
        return 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_5f9f2be8);
    DAT_5f9f4108 = 0;
    return 0;
  }
  DAT_5f9f4114 = 0;
  DAT_5f9f4108 = 0;
  DAT_5f9f4104 = 1;
  return 0;
}


