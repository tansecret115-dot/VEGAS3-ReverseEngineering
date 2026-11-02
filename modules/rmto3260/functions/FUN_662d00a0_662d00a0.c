/* Module: rmto3260.dll
   Function: FUN_662d00a0
   Address: 662d00a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d00a0(void *this,int param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar4 = 0;
  pbVar2 = operator_new(uVar1);
  if (pbVar2 == (byte *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x28))(pbVar2,uVar1);
    if (uVar3 != uVar1) {
      iVar4 = -0x7ffbff7f;
    }
    if (-1 < iVar4) {
      iVar4 = FUN_662cede0(this,pbVar2,uVar1);
    }
  }
  return iVar4;
}


