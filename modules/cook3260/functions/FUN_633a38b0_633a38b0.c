/* Module: cook3260.dll
   Function: FUN_633a38b0
   Address: 633a38b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a38b0(void *this,int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 < 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = param_1 << (0x20U - (char)param_2 & 0x1f);
  **(uint **)((int)this + 0x479c) =
       **(uint **)((int)this + 0x479c) | uVar2 >> ((byte)*(undefined4 *)((int)this + 0x47a0) & 0x1f)
  ;
  iVar3 = *(int *)((int)this + 0x47a0) + param_2;
  *(int *)((int)this + 0x47a0) = iVar3;
  if (0x1f < iVar3) {
    piVar4 = (int *)(*(int *)((int)this + 0x479c) + 4);
    *(int **)((int)this + 0x479c) = piVar4;
    iVar3 = iVar3 + -0x20;
    *(int *)((int)this + 0x47a0) = iVar3;
    if (iVar3 != 0) {
      *piVar4 = uVar2 << ((char)param_2 - (char)iVar3 & 0x1fU);
    }
  }
  return;
}


