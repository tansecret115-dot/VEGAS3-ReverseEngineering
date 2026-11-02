/* Module: cook3260.dll
   Function: FUN_633a4130
   Address: 633a4130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a4130(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_6c8 [127];
  undefined4 local_4cc [102];
  int local_334 [102];
  int local_19c [102];
  
  iVar2 = FUN_633a4990(this,local_334);
  iVar3 = FUN_633a3930(this,*(int *)((int)this + 0x24),(uint *)((int)this + 0x35c));
  piVar4 = (int *)((param_1 - iVar2) - iVar3);
  if ((int)piVar4 < 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_633a4950(this,(int)local_334,local_4cc);
  FUN_633a3ae0(this,local_334,piVar4,local_19c,local_6c8);
  FUN_633a3de0(this,(int)local_19c,local_6c8);
  FUN_633a66d0(this,local_19c,(int)local_4cc,param_2);
  return;
}


