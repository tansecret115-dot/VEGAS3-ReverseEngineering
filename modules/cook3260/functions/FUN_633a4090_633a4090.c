/* Module: cook3260.dll
   Function: FUN_633a4090
   Address: 633a4090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a4090(void *this,float *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int local_6c8 [127];
  undefined4 local_4cc [102];
  undefined4 local_334 [102];
  int local_19c [102];
  
  FUN_633a47a0(this,param_1,local_19c);
  iVar2 = FUN_633a4830(this,local_19c);
  piVar3 = (int *)((int)param_2 + (-*(int *)((int)this + 0x24) - iVar2));
  if ((int)piVar3 < 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_633a4950(this,(int)local_19c,local_4cc);
  FUN_633a3ae0(this,local_19c,piVar3,local_334,local_6c8);
  FUN_633a3e20(this,(int)param_1,(int)local_4cc,(int)piVar3,(int)local_334,local_6c8);
  FUN_633a3f70(this,param_2);
  return;
}


