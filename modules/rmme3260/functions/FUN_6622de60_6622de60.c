/* Module: rmme3260.dll
   Function: FUN_6622de60
   Address: 6622de60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6622de60(void *this,undefined4 *param_1,int *param_2)

{
  void *pvVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR_LAB_6626be50;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626be40;
  *(undefined ***)((int)this + 8) = &PTR_LAB_6626be3c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(byte *)((int)this + 0x21) = *(byte *)((int)this + 0x21) & 0xfe;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  FUN_662509f0((undefined4 *)((int)this + 0x2a));
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 **)((int)this + 0x74) = param_1;
  *(undefined ***)this = &PTR_FUN_6626be00;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bdf0;
  *(undefined ***)((int)this + 8) = &PTR_FUN_6626bde8;
  *(int **)((int)this + 100) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_6626a658,(int)this + 0x48);
    (**(code **)*param_1)(param_1,&DAT_6626a738,(int)this + 0x58);
    (**(code **)*param_1)(param_1,&DAT_6626abb8,(int)this + 0x68);
  }
  if (*(int *)((int)this + 0x48) != 0) {
    pvVar1 = operator_new(0x1d);
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_6622f0a0(pvVar1,-(uint)(this != (void *)0x0) & (int)this + 8U,1);
    }
    *(int **)((int)this + 0x4c) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    pvVar1 = operator_new(0x1d);
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_6622f0a0(pvVar1,-(uint)(this != (void *)0x0) & (int)this + 8U,1);
    }
    *(int **)((int)this + 0x50) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    pvVar1 = operator_new(0x1d);
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_6622f0a0(pvVar1,-(uint)(this != (void *)0x0) & (int)this + 8U,0);
    }
    *(int **)((int)this + 0x54) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_66254ca0((undefined4 *)((int)this + 0x60));
  return this;
}


