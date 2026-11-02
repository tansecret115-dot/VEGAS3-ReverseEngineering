/* Module: gifplug.dll
   Function: FUN_5f6c3000
   Address: 5f6c3000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f6c3000(void *this,uint param_1,int param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x32d) == 0) {
    *param_3 = 0;
    return 0;
  }
  iVar2 = (int)*(uint *)((int)this + 8) >> 0x1f;
  if ((iVar2 <= param_2) && ((iVar2 < param_2 || (*(uint *)((int)this + 8) <= param_1)))) {
    return 0x80004005;
  }
  uVar1 = *(ushort *)(*(int *)((int)this + 0x32d) + param_1 * 0x319 + 1);
  if (uVar1 == 0) {
    *param_3 = 10;
    return 0;
  }
  *param_3 = (uint)uVar1 * 10;
  return 0;
}


