/* Module: rmto3260.dll
   Function: FUN_662d87a0
   Address: 662d87a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662d87a0(void *this,undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 local_10;
  undefined4 local_8;
  
  if (*(int *)((int)this + 8) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)((int)this + 8) + 0x10);
  }
  local_10._4_4_ = (uint)*(ushort *)((int)this + 0x74);
  dVar2 = (double)local_10._4_4_;
  if (*(int *)((int)this + 0x7a) == 0) {
    local_10._4_4_ = (uint)*(ushort *)((int)this + 0x72);
    dVar1 = (double)local_10._4_4_ * *(double *)((int)this + 0x32);
  }
  else {
    local_10 = (ulonglong)*(uint *)((int)this + 0x82);
    dVar1 = (double)local_10 * *(double *)((int)this + 0x2a);
  }
  ceil(dVar1 + dVar2 * *(double *)((int)this + 0x2a) +
               (double)local_8 * *(double *)((int)this + 0x32));
  uVar3 = ftol();
  *param_1 = uVar3;
  return 0;
}


