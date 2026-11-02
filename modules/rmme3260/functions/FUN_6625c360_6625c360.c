/* Module: rmme3260.dll
   Function: FUN_6625c360
   Address: 6625c360
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6625c360(void *this,short param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  
  FUN_662583c0(this);
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(short *)((int)this + 0x3a) = param_1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  FUN_662509f0((undefined4 *)((int)this + 0x58));
  FUN_662509f0((undefined4 *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined ***)this = &PTR_FUN_6626d298;
  piVar1 = (int *)FUN_662582f0(param_1);
  *(int **)((int)this + 0x36) = piVar1;
  (**(code **)(*piVar1 + 0x1c))();
  FUN_662586d0(*(uint *)((int)this + 0x36));
  puVar2 = (undefined4 *)FUN_662589b0();
  FUN_66258c70(puVar2,this);
  *(undefined4 *)((int)this + 0x3c) = *puVar2;
  *(undefined4 *)((int)this + 0x40) = puVar2[1];
  puVar2 = operator_new(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_6626d290;
  }
  *(undefined4 **)((int)this + 0xc4) = puVar2;
  puVar2[1] = this;
  FUN_66254ca0((undefined4 *)((int)this + 0x44));
  FUN_66254d00((undefined4 *)((int)this + 0x48),(LPCSTR)0x0,0);
  FUN_66254d00((undefined4 *)((int)this + 0x4c),(LPCSTR)0x0,1);
  FUN_66254d00((undefined4 *)((int)this + 0x50),(LPCSTR)0x0,1);
  FUN_66254d00((undefined4 *)((int)this + 0x54),(LPCSTR)0x0,0);
  pvVar3 = operator_new(0x7fa6);
  *(void **)((int)this + 0x88) = pvVar3;
  if (*(short *)((int)this + 0x3a) == 1) {
    piVar1 = operator_new(0x1a);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_66254da0(piVar1,0x200,1);
      *piVar1 = (int)&PTR_LAB_6626be88;
    }
    *(int **)((int)this + 0x80) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 0)) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
    }
    FUN_66254f90(*(void **)((int)this + 0x80),0x7fa6);
    piVar1 = operator_new(0x1a);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_66254da0(piVar1,0x200,1);
      *piVar1 = (int)&PTR_LAB_6626be88;
    }
    *(int **)((int)this + 0x84) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 0)) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
    }
    FUN_66254f90(*(void **)((int)this + 0x84),0x7fa6);
    return this;
  }
  return this;
}


