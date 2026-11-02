/* Module: vegas30k.dll
   Function: ReadBuffer_Init
   Address: 0100fd70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall ReadBuffer_Init(long,__int64,long,long,void *,struct tREAD_BUFFER *) */

long ReadBuffer_Init(long param_1,__int64 param_2,long param_3,long param_4,void *param_5,
                    tREAD_BUFFER *param_6)

{
  __int64 _Var1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_stack_00000008;
  
                    /* 0xfd70  260  ?ReadBuffer_Init@@YGJJ_JJJPAXPAUtREAD_BUFFER@@@Z */
  uVar4 = 0;
  iVar3 = 0;
  uVar2 = in_stack_00000008;
  _Var1 = param_2;
  if (1 < param_3) {
    uVar5 = param_3 - 1;
    uVar2 = in_stack_00000008 - param_1;
    uVar4 = uVar2 & uVar5;
    _Var1 = CONCAT44((in_stack_00000008 & uVar5) + uVar5 + param_2._4_4_ & ~uVar5,
                     ((int)param_2 - (uint)(in_stack_00000008 < (uint)param_1)) +
                     (uint)CARRY4(uVar2,param_1));
    uVar2 = uVar2 + param_1 & ~uVar5;
    iVar3 = in_stack_00000008 - uVar2;
  }
  if (param_5 != (void *)0x0) {
    *(uint *)param_5 = uVar4;
    *(long *)((int)param_5 + 4) = param_1;
    *(uint *)((int)param_5 + 0x10) = in_stack_00000008;
    *(uint *)((int)param_5 + 0x20) = uVar2;
    *(__int64 *)((int)param_5 + 0x14) = param_2;
    *(int *)((int)param_5 + 0xc) = iVar3;
    *(__int64 *)((int)param_5 + 0x24) = _Var1;
    if (param_4 != 0) {
      ReadBuffer_InitPointers((void *)param_4,param_5);
    }
  }
  return (uVar4 - iVar3) + (int)((ulonglong)_Var1 >> 0x20) + param_1;
}


