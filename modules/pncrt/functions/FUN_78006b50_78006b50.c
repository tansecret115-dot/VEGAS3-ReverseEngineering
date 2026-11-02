/* Module: pncrt.dll
   Function: FUN_78006b50
   Address: 78006b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_78006b50(void *this,char *param_1)

{
  int iVar1;
  
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff8f;
  iVar1 = FUN_780070b0(param_1);
  FUN_78006c60(this,param_1,iVar1);
  return this;
}


