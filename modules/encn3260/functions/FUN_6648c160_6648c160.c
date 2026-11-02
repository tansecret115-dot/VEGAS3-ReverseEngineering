/* Module: encn3260.dll
   Function: FUN_6648c160
   Address: 6648c160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6648c160(int *param_1,int param_2,int *param_3)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = param_2;
  this = param_1;
  if (param_2 == 0) {
    (**(code **)(*param_1 + 4))(param_1);
    (**(code **)(**(int **)((int)this + 0x6e) + 4))();
    piVar4 = param_3;
    uVar2 = (**(code **)(*param_3 + 0x18))(param_3);
    uVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,uVar2);
    FUN_6648b4c0(this,uVar2,(uint)piVar4);
    piVar4 = (int *)this[0xf];
    if ((piVar4 != (int *)0x0) && (this[0x19] == 0)) {
      (**(code **)(*piVar4 + 0x1c))(piVar4,0x1000);
    }
    (**(code **)(**(int **)((int)this + 0x6e) + 8))();
    (**(code **)(*this + 8))(this);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(**(int **)((int)this + 0x6e) + 4))();
  param_1 = (int *)this[0x11];
  while (param_1 != (int *)0x0) {
    puVar3 = (undefined4 *)FUN_664bab40((int *)&param_1);
    (**(code **)(**(int **)(*(int *)*puVar3 + 0x68) + 0x54))
              (*(int **)(*(int *)*puVar3 + 0x68),iVar1);
  }
  (**(code **)(**(int **)((int)this + 0x6e) + 8))();
  (**(code **)(*this + 8))(this);
  return 0;
}


