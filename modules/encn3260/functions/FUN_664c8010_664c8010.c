/* Module: encn3260.dll
   Function: FUN_664c8010
   Address: 664c8010
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664c8010(void *this,short param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  
  FUN_664c4cf0(this);
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
  FUN_664ba900((undefined4 *)((int)this + 0x58));
  FUN_664ba900((undefined4 *)((int)this + 0x6c));
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
  *(undefined ***)this = &PTR_FUN_664dfc60;
  piVar1 = (int *)FUN_664c4c00(param_1);
  *(int **)((int)this + 0x36) = piVar1;
  (**(code **)(*piVar1 + 0x1c))();
  FUN_664c5000(*(uint *)((int)this + 0x36));
  puVar2 = (undefined4 *)FUN_664c52e0();
  FUN_664c55a0(puVar2,this);
  *(undefined4 *)((int)this + 0x3c) = *puVar2;
  *(undefined4 *)((int)this + 0x40) = puVar2[1];
  puVar2 = operator_new(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_664dfc5c;
  }
  *(undefined4 **)((int)this + 0xc4) = puVar2;
  puVar2[1] = this;
  FUN_664bbfc0((undefined4 *)((int)this + 0x44));
  FUN_664bc020((undefined4 *)((int)this + 0x48),(LPCSTR)0x0,0);
  FUN_664bc020((undefined4 *)((int)this + 0x4c),(LPCSTR)0x0,1);
  FUN_664bc020((undefined4 *)((int)this + 0x50),(LPCSTR)0x0,1);
  FUN_664bc020((undefined4 *)((int)this + 0x54),(LPCSTR)0x0,0);
  pvVar3 = operator_new(0x7fa6);
  *(void **)((int)this + 0x88) = pvVar3;
  if (*(short *)((int)this + 0x3a) == 1) {
    piVar1 = operator_new(0x1a);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_664be6e0(piVar1,0x200,1);
      *piVar1 = (int)&PTR_LAB_664de168;
    }
    *(int **)((int)this + 0x80) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 0)) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
    }
    FUN_664be8a0(*(void **)((int)this + 0x80),0x7fa6);
    piVar1 = operator_new(0x1a);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_664be6e0(piVar1,0x200,1);
      *piVar1 = (int)&PTR_LAB_664de168;
    }
    *(int **)((int)this + 0x84) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 0)) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
    }
    FUN_664be8a0(*(void **)((int)this + 0x84),0x7fa6);
    return this;
  }
  return this;
}


