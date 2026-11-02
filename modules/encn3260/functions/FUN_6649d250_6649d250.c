/* Module: encn3260.dll
   Function: FUN_6649d250
   Address: 6649d250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_6649d250(void *this,char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_664debc0;
  uVar1 = FUN_664d53d0(param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 8) = uVar1;
  return this;
}


