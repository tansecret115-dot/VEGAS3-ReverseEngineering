/* Module: vegas30.exe
   Function: FUN_004faf40
   Address: 004faf40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004faf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar4 = 0;
  iVar1 = **(int **)(param_1 + 0x178);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x88);
  if (0 < iVar1) {
    do {
      FUN_0050aaa0(*(int *)(*(int *)(*(int *)(iVar3 + 0x178) + 8) + iVar4 * 4) + 0x48,&param_1);
      FUN_004fae10(uVar2,iVar4,iVar4,param_1,0x103,(-(uint)(iVar4 != 0) & 0xfffffffe) + 2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


