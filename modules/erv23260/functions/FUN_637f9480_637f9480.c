/* Module: erv23260.dll
   Function: FUN_637f9480
   Address: 637f9480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f9480(void *this,undefined4 param_1,int param_2,byte param_3,uint *param_4,int *param_5,
            int param_6)

{
  uint local_44 [16];
  
  FUN_637f2160(local_44);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)this + 0x318);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x338) + 4;
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(*(int *)((int)this + 0x338) + 0x11c);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x334);
  FUN_637f9200(this,param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}


