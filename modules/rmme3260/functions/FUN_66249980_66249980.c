/* Module: rmme3260.dll
   Function: FUN_66249980
   Address: 66249980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66249980(void *this,uint *param_1,int param_2)

{
  BITMAPINFO local_42c [24];
  
  *(int *)this = param_2;
  *(uint *)((int)this + 0x8c4) = *param_1;
  *(uint *)((int)this + 0x8c8) = param_1[1];
  FUN_6624fc50((uint *)local_42c,0x2c,param_2,*param_1,param_1[1],(undefined1 *)0x0,0);
  FUN_6624b3d0(*(uint **)((int)this + 8),(uint *)((int)this + 0x450),local_42c,0,0);
  return;
}


