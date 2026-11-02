/* Module: rmbe3260.dll
   Function: FUN_660611c0
   Address: 660611c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_660611c0(void *this,char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_66068f60;
  uVar1 = FUN_66061e00(param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 8) = uVar1;
  return this;
}


