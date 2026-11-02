/* Module: vegas30k.dll
   Function: FUN_010730c0
   Address: 010730c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010730c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x21c);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = 0;
  iVar5 = 0;
  while( true ) {
    piVar2 = *(int **)(iVar1 + 0x214);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if (iVar3 <= iVar5) break;
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if ((iVar5 < 0) || (iVar3 + -1 < iVar5)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar2[2] + iVar5 * 4);
    }
    if (iVar3 != param_1) {
      iVar3 = lstrcmpA((LPCSTR)(iVar3 + 0x110),(LPCSTR)(param_1 + 0x110));
      if (iVar3 == 0) {
        uVar4 = 0x8004e032;
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x40;
      }
    }
    iVar5 = iVar5 + 1;
  }
  return uVar4;
}


