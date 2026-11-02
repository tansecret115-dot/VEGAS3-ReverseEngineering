/* Module: rmme3260.dll
   Function: FUN_662498c0
   Address: 662498c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662498c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar2 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x111; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x450);
  for (iVar1 = 0x111; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x894) = 0;
  *(undefined4 *)((int)this + 0x898) = 0;
  *(undefined4 *)((int)this + 0x89c) = 0;
  *(undefined4 *)((int)this + 0x8a0) = 0;
  *(undefined4 *)((int)this + 0x8a4) = 0;
  *(undefined4 *)((int)this + 0x8a8) = 0;
  *(undefined4 *)((int)this + 0x8ac) = 0;
  *(undefined4 *)((int)this + 0x8b0) = 0;
  *(undefined4 *)((int)this + 0x8b4) = 0;
  *(undefined4 *)((int)this + 0x8b8) = 0;
  *(undefined4 *)((int)this + 0x8bc) = 0;
  *(undefined4 *)((int)this + 0x8c0) = 0;
  *(undefined4 *)((int)this + 0x8c4) = 0;
  *(undefined4 *)((int)this + 0x8c8) = 0;
  *(undefined4 *)((int)this + 0x8cc) = 0;
  *(undefined4 *)((int)this + 0x8d0) = 0;
  return this;
}


