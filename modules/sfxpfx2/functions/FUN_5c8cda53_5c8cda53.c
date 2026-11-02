/* Module: sfxpfx2.dll
   Function: FUN_5c8cda53
   Address: 5c8cda53
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c8cda53(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_5c8cdd9d((int)this + 0xc);
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_5c892940(0xc), puVar1 == (undefined4 *)0x0)) {
    return;
  }
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)this;
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    *(undefined4 **)((int)this + 4) = puVar1;
  }
  else {
    **(undefined4 **)this = puVar1;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(undefined4 **)this = puVar1;
  return;
}


