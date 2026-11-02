/* Module: erv33260.dll
   Function: FUN_67072b40
   Address: 67072b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67072b40(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x2b4) == 0) {
    return 4;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x30) != 0) {
    return 4;
  }
  if ((10 < *param_1) && (*param_1 < 0xd)) {
    iVar1 = FUN_67072af0(param_1[1],param_1[2]);
    return (-(uint)(iVar1 != 0) & 0xfffffff9) + 7;
  }
  return 8;
}


