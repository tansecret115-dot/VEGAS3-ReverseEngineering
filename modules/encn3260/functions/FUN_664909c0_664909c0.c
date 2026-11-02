/* Module: encn3260.dll
   Function: FUN_664909c0
   Address: 664909c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664909c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  *(int **)((int)this + 0x14) = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  *(int **)((int)this + 0x74) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  *(undefined4 *)((int)this + 0x78) = 0;
  if ((*(int *)((int)this + 0xc2) != 0) && (*(int *)((int)this + 0x30) != 0)) {
    (**(code **)**(undefined4 **)((int)this + 0x74))
              (*(undefined4 **)((int)this + 0x74),&DAT_664dc810,(undefined4 *)((int)this + 0x78));
    (**(code **)*param_1)(param_1,&DAT_664dc6a0,(int)this + 0xca);
  }
  if ((param_1 != (undefined4 *)0x0) && (iVar1 = FUN_6648e120(this,param_1), iVar1 != 0)) {
    return iVar1;
  }
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_66493200(pvVar2,this);
  }
  *(int **)((int)this + 0x92) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)((int)this + 0x96) = 0;
    (**(code **)(iRam00000000 + 4))(0);
    return 0;
  }
  piVar3 = FUN_66493420(pvVar2,this);
  *(int **)((int)this + 0x96) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  return 0;
}


