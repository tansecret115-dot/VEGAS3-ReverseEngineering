/* Module: rmto3260.dll
   Function: FUN_662fcef0
   Address: 662fcef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662fcef0(void *this,uint *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *this_00;
  undefined2 extraout_var;
  
  uVar1 = *param_1;
  *param_1 = 0x10;
  piVar2 = operator_new(0x10);
  if (piVar2 == (int *)0x0) {
    *param_1 = 0;
    return (int *)0x0;
  }
  iVar3 = FUN_662f2c20(0x2e7261fd);
  *piVar2 = iVar3;
  iVar3 = FUN_662f2bd0(this_00,5);
  *(short *)(piVar2 + 1) = (short)iVar3;
  iVar3 = FUN_662f2bd0((void *)CONCAT22(extraout_var,*(ushort *)((int)this + 0x3a)),
                       *(ushort *)((int)this + 0x3a));
  *(short *)((int)piVar2 + 6) = (short)iVar3;
  iVar3 = FUN_662f2c20(0x2e726135);
  piVar2[2] = iVar3;
  iVar3 = FUN_662f2c20(uVar1);
  piVar2[3] = iVar3;
  return piVar2;
}


