/* Module: rmme3260.dll
   Function: FUN_662328d0
   Address: 662328d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_662328d0(void *this,char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_6626c058;
  uVar1 = FUN_66265730(param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 8) = uVar1;
  return this;
}


