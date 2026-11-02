/* Module: sfppack1.dll
   Function: FUN_5ce02bc5
   Address: 5ce02bc5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ce02bc5(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_5ce02f52((int)this + 0xc);
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_5cdb2130(0xc), puVar1 == (undefined4 *)0x0)) {
    return;
  }
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 **)this = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar1;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(undefined4 **)((int)this + 4) = puVar1;
  return;
}


