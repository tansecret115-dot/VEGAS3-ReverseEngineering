/* Module: sfppack2.dll
   Function: FUN_5ccfa220
   Address: 5ccfa220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccfa220(void *this,int param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)((int)this + 0x8c) + 0x18) == 0) {
    return 0x8000ffff;
  }
  if (param_1 < 0) {
    return 0x80070057;
  }
  if (0 < param_1) {
    return 0x40103;
  }
  FUN_5cd400a0(param_2,(undefined4 *)(*(int *)((int)this + 0x8c) + 0x1c));
  uVar1 = FUN_5ccfa1d0((int)param_2);
  return uVar1;
}


