/* Module: pnrs3260.dll
   Function: FUN_606f1a50
   Address: 606f1a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_606f1a50(void *this,uint param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_606f1a30(this,param_1);
  if ((iVar1 <= param_3) && (iVar1 != 0)) {
    uVar3 = param_1 & 0xffff;
    local_8 = (void *)FUN_606f1c90(*(void **)((int)this + 4),uVar3);
    param_1 = 0;
    while (local_8 != (void *)0x0) {
      uVar2 = FUN_606f1cc0(*(void **)((int)this + 4),(int *)&local_8,uVar3);
      *param_2 = uVar2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return param_1;
  }
  return 0;
}


