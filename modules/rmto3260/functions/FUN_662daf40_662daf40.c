/* Module: rmto3260.dll
   Function: FUN_662daf40
   Address: 662daf40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662daf40(void *this,int param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    return -0x7ff8ffa9;
  }
  if ((*(int *)((int)this + 0x9c) != 0) && ((*(int *)((int)this + 0x20) != 0 || (param_3 != 0)))) {
    return -0x7ff8ffa9;
  }
  if ((*(int *)((int)this + 0x18) == 2) && (*(int *)((int)this + 0x9c) == 0)) {
    iVar1 = FUN_662dafd0(this,param_1,param_2,param_3,param_4,param_5);
    return iVar1;
  }
  if (*(int *)((int)this + 0x18) == 1) {
    iVar1 = FUN_662db460(param_1,param_2,param_3,param_4,param_5);
    return iVar1;
  }
  iVar1 = FUN_662dba80(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


