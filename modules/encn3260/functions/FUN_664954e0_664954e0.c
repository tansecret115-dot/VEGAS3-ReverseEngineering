/* Module: encn3260.dll
   Function: FUN_664954e0
   Address: 664954e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664954e0(void *this,undefined2 *param_1,undefined2 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint local_8;
  
  *param_1 = 4;
  *param_2 = 100;
  if (*(int *)((int)this + 0x36) == 0) {
    if ((*(int *)((int)this + 0x26) == 0) || (*(short *)((int)this + 0x78) != 0)) {
      *param_1 = 2;
      *param_2 = 0;
    }
    else {
      local_8 = 0;
      if (*(int *)((int)this + 0x1ee) != 0) {
        uVar2 = *(uint *)((int)this + 0x1fa);
        lVar5 = __allmul(*(uint *)((int)this + 0x56),0,0xffffffff,0);
        lVar5 = lVar5 + (ulonglong)uVar2;
        uVar3 = (uint)lVar5;
        iVar4 = (int)((ulonglong)lVar5 >> 0x20);
        uVar2 = *(uint *)((int)this + 0x1f6);
        if ((-1 < lVar5) && ((0xffffffff < lVar5 || (uVar2 < uVar3)))) {
          if (((int)(iVar4 - (uint)(uVar3 < uVar2)) < 0) || (iVar4 <= (int)(uint)(uVar3 < uVar2))) {
            local_8 = uVar3 - uVar2;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
      }
      DVar1 = GetTickCount();
      if (DVar1 < *(uint *)((int)this + 0x1fe)) {
        DVar1 = GetTickCount();
        uVar2 = (DVar1 - *(int *)((int)this + 0x1fe)) - 1;
      }
      else {
        DVar1 = GetTickCount();
        uVar2 = DVar1 - *(int *)((int)this + 0x1fe);
      }
      uVar3 = *(int *)((int)this + 0x1e2) / 1000 + *(int *)((int)this + 0x1de) * 1000;
      if ((uVar3 != 0) && (uVar3 < uVar2)) {
        uVar2 = uVar2 - uVar3;
      }
      uVar3 = (-(uint)(*(int *)((int)this + 0x5a) != 0) & 2000) + *(int *)((int)this + 0x5a);
      if ((*(int *)((int)this + 0x22) == 1) || ((uVar2 < uVar3 && (local_8 < uVar3)))) {
        *param_1 = 2;
        if (uVar2 < local_8) {
          uVar2 = local_8;
        }
        if (uVar2 < uVar3) {
          *param_2 = (short)((uVar2 * 100) / uVar3);
          return 0;
        }
        *param_2 = 99;
        return 0;
      }
    }
  }
  return 0;
}


