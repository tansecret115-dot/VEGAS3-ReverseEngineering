/* Module: pncrt.dll
   Function: FUN_780061c0
   Address: 780061c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_780061c0(void *this,char param_1)

{
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff80;
  if (param_1 != '\0') {
    FUN_78006c60(this,&param_1,1);
  }
  return this;
}


