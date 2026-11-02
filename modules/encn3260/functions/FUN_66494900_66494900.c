/* Module: encn3260.dll
   Function: FUN_66494900
   Address: 66494900
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall
FUN_66494900(void *this,int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DWORD DVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = param_1;
  *(undefined2 *)((int)this + 8) = param_2;
  FUN_664ba900((undefined4 *)((int)this + 0xe));
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3a) = 1;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x5a) = param_3;
  *(undefined4 *)((int)this + 0x5e) = param_4;
  *(undefined4 *)((int)this + 0x62) = param_5;
  *(undefined4 *)((int)this + 0x66) = param_6;
  *(undefined4 *)((int)this + 0x182) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x6e) = 0;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x76) = 0;
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined4 *)((int)this + 0x86) = 0;
  *(undefined4 *)((int)this + 0x17a) = 0;
  *(undefined4 *)((int)this + 0x17e) = 0;
  *(undefined4 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined4 *)((int)this + 0x192) = 0;
  *(undefined4 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0x19a) = 0;
  *(undefined4 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0x1a2) = 0;
  *(undefined4 *)((int)this + 0x1e6) = 0;
  *(undefined4 *)((int)this + 0x1ea) = 0;
  *(undefined4 *)((int)this + 0x1ee) = 0;
  *(undefined4 *)((int)this + 0x1f2) = 0;
  *(undefined4 *)((int)this + 0x1f6) = 0;
  *(undefined4 *)((int)this + 0x1fa) = 0;
  *(undefined4 *)((int)this + 0x1fe) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x202) = DVar1;
  *(undefined4 *)((int)this + 0x206) = 0;
  *(undefined4 *)((int)this + 0x20a) = 1;
  *(undefined4 *)((int)this + 0x20e) = 0;
  FUN_66496710(this);
  puVar2 = (undefined4 *)((int)this + 0x102);
  iVar3 = 0x1e;
  do {
    puVar2[-0x1e] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  this_00 = operator_new(0x10);
  if (this_00 != (void *)0x0) {
    puVar2 = FUN_664c0370(this_00,0x400);
    *(undefined4 **)((int)this + 10) = puVar2;
    return this;
  }
  *(undefined4 *)((int)this + 10) = 0;
  return this;
}


