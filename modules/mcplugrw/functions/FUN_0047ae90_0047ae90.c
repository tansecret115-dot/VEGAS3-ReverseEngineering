/* Module: mcplugrw.dll
   Function: FUN_0047ae90
   Address: 0047ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047ae90(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  param_1[0x1b] = param_2;
  param_1[0x1c] = param_1[0x3f] + 1;
  do {
    uVar2 = FUN_0044e570(param_1 + 0x1b,0);
    if (uVar2 != 0) {
      pcVar3 = (char *)param_1[0x21];
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "zlib error";
      }
      FUN_00475b50(param_1,pcVar3);
    }
    if (param_1[0x1f] == 0) {
      FUN_00478d80(param_1,(byte *)param_1[0x29],param_1[0x2a]);
      param_1[0x1e] = param_1[0x29];
      param_1[0x1f] = param_1[0x2a];
    }
  } while (param_1[0x1c] != 0);
  if (param_1[0x38] != 0) {
    iVar1 = param_1[0x39];
    param_1[0x39] = param_1[0x38];
    param_1[0x38] = iVar1;
  }
  FUN_00479e80(param_1);
  uVar2 = *(int *)((int)param_1 + 0x146) + 1;
  *(uint *)((int)param_1 + 0x146) = uVar2;
  if ((*(uint *)((int)param_1 + 0x142) != 0) && (*(uint *)((int)param_1 + 0x142) <= uVar2)) {
    FUN_0044cfa0(param_1);
  }
  return;
}


