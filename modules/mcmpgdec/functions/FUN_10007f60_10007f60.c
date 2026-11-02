/* Module: mcmpgdec.dll
   Function: FUN_10007f60
   Address: 10007f60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10007f60(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(int *)(param_1 + 0x70) == 0) || (*(int *)(param_1 + 0x134) < 0xaf1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),3);
  }
  piVar4 = (int *)(param_1 + 0x66c);
  uVar2 = FUN_10003a04(piVar4,5);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (*(int *)(param_1 + 0x658) == 0) {
      uVar2 = uVar2 * 2;
    }
    else {
      uVar2 = *(uint *)(&DAT_10027200 + uVar2 * 4);
    }
  }
  *(uint *)(param_1 + 0x660) = uVar2;
  while( true ) {
    iVar3 = FUN_1000383c(piVar4);
    if (iVar3 == 0) break;
    FUN_10003858(piVar4,8);
  }
  *(undefined4 *)(param_1 + 0x664) = 0;
  return uVar1;
}


