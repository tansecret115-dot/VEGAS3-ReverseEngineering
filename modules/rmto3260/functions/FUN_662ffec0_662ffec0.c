/* Module: rmto3260.dll
   Function: FUN_662ffec0
   Address: 662ffec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ffec0(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  iVar1 = FUN_66300310((ushort *)&local_c,(undefined2 *)&local_8);
  if (iVar1 == -1) {
    return -1;
  }
  uVar4 = local_8 & 0xffff;
  uVar3 = local_c & 0xffff;
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  pvVar2 = operator_new(uVar4 * uVar3);
  *(void **)((int)this + 0x10) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return -0x7ff8fff2;
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  pvVar2 = operator_new((local_8 & 0xffff) << 2);
  *(void **)((int)this + 0x14) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return -0x7ff8fff2;
  }
  *param_2 = (undefined2)local_c;
  *param_3 = (undefined2)local_8;
  return iVar1;
}


