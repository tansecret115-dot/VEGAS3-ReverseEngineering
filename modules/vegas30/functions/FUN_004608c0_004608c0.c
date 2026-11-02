/* Module: vegas30.exe
   Function: FUN_004608c0
   Address: 004608c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004608c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2;
  iVar1 = param_1;
  uVar3 = 0;
  while( true ) {
    FUN_004606f0(iVar1,*(int *)(*(int *)(iVar1 + 0x69c) + 0x24) -
                       *(int *)(*(int *)(iVar1 + 0x69c) + 0x1c),uVar3,&param_1,&param_2);
    if ((param_1 <= iVar2) && (iVar2 < param_1 + param_2)) break;
    uVar3 = uVar3 + 1;
    if (2 < (int)uVar3) {
      return 0xfffffffe;
    }
  }
  if (uVar3 == 2) {
    if (((*(uint *)(iVar1 + 0x10) & 0x40000) == 0) || ((*(uint *)(iVar1 + 0x10) & 0x10000) != 0)) {
      uVar3 = 0;
    }
    else if (param_3 != 0) {
      return (uint)(param_2 / 2 <= iVar2 - param_1);
    }
  }
  return uVar3;
}


