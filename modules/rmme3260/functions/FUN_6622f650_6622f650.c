/* Module: rmme3260.dll
   Function: FUN_6622f650
   Address: 6622f650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6622f650(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)this = &PTR_LAB_6626bf30;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626be40;
  *puVar1 = &PTR_LAB_6626be3c;
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xf0;
  *(undefined4 *)((int)this + 0x2d) = 0;
  FUN_662509f0((undefined4 *)((int)this + 0x31));
  FUN_662509f0((undefined4 *)((int)this + 0x45));
  *(undefined4 *)((int)this + 0x59) = 0;
  *(undefined4 *)((int)this + 0x5d) = 0;
  *(undefined4 *)((int)this + 0x61) = 0;
  *(undefined4 *)((int)this + 0x65) = 0;
  *(undefined4 *)((int)this + 0x69) = 0;
  *(undefined2 *)((int)this + 0x6d) = 0;
  *(byte *)((int)this + 0x6f) = *(byte *)((int)this + 0x6f) & 0xfe;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(byte *)((int)this + 0x7c) = *(byte *)((int)this + 0x7c) & 0xfe;
  *(undefined4 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x85) = 0;
  *(undefined ***)this = &PTR_FUN_6626bf00;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bef0;
  *puVar1 = &PTR_FUN_6626beec;
  *(int **)((int)this + 0x7d) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_6626a658,(int)this + 0x59);
    (**(code **)*param_1)(param_1,&DAT_6626a738,(int)this + 0x70);
  }
  if (*(int *)((int)this + 0x59) != 0) {
    pvVar2 = operator_new(0x1d);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_6622f0a0(pvVar2,-(uint)(this != (void *)0x0) & (uint)puVar1,1);
    }
    *(int **)((int)this + 0x61) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    pvVar2 = operator_new(0x1d);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_6622f0a0(pvVar2,-(uint)(this != (void *)0x0) & (uint)puVar1,1);
    }
    *(int **)((int)this + 0x65) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    pvVar2 = operator_new(0x1d);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_6622f0a0(pvVar2,-(uint)(this != (void *)0x0) & (uint)puVar1,0);
    }
    *(int **)((int)this + 0x69) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  FUN_66254ca0((undefined4 *)((int)this + 0x78));
  return this;
}


