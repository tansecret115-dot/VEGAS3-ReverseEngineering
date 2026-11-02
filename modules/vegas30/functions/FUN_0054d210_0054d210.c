/* Module: vegas30.exe
   Function: FUN_0054d210
   Address: 0054d210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054d210(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = param_1;
  uVar3 = 0;
  FUN_004ec4f0(param_1,1,&param_1,1);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  iVar5 = 0;
  if (iVar4 < 1) {
    iVar2 = 0;
  }
  else {
    while( true ) {
      if (iVar5 == iVar4 + -1) {
        uVar3 = 1;
      }
      iVar2 = FUN_004e39f0(*(undefined4 *)(piVar1[2] + iVar5 * 4),uVar3);
      if (iVar2 < 0) break;
      iVar5 = iVar5 + 1;
      if (iVar4 <= iVar5) {
        return iVar2;
      }
    }
  }
  return iVar2;
}


