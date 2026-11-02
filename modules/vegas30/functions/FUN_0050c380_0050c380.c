/* Module: vegas30.exe
   Function: FUN_0050c380
   Address: 0050c380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050c3c8) */

void FUN_0050c380(int param_1,int param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  piVar3 = (int *)FUN_00522a00(0xffffffff);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (param_2 < iVar4) {
    iVar4 = piVar3[1] * param_2 + piVar3[2];
    lVar5 = FUN_0050af10(*(undefined4 *)(param_1 + 0x98));
    plVar1 = (longlong *)(iVar4 + 4);
    uVar2 = *(undefined4 *)(iVar4 + 8);
    if (*plVar1 <= lVar5) {
      iVar4 = *(int *)(param_1 + 0x98);
      *(undefined4 *)(iVar4 + 0x88) = *(undefined4 *)plVar1;
      *(undefined4 *)(iVar4 + 0x8c) = uVar2;
      FUN_00538410(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x88),
                   *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x8c));
    }
  }
  return;
}


