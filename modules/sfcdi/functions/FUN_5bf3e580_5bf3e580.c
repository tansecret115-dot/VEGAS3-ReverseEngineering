/* Module: sfcdi.dll
   Function: FUN_5bf3e580
   Address: 5bf3e580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3e580(int param_1,LPCSTR param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint **)(param_1 + 0x214) == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(uint **)(param_1 + 0x214);
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (((int)uVar5 < 0) || (iVar3 + -1 < (int)uVar5)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar1[2] + uVar5 * 4);
      }
      if ((iVar3 != 0) && (iVar2 = lstrcmpiA(param_2,(LPCSTR)(iVar3 + 0x110)), iVar2 == 0)) {
        return iVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return 0;
}


