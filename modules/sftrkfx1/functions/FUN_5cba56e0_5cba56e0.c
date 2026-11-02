/* Module: sftrkfx1.dll
   Function: FUN_5cba56e0
   Address: 5cba56e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cba56e0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  float local_24 [9];
  
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  FUN_5cba25c0(this,local_24);
  uVar1 = FUN_5cba5130(this,local_24,0);
  DVar2 = timeGetTime();
  srand(DVar2 >> 3);
  FUN_5cba2520(this,0x7fbe);
  FUN_5cba2520(this,0x7fbf);
  FUN_5cba6c30((int)this);
  *(undefined4 *)((int)this + 0x20) = 0;
  return uVar1;
}


