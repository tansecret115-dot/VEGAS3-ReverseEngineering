/* Module: rv203260.dll
   Function: FUN_638a55f0
   Address: 638a55f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_638a55f0(void *this,int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((*(code **)((int)this + 0xec) != (code *)0x0) && (*(int *)((int)this + 0xb0) != 0)) {
    uVar1 = (**(code **)((int)this + 0xec))
                      (*(int *)((int)this + 0xb0),param_1,param_1 + param_3 * param_2,
                       (param_3 * param_2 * 5 >> 2) + param_1,param_2,param_2 >> 1,param_2,param_3,
                       param_4,param_5,param_6);
    return uVar1;
  }
  return 0x6f;
}


