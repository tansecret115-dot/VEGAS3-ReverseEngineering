/* Module: qt4plug.dll
   Function: FUN_5f524490
   Address: 5f524490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f5245b8) */

bool __fastcall FUN_5f524490(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uchar local_15c [264];
  char local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596d28;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe74;
  local_34 = -0x7d5;
  local_54 = '\0';
  local_4c = 0x73706974;
  local_48 = 0x4d6f6f56;
  local_44 = 0x68696e74;
  local_40 = 0;
  local_3c = 0;
  iVar2 = 0;
  ExceptionList = &local_14;
  do {
    iVar3 = iVar2;
    iVar2 = FUN_5f580580();
    if (iVar2 == 0) break;
    sVar1 = FUN_5f5805a0();
    local_34 = (int)sVar1;
  } while (iVar2 != 0);
  if ((iVar3 != 0) && (local_38 = FUN_5f5805e0(), local_38 != 0)) {
    iVar2 = FUN_5f5782f0();
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_5f5782f0(), iVar2 != 0 && (iVar2 = FUN_5f5782f0(), iVar2 != 0)))) {
      sVar1 = FUN_5f5781d0();
      local_34 = (int)sVar1;
    }
    local_15c[0] = '\0';
    local_8 = 1;
    iVar2 = FUN_5f524830(*(uint *)(param_1 + 0x4c),local_15c,0x104);
    local_34 = FUN_5f58d500();
    local_8 = 0xffffffff;
    _fpreset();
    if (iVar2 != 0) {
      FUN_5f575f50();
    }
    if (local_15c[0] != '\0') {
      DeleteFileA((LPCSTR)local_15c);
    }
    if ((local_54 == '\0') && (local_34 == 0)) {
      FUN_5f5780d0();
      local_8 = 2;
      local_34 = FUN_5f58d730();
      local_8 = 0xffffffff;
      if (local_34 == 0) {
        iVar2 = FUN_5f5782f0();
        if (iVar2 == 0) {
          FUN_5f578250();
        }
        else {
          iVar2 = FUN_5f5782f0();
          if (iVar2 == 0) {
            FUN_5f578250();
          }
          else {
            iVar2 = FUN_5f5782f0();
            if (iVar2 != 0) {
              FUN_5f578290();
            }
            FUN_5f578270();
          }
        }
      }
      FUN_5f5780f0();
    }
    FUN_5f580600();
  }
  ExceptionList = local_14;
  return local_54 == '\0';
}


