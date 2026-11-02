/* Module: vegas30.exe
   Function: FUN_004775b0
   Address: 004775b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004775b0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  short sVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x218);
  iVar2 = *(int *)(iVar1 + 0x20);
  uVar5 = *(uint *)(iVar1 + 0x10) - *(uint *)(param_1 + 0x18);
  dVar3 = (double)CONCAT44((param_3 -
                           ((*(int *)(iVar1 + 0x14) - *(int *)(param_1 + 0x1c)) -
                           (uint)(*(uint *)(iVar1 + 0x10) < *(uint *)(param_1 + 0x18)))) -
                           (uint)(param_2 < uVar5),param_2 - uVar5) *
          ((double)(*(int *)(iVar1 + 0x28) - iVar2) / (double)*(longlong *)(iVar1 + 0x18));
  if (dVar3 < _DAT_00612ac8) {
    return iVar2 + -0x8000;
  }
  if (_DAT_00612ac0 < dVar3) {
    return iVar2 + 0x7fff;
  }
  sVar4 = ftol();
  return sVar4 + iVar2;
}


