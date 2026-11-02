/* Module: erv23260.dll
   Function: FUN_637ffd50
   Address: 637ffd50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637ffd50(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 0x18;
  *(uint *)((int)this + 0xc) = uVar1;
  if ((((uVar1 & 3) == 0) && (param_2 < uVar1)) &&
     ((iVar2 = *(int *)(param_1 + -0x10), iVar2 == 0x33363248 || (iVar2 == 0x50333632)))) {
    if (iVar2 == 0x50333632) {
      iVar2 = *(int *)(param_1 + -0xc) + 0x1c + *(int *)(param_1 + -8) * 8;
    }
    else {
      iVar2 = *(int *)(param_1 + -0xc) + 0x18 + *(int *)(param_1 + -8) * 0x10;
    }
    return (uint)(byte)((*(char *)(param_1 + -0xc) + 3U & 0xfc) - *(char *)(param_1 + -0xc)) + iVar2
    ;
  }
  return 0;
}


