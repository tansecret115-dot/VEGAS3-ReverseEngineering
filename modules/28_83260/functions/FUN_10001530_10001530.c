/* Module: 28_83260.dll
   Function: FUN_10001530
   Address: 10001530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10001530(void *this,int param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  iVar4 = iVar3;
  if (uVar1 <= param_2) {
    do {
      FUN_10004270(this,iVar4 * uVar1 + param_1,
                   (short *)(param_3 + iVar4 * *(int *)((int)this + 8) * 2));
      uVar1 = *(uint *)((int)this + 0xc);
      iVar3 = iVar4 + 1;
      uVar2 = (iVar4 + 2) * uVar1;
      iVar4 = iVar3;
    } while (uVar2 < param_2 || uVar2 - param_2 == 0);
  }
  *param_4 = *(int *)((int)this + 8) * iVar3 * 2;
  return 0;
}


