/* Module: sfmarket2.dll
   Function: FUN_00438440
   Address: 00438440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00438440(void *this,int param_1,uchar *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x44) & 0x10) == 0) {
    iVar1 = FUN_004391e0(this,param_1,param_2);
    return iVar1;
  }
  if ((*(uint *)((int)this + 0x880) & 1) == 0) {
    iVar1 = FUN_00439460(param_1,param_2);
    return iVar1;
  }
  return 0;
}


