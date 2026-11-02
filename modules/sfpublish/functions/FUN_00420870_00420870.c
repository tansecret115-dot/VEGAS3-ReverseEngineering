/* Module: sfpublish.dll
   Function: FUN_00420870
   Address: 00420870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00420870(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (*(int *)((int)this + 0x60) != 0) {
    *param_1 = *(undefined4 *)((int)this + 0x50);
    param_1[1] = *(undefined4 *)((int)this + 0x54);
    *param_2 = *(undefined4 *)((int)this + 0x58);
    param_2[1] = *(undefined4 *)((int)this + 0x5c);
    uVar1 = 0;
  }
  return uVar1;
}


