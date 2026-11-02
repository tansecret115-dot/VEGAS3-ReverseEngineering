/* Module: vidcap30.exe
   Function: FUN_00420340
   Address: 00420340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00420340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if ((*param_1 == 5) && (iVar4 = 0, 0 < param_1[0x7f])) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00420310(param_1,*(undefined4 *)(param_1[0x7e] + 4 + iVar2));
      iVar2 = iVar2 + 0x14;
      iVar3 = iVar3 + (uint)(iVar1 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0x7f]);
    return iVar3;
  }
  return 0;
}


