/* Module: vegas30.exe
   Function: FUN_004ea450
   Address: 004ea450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea450(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [8];
  
  iVar2 = -0x7fffbffb;
  iVar1 = FUN_005b8630(param_1);
  if (*(char *)(iVar1 + 0x1d0) == '\x01') {
    *(undefined4 *)(iVar1 + 0x3e0) = 1;
    puVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (param_2 != 0x10) {
      FUN_004ea010(iVar1,0x80004005);
      return -0x7fffbffb;
    }
    local_20[0] = 0x6f6c6b74;
    iVar2 = FUN_005b5820(local_20);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  FUN_004ea010(iVar1,iVar2);
  return iVar2;
}


