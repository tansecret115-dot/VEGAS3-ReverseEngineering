/* Module: sfppack2.dll
   Function: FUN_5ccd2c80
   Address: 5ccd2c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccd2c80(void *this,int param_1,void *param_2)

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
  uVar1 = FUN_5ccd2c30((int)param_2);
  return uVar1;
}


