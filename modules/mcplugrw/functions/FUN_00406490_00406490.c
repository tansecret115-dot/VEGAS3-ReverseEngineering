/* Module: mcplugrw.dll
   Function: FUN_00406490
   Address: 00406490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406490(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_004a8134 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *DAT_004a8134;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    piVar2 = (int *)DAT_004a8134[2];
    do {
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x398) != 0) {
        if (param_3 == iVar5) {
          *param_1 = *(undefined4 *)(iVar1 + 0x20c);
          *param_2 = *(undefined4 *)(iVar1 + 0x210);
          return 1;
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar4);
  }
  return 0;
}


