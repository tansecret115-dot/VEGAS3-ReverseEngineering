/* Module: 28_83260.dll
   Function: FUN_10006310
   Address: 10006310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10006310(void *this,undefined4 *param_1,undefined4 *param_2,short param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 < 1) {
    *(undefined4 *)((int)this + 0x1c4c) = 0x24;
    *(undefined4 *)((int)this + 0x1c50) = 0x3f7d0000;
  }
  else {
    if ((param_3 < 1) || (3 < param_3)) {
      if (param_3 < 4) goto LAB_10006368;
      *(undefined4 *)((int)this + 0x1c4c) = 0x10;
    }
    else {
      *(undefined4 *)((int)this + 0x1c4c) = 0x18;
    }
    *(undefined4 *)((int)this + 0x1c50) = 0x3f7c0000;
  }
LAB_10006368:
  *param_1 = 0x26;
  *param_2 = 0xa0;
  FUN_10004340(this);
  *(undefined4 *)((int)this + 0x1c48) = 1;
  puVar2 = (undefined4 *)((int)this + 0x884);
  for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


