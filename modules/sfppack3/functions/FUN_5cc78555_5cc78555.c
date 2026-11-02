/* Module: sfppack3.dll
   Function: FUN_5cc78555
   Address: 5cc78555
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc78555(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_5cc788e2((int)this + 0xc);
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_5cc31fc0(0xc), puVar1 == (undefined4 *)0x0)) {
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


