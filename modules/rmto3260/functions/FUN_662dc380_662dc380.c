/* Module: rmto3260.dll
   Function: FUN_662dc380
   Address: 662dc380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_662dc380(void *this,undefined4 *param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  *param_4 = 0;
  if (param_3 < *(uint *)((int)this + 0x19)) {
    iVar1 = -0x7ffbfff3;
  }
  if (-1 < iVar1) {
    iVar1 = FUN_662f66c0(*(void **)((int)this + 0x2d),*(short **)this,*(int *)((int)this + 0x15),
                         param_2,param_4,&local_8,(int *)&param_4);
    if (-1 < iVar1) {
      *(undefined2 *)((int)param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)this + 0x2b);
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
    }
  }
  return;
}


