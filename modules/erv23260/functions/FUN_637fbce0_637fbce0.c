/* Module: erv23260.dll
   Function: FUN_637fbce0
   Address: 637fbce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fbce0(void *this,undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
  uVar2 = FUN_637fd3d0(this,4);
  *param_1 = (char)uVar2;
  uVar2 = FUN_637fd3d0(this,9);
  *(uint *)(param_1 + 4) = uVar2 * 4 + 4;
  bVar1 = FUN_637fd5c0((int)this);
  if (CONCAT31(extraout_var,bVar1) != 1) {
    return 0;
  }
  uVar2 = FUN_637fd3d0(this,9);
  *(uint *)(param_1 + 8) = uVar2 << 2;
  return 1;
}


