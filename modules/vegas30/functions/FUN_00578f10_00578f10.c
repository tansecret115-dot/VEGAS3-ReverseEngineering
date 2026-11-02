/* Module: vegas30.exe
   Function: FUN_00578f10
   Address: 00578f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00579041) */
/* WARNING: Removing unreachable block (ram,0x00579046) */
/* WARNING: Removing unreachable block (ram,0x0057904e) */

undefined8 FUN_00578f10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  int *local_118;
  int *local_114;
  undefined8 local_110;
  CHAR local_108 [259];
  undefined1 uStack_5;
  
  local_114 = (int *)0x0;
  local_110._4_4_ = 0;
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  iVar1 = FUN_00578a30();
  if ((iVar1 < 0) || (local_114 == (int *)0x0)) {
    return 0;
  }
  local_110._0_4_ = 0;
  local_118 = (int *)0x0;
  if (param_1 == 1) {
    Ordinal_2();
  }
  else {
    if (param_1 != 0) goto LAB_00578f93;
    Ordinal_2();
  }
  Ordinal_6();
  local_118 = (int *)Ordinal_2();
LAB_00578f93:
  FUN_00503050(&local_118);
  iVar1 = FUN_00578a50();
  if ((-1 < iVar1) && ((int)local_110 != 0)) {
    (**(code **)(*local_114 + 8))();
    local_118 = local_114;
    Ordinal_6();
    uVar2 = Ordinal_2();
    Ordinal_6(unaff_ESI);
    local_118 = (int *)Ordinal_2(uVar2);
    FUN_00503050(&local_118);
    iVar1 = FUN_00578a50();
    if ((-1 < iVar1) && ((int)local_110 != 0)) {
      Ordinal_6();
      iVar1 = FUN_00578e10();
      if (-1 < iVar1) {
        WideCharToMultiByte(0,0,(LPCWSTR)0x0,-1,local_108,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        uStack_5 = 0;
        local_110 = _SfTextToLongLongToken_8();
      }
      (**(code **)(*local_114 + 8))();
      local_110._0_4_ = 0;
    }
  }
  (**(code **)(*local_114 + 8))();
  local_118 = (int *)0x0;
  Ordinal_6();
  return CONCAT44((int)local_110,local_114);
}


