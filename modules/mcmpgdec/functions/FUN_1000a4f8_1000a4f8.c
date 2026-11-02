/* Module: mcmpgdec.dll
   Function: FUN_1000a4f8
   Address: 1000a4f8
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000a4f8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003828((int)piVar1,'\t');
  if ((int)uVar2 < 0x80) {
    if ((int)uVar2 < 8) {
      if ((int)uVar2 < 1) {
        if (*(int *)(param_1 + 0x60) == 0) {
          FUN_1000bb3c(param_1,"Invalid coded_block_pattern code");
        }
        *(undefined4 *)(param_1 + 0x5c) = 1;
        iVar3 = 0;
      }
      else {
        FUN_10003858(piVar1,(int)(char)(&DAT_1003114d)[uVar2 * 2]);
        iVar3 = (int)(char)(&DAT_1003114c)[uVar2 * 2];
      }
    }
    else {
      FUN_10003858(piVar1,(int)(char)(&DAT_100310cd)[uVar2 & 0xfffffffe]);
      iVar3 = (int)(char)(&DAT_100310cc)[uVar2 & 0xfffffffe];
    }
  }
  else {
    iVar3 = ((int)uVar2 >> 4) * 2;
    FUN_10003858(piVar1,(int)(char)(&DAT_1003108d)[iVar3]);
    iVar3 = (int)(char)(&DAT_1003108c)[iVar3];
  }
  return iVar3;
}


