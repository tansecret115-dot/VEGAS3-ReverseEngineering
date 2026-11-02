/* Module: vegas30.exe
   Function: FUN_005b8900
   Address: 005b8900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b8900(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (uint *)FUN_005b87b0(param_1);
  iVar3 = 0;
  iVar5 = 0;
  uVar1 = *puVar2;
  if (0 < (int)uVar1) {
    do {
      if ((iVar5 < 0) || ((int)((-(uint)(puVar2 != (uint *)0x0) & uVar1) - 1) < iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar2[2] + iVar5 * 4);
      }
      if (param_2 == *(int *)(iVar4 + 4)) {
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  return iVar3;
}


