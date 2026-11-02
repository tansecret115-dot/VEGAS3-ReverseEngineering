/* Module: vegas30.exe
   Function: FUN_00579650
   Address: 00579650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00579775) */
/* WARNING: Removing unreachable block (ram,0x0057977a) */
/* WARNING: Removing unreachable block (ram,0x00579782) */

undefined4 FUN_00579650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  int *local_50;
  int *local_4c;
  int *local_48;
  CHAR local_44 [63];
  undefined1 uStack_5;
  
  local_44[0] = '\0';
  local_44[1] = '\0';
  local_44[2] = '\0';
  local_44[3] = '\0';
  local_48 = (int *)0x0;
  iVar1 = FUN_00578a30();
  if ((iVar1 < 0) || (local_48 == (int *)0x0)) {
    return 0;
  }
  local_4c = (int *)0x0;
  local_50 = (int *)0x0;
  if (param_1 == 1) {
    Ordinal_2();
  }
  else {
    if (param_1 != 0) goto LAB_005796c7;
    Ordinal_2();
  }
  Ordinal_6();
  local_50 = (int *)Ordinal_2();
LAB_005796c7:
  FUN_00503050(&local_50);
  iVar1 = FUN_00578a50();
  if ((-1 < iVar1) && (local_4c != (int *)0x0)) {
    (**(code **)(*local_48 + 8))();
    local_4c = local_50;
    Ordinal_6();
    uVar2 = Ordinal_2();
    Ordinal_6(unaff_ESI);
    local_50 = (int *)Ordinal_2(uVar2);
    FUN_00503050(&local_50);
    iVar1 = FUN_00578a50();
    if ((-1 < iVar1) && (local_4c != (int *)0x0)) {
      Ordinal_6();
      iVar1 = FUN_00578e10();
      if (-1 < iVar1) {
        WideCharToMultiByte(0,0,(LPCWSTR)0x0,-1,local_44,0x40,(LPCSTR)0x0,(LPBOOL)0x0);
        uStack_5 = 0;
        local_48 = (int *)_SfTextToLongToken_8();
      }
      (**(code **)(*local_50 + 8))();
      local_4c = (int *)0x0;
    }
  }
  (**(code **)(*local_48 + 8))();
  local_4c = (int *)0x0;
  Ordinal_6();
  return local_4c;
}


