/* Module: erv33260.dll
   Function: FUN_6707a0b0
   Address: 6707a0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6707a0b0(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
            char param_7,int param_8,int param_9,int param_10,int param_11,char param_12)

{
  int iVar1;
  
  iVar1 = FUN_67079930(this,param_4,param_5,param_8,param_9,param_10,param_11,param_12);
  if (iVar1 == 0) {
    if (param_7 == '\0') {
      if (*(int *)((int)this + 0x28) == 0) {
        FUN_6707a1c0(param_1,param_6,param_4,param_5,*(byte **)((int)this + 0xc),
                     *(byte **)((int)this + 0x10));
      }
      if ((param_12 != '\0') && (*(int *)((int)this + 0x2c) == 0)) {
        FUN_6707a1c0(param_3,param_6,param_4 >> 1,param_5 >> 1,*(byte **)((int)this + 0x14),
                     *(byte **)((int)this + 0x18));
        FUN_6707a1c0(param_2,param_6,param_4 >> 1,param_5 >> 1,*(byte **)((int)this + 0x1c),
                     *(byte **)((int)this + 0x20));
      }
    }
    else {
      if (*(int *)((int)this + 0x28) == 0) {
        FUN_6707d980(param_1,param_6,param_4,param_5,*(int **)((int)this + 0xc),
                     *(int **)((int)this + 0x10));
      }
      if ((param_12 != '\0') && (*(int *)((int)this + 0x2c) == 0)) {
        FUN_6707d980(param_3,param_6,param_4 >> 1,param_5 >> 1,*(int **)((int)this + 0x14),
                     *(int **)((int)this + 0x18));
        FUN_6707d980(param_2,param_6,param_4 >> 1,param_5 >> 1,*(int **)((int)this + 0x1c),
                     *(int **)((int)this + 0x20));
        return 0;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


