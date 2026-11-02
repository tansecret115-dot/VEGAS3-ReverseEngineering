/* Module: atrc3260.dll
   Function: FUN_68001e40
   Address: 68001e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_68001e40(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 2);
  uVar2 = *(uint *)((int)this + 0x1e);
  iVar4 = 0;
  *param_2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x12)) {
    do {
      if (iVar4 != 0) break;
      sVar3 = (**(code **)((int)this + 0x4e))
                        (*(undefined4 *)((int)this + 0x32),0,0xffffffff,param_1 + *param_2 * 2);
      iVar4 = (int)sVar3;
      iVar5 = iVar5 + 1;
      *param_2 = *param_2 + (uint)(iVar1 << 1) / uVar2;
    } while (iVar5 < *(int *)((int)this + 0x12));
  }
  *(int *)((int)this + 10) = *(int *)((int)this + 0xe) * *(int *)((int)this + 0x26) * 2;
  return iVar4;
}


