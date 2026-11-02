/* Module: mcmpgdec.dll
   Function: FUN_1000a798
   Address: 1000a798
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_1000a798(int param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar3 = FUN_10003828((int)piVar1,'\x05');
  if ((int)uVar3 < 0x1f) {
    bVar2 = (&DAT_1003126c)[uVar3 * 2];
    FUN_10003858(piVar1,(int)(char)(&DAT_1003126d)[uVar3 * 2]);
  }
  else {
    uVar3 = FUN_10003828((int)piVar1,'\t');
    bVar2 = (&DAT_10030ecc)[uVar3 * 2];
    FUN_10003858(piVar1,(int)(char)(&DAT_10030ecd)[uVar3 * 2]);
  }
  iVar4 = (int)(char)bVar2;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10003a04((int *)(param_1 + 0x66c),iVar4);
    if ((uVar3 >> (iVar4 - 1U & 0x1f) & 1) == 0) {
      uVar3 = (uVar3 + 1) - (1 << (bVar2 & 0x1f));
    }
  }
  return uVar3;
}


