/* Module: vegas30.exe
   Function: FUN_004edbe0
   Address: 004edbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004edbe0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (param_1 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar1 = *param_1;
  bVar3 = false;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = *(int *)(param_1[2] + iVar6 * 4);
      iVar2 = *(int *)(iVar4 + 0x208);
      if ((iVar2 == 2) || ((3 < iVar2 && (iVar2 < 6)))) {
        iVar4 = FUN_004053c0(iVar4);
        if (iVar4 == 0) {
          iVar5 = -0x7fffbffb;
        }
        bVar3 = true;
      }
    } while ((-1 < iVar5) && (((param_2 != 0 || (!bVar3)) && (iVar6 = iVar6 + 1, iVar6 < iVar1))));
  }
  return iVar5;
}


