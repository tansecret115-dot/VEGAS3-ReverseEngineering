/* Module: sftrkfx1.dll
   Function: FUN_5cbbcd60
   Address: 5cbbcd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbbcd60(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 local_c [3];
  
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  FUN_5cbbb3a0(this,local_c);
  uVar1 = FUN_5cbbcbc0(this,(int)local_c,0);
  uVar2 = ftol();
  *(undefined4 *)((int)this + 0x94) = uVar2;
  uVar2 = ftol();
  *(undefined4 *)((int)this + 0x60) = uVar2;
  *(undefined4 *)((int)this + 0x98) = 0;
  DVar3 = timeGetTime();
  srand(DVar3 >> 3);
  *(undefined4 *)((int)this + 0x24) = 0;
  return uVar1;
}


