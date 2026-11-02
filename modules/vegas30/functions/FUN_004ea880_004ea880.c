/* Module: vegas30.exe
   Function: FUN_004ea880
   Address: 004ea880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea880(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [8];
  
  iVar2 = -0x7fffbffb;
  iVar1 = FUN_005b8630(param_1);
  if (*(char *)(iVar1 + 0x1d0) == '\x01') {
    if (*(int *)(iVar1 + 0x3ec) != 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x3e0) = 1;
    *(undefined4 *)(iVar1 + 0x3ec) = 1;
    puVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_20[0] = 0x736c6765;
    iVar2 = FUN_005b5820(local_20);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  FUN_004ea010(iVar1,iVar2);
  return iVar2;
}


