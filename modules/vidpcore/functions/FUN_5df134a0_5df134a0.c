/* Module: vidpcore.dll
   Function: FUN_5df134a0
   Address: 5df134a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df134a0(uint param_1,uint *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  HKEY local_11c;
  HKEY local_118;
  HKEY local_114;
  undefined4 local_110;
  uint local_10c;
  int local_108;
  CHAR local_104 [260];
  
  iVar3 = -0x7fffbffb;
  FUN_5df13310(param_1,local_104,0x104);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,local_104,0,0x20019,&local_11c);
  if (LVar1 == 0) {
    iVar2 = FUN_5df142b0(local_11c);
    if (iVar2 != 0) {
      iVar2 = FUN_5df13e30(local_11c,&local_114);
      if (-1 < iVar2) {
        iVar3 = FUN_5df13e80(local_114,"00-BQ4XD-F5ZWL-S37RQ",&local_118);
        if (-1 < iVar3) {
          local_110 = 4;
          iVar3 = FUN_5df13f80(local_118,&DAT_5df38974,&local_108,&local_10c,&local_110);
          RegCloseKey(local_118);
          if ((iVar3 == 0) && (local_108 == 4)) {
            *param_2 = local_10c ^ (param_1 << 0x10 | param_1);
            iVar3 = 0;
          }
          else {
            iVar3 = -0x7fffbffb;
          }
        }
        RegCloseKey(local_114);
      }
    }
    RegCloseKey(local_11c);
    return iVar3;
  }
  return -0x7fffbffb;
}


