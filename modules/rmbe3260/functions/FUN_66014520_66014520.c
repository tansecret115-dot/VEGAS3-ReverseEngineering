/* Module: rmbe3260.dll
   Function: FUN_66014520
   Address: 66014520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66014520(void *this,int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  uVar1 = 0;
  *param_3 = 0;
  uVar3 = 0;
  if (*(uint *)((int)this + 0x30c) != 0) {
    uVar2 = 0;
    while ((param_1 != *(int *)((int)this + uVar2 * 8 + 0x8c) ||
           (param_2 != *(int *)((int)this + uVar2 * 8 + 0x90)))) {
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
      if (*(uint *)((int)this + 0x30c) <= uVar2) {
        return 0;
      }
    }
    uVar1 = 1;
    *param_3 = uVar3 & 0xffff;
  }
  return uVar1;
}


