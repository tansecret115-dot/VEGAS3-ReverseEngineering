/* Module: erv23260.dll
   Function: FUN_637f74c0
   Address: 637f74c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f74c0(void *this,int param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6,int param_7,int param_8,byte *param_9,int param_10,int param_11,
            int param_12,byte *param_13,int param_14,uint param_15)

{
  int iVar1;
  
  if (param_14 == 0) {
    FUN_637f7610(this,param_1,(undefined4 *)param_4,param_7,param_8,param_9,param_10,0,(int)param_13
                 ,param_15);
    FUN_637f7610(this,param_2,(undefined4 *)param_5,param_7,param_8,param_9,param_11,1,(int)param_13
                 ,param_15);
    FUN_637f7610(this,param_3,(undefined4 *)param_6,param_7,param_8,param_9,param_12,1,(int)param_13
                 ,param_15);
    return;
  }
  iVar1 = (int)this + 0x1a2c;
  FUN_637fe920(param_1,param_4,param_7 << 4,param_8 << 4,(int)param_9,0x10,param_13,
               (undefined8 *)(*(int *)((int)this + 0x1aec) + 7U & 0xfffffff8),iVar1,param_15);
  FUN_637fe920(param_2,param_5,param_7 * 8,param_8 * 8,(int)param_9,8,param_13,
               (undefined8 *)(*(int *)((int)this + 0x1aec) + 7U & 0xfffffff8),iVar1,param_15);
  FUN_637fe920(param_3,param_6,param_7 * 8,param_8 * 8,(int)param_9,8,param_13,
               (undefined8 *)(*(int *)((int)this + 0x1aec) + 7U & 0xfffffff8),iVar1,param_15);
  return;
}


