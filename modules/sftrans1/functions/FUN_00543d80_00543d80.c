/* Module: sftrans1.dll
   Function: FUN_00543d80
   Address: 00543d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00543d80(int param_1)

{
  bool bVar1;
  int _C;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int local_40;
  undefined4 local_3c;
  char local_34 [20];
  undefined1 local_20 [32];
  
  local_3c = 0;
  bVar1 = false;
  local_40 = 0;
  local_20[0] = 0;
  local_34[0] = '\0';
  _C = FUN_005431e0();
  if (_C == -1) {
    return 7;
  }
  iVar2 = isalpha(_C);
  if (iVar2 != 0) {
    puVar5 = local_20;
    iVar2 = isalpha(_C);
    while (iVar2 != 0) {
      *puVar5 = (char)_C;
      puVar5 = puVar5 + 1;
      _C = FUN_005431e0();
      iVar2 = isalpha(_C);
    }
    *puVar5 = 0;
    if (_C == 0x2d) {
      bVar1 = true;
      _C = FUN_005431e0();
      if (_C == -1) {
        return 7;
      }
    }
    iVar2 = isdigit(_C);
    if (iVar2 != 0) {
      local_3c = 1;
      pcVar6 = local_34;
      iVar2 = isdigit(_C);
      while (iVar2 != 0) {
        *pcVar6 = (char)_C;
        pcVar6 = pcVar6 + 1;
        _C = FUN_005431e0();
        iVar2 = isdigit(_C);
      }
      *pcVar6 = '\0';
      local_40 = atoi(local_34);
      if (bVar1) {
        local_40 = -local_40;
      }
      lVar4 = atol(local_34);
      *(long *)(param_1 + 0x10) = lVar4;
      if (bVar1) {
        local_40 = -local_40;
      }
    }
    if (_C != 0x20) {
      FUN_00543220(_C);
    }
    uVar3 = FUN_005443e0(local_20,local_40,local_3c);
    return uVar3;
  }
  local_20[1] = 0;
  local_20[0] = (undefined1)_C;
  uVar3 = FUN_005443e0(local_20,0,0);
  return uVar3;
}


