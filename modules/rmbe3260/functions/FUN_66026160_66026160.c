/* Module: rmbe3260.dll
   Function: FUN_66026160
   Address: 66026160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66026160(HKEY param_1)

{
  HKEY pHVar1;
  int iVar2;
  LSTATUS LVar3;
  CHAR local_108 [256];
  LONG local_8;
  
  pHVar1 = param_1;
  iVar2 = FUN_6602db80(param_1 + 0xe);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(pHVar1[7].unused + 0xc))(pHVar1 + 7);
    if ((iVar2 < 0) || (pHVar1[0xc].unused == 0)) {
      iVar2 = (**(code **)(pHVar1->unused + 0x30))(pHVar1);
    }
    if ((-1 < iVar2) && (pHVar1[0xc].unused == 0)) {
      iVar2 = -0x7ffbfff9;
    }
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000000,s_Software_RealProducer_SpecialKey_6606c82c,0,0xf003f,
                        &param_1);
  if (LVar3 == 0) {
    local_8 = 0xff;
    LVar3 = RegQueryValueA(param_1,s_MaxBitrate_6606dde4,local_108,&local_8);
    if (LVar3 == 0) {
      DAT_6606dda4 = atol(local_108);
    }
  }
  RegCloseKey(param_1);
  return iVar2;
}


