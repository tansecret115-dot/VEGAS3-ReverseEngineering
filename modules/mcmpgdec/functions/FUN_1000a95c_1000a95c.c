/* Module: mcmpgdec.dll
   Function: FUN_1000a95c
   Address: 1000a95c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000a95c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003828((int)piVar1,'\x06');
  if ((int)uVar2 < 8) {
    if (uVar2 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_1000bb3c(param_1,"Invalid macroblock_type code");
      }
      *(undefined4 *)(param_1 + 0x5c) = 1;
      iVar3 = 0;
    }
    else {
      FUN_10003858(piVar1,(int)(char)(&DAT_10030ffd)[uVar2 * 2]);
      iVar3 = (int)(char)(&DAT_10030ffc)[uVar2 * 2];
    }
  }
  else {
    iVar3 = ((int)uVar2 >> 3) * 2;
    FUN_10003858(piVar1,(int)(char)(&DAT_10030fed)[iVar3]);
    iVar3 = (int)(char)(&DAT_10030fec)[iVar3];
  }
  return iVar3;
}


