/* Module: erv23260.dll
   Function: FUN_637f6ef0
   Address: 637f6ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f6ef0(void *this,uint param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
            int param_7,uint param_8,undefined4 param_9,int param_10,int param_11,int param_12,
            uint param_13)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_12 == 0) {
    FUN_637f7030(this,param_1,param_3,param_4,param_5,0,param_8,param_10,0,param_13);
    FUN_637f72b0(this,param_1,param_3,param_4,param_5,0,param_8,param_10,0,param_13);
    uVar2 = param_4 >> 1;
    uVar3 = param_3 >> 1;
    FUN_637f7030(this,param_2,uVar3,uVar2,param_5,1,param_8,param_10,param_11,param_13);
    FUN_637f72b0(this,param_2,uVar3,uVar2,param_5,1,param_8,param_10,param_11,param_13);
    iVar1 = (param_5 >> 1) + param_2;
    FUN_637f7030(this,iVar1,uVar3,uVar2,param_5,1,param_8,param_10,param_11,param_13);
    FUN_637f72b0(this,iVar1,uVar3,uVar2,param_5,1,param_8,param_10,param_11,param_13);
    return;
  }
  FUN_637fe1d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,(int)this);
  return;
}


