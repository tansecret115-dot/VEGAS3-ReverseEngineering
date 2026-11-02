/* Module: pncrt.dll
   Function: FUN_780062b0
   Address: 780062b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_780062b0(void *this,char *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff80;
  if (param_1 != (char *)0x0) {
    iVar1 = FUN_780070b0(param_1);
    FUN_78006c60(this,param_1,iVar1);
  }
  return this;
}


