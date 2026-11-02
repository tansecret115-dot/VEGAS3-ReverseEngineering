/* Module: erv23260.dll
   Function: FUN_6380bca0
   Address: 6380bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380bca0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x368) = param_1;
  *(undefined4 *)((int)this + 0x108) = param_2;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  if (*(int *)(*(int *)((int)this + 0x5c0) + 0x78) == 3) {
    uVar3 = 0x3c8b4396;
    uVar1 = 0x3f65a858;
    *(undefined4 *)((int)this + 0x110) = 0x3c8b4396;
  }
  else {
    uVar3 = 0x3e8e075f;
    uVar1 = 0x3fcb295f;
    *(undefined4 *)((int)this + 0x110) = 0x3e8e075f;
  }
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x370) = uVar3;
  *(undefined4 *)((int)this + 0x374) = uVar1;
  uVar4 = 0;
  puVar2 = (undefined4 *)((int)this + 0x378);
  do {
    puVar2[-0x98] = 0;
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 <= *(uint *)((int)this + 0x6dc));
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  return;
}


