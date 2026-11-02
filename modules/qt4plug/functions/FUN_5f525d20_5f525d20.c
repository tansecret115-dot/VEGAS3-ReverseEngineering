/* Module: qt4plug.dll
   Function: FUN_5f525d20
   Address: 5f525d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f525d20(void *this,uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if (*(int *)((int)this + 0x28) == 0) {
    hMem = GlobalAlloc(0x42,0x400);
    pvVar3 = GlobalLock(hMem);
    *(LPVOID *)((int)this + 0x28) = pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      return 0x80004005;
    }
  }
  uVar2 = param_2;
  uVar6 = *(uint *)((int)this + 0x1c);
  uVar8 = *(uint *)((int)this + 0x18);
  if ((*(uint *)((int)this + 0x24) <= uVar6) &&
     ((uVar6 != *(uint *)((int)this + 0x24) || (*(uint *)((int)this + 0x20) <= uVar8)))) {
    return 0x80004005;
  }
  iVar7 = (int)param_2 >> 0x1f;
  uVar4 = iVar7 + uVar6 + (uint)CARRY4(param_2,uVar8);
  if ((*(uint *)((int)this + 0x14) < uVar4) ||
     (((*(uint *)((int)this + 0x14) <= uVar4 && (*(uint *)((int)this + 0x10) < param_2 + uVar8)) ||
      ((uVar6 <= *(uint *)((int)this + 0xc) &&
       ((uVar6 < *(uint *)((int)this + 0xc) || (uVar8 < *(uint *)((int)this + 8))))))))) {
    iVar1 = *(int *)((int)this + 0x18);
    SetFilePointer(*(HANDLE *)this,iVar1 >> 3,(PLONG)0x0,0);
    BVar5 = ReadFile(*(HANDLE *)this,*(LPVOID *)((int)this + 0x28),0x400,&param_2,(LPOVERLAPPED)0x0)
    ;
    uVar6 = param_2;
    if (BVar5 == 0) {
      return 0x80004005;
    }
    if (param_2 == 0) {
      return 0x80004005;
    }
    lVar9 = __allshl(3,iVar1 >> 0x1f);
    *(longlong *)((int)this + 8) = lVar9;
    lVar9 = __allmul(uVar6,0,8,0);
    *(longlong *)((int)this + 0x10) = lVar9 + *(longlong *)((int)this + 8);
  }
  uVar6 = (uint)(*(int *)((int)this + 0x18) - *(int *)((int)this + 8)) >> 3;
  uVar8 = (uint)*(byte *)(uVar6 + *(int *)((int)this + 0x28)) << 0x18;
  *param_1 = uVar8;
  if (8 < (int)uVar2) {
    *param_1 = (uint)*(byte *)(uVar6 + 1 + *(int *)((int)this + 0x28)) << 0x10 | uVar8;
  }
  if (0x10 < (int)uVar2) {
    *param_1 = *param_1 | (uint)*(byte *)(uVar6 + 2 + *(int *)((int)this + 0x28)) << 8;
  }
  if (0x18 < (int)uVar2) {
    *param_1 = *param_1 | (uint)*(byte *)(uVar6 + 3 + *(int *)((int)this + 0x28));
  }
  *param_1 = (*param_1 << ((byte)*(undefined4 *)((int)this + 0x18) & 7)) >>
             (0x20U - (char)uVar2 & 0x1f);
  uVar6 = *(uint *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar6 + uVar2;
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + iVar7 + (uint)CARRY4(uVar6,uVar2);
  return 0;
}


