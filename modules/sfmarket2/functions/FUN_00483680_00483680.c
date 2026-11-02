/* Module: sfmarket2.dll
   Function: FUN_00483680
   Address: 00483680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483680(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  param_1[0x1b] = param_2;
  param_1[0x1c] = param_1[0x3f] + 1;
  do {
    uVar2 = FUN_00445780(param_1 + 0x1b,0);
    if (uVar2 != 0) {
      pcVar3 = (char *)param_1[0x21];
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "zlib error";
      }
      FUN_0047e340(param_1,pcVar3);
    }
    if (param_1[0x1f] == 0) {
      FUN_00481570(param_1,(byte *)param_1[0x29],param_1[0x2a]);
      param_1[0x1e] = param_1[0x29];
      param_1[0x1f] = param_1[0x2a];
    }
  } while (param_1[0x1c] != 0);
  if (param_1[0x38] != 0) {
    iVar1 = param_1[0x39];
    param_1[0x39] = param_1[0x38];
    param_1[0x38] = iVar1;
  }
  FUN_00482670(param_1);
  uVar2 = *(int *)((int)param_1 + 0x146) + 1;
  *(uint *)((int)param_1 + 0x146) = uVar2;
  if ((*(uint *)((int)param_1 + 0x142) != 0) && (*(uint *)((int)param_1 + 0x142) <= uVar2)) {
    FUN_00455610(param_1);
  }
  return;
}


