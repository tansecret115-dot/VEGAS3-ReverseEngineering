/* Module: wmfplug2.dll
   Function: FUN_0040a6c0
   Address: 0040a6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040a6c0(void *this,int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *unaff_ESI;
  int *piVar7;
  bool bVar8;
  int iStack_7d8;
  
  *(int *)((int)this + 8) = param_1;
  if (*(LPCVOID *)((int)this + 0x14) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0x14));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0x14));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    iVar3 = FUN_0040a190(*(void **)((int)this + 0xc),(int *)((int)this + 0x18));
    if (-1 < iVar3) {
      piVar7 = *(int **)((int)this + 0x18);
      piVar5 = *(int **)((int)this + 8);
      iVar3 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if (iVar3 < 0) {
        (**(code **)(*(int *)this + 0x14))(this);
        return iVar3;
      }
      iVar4 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&stack0xfffff7f4,&stack0xfffff7f0);
      iVar3 = *piVar5;
      if (iVar4 < 0) {
        (**(code **)(iVar3 + 8))();
        (**(code **)(*(int *)this + 0x14))(this);
        return iVar4;
      }
      (**(code **)(iVar3 + 8))(piVar5);
      iVar3 = 4;
      bVar8 = true;
      piVar7 = (int *)&stack0xfffff7e4;
      piVar5 = &DAT_0047b640;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *piVar7 == *piVar5;
        piVar7 = piVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar8);
      if (!bVar8) {
        (**(code **)(*(int *)this + 0x14))(this);
        return -0x7fff0001;
      }
      piVar7 = (int *)(iStack_7d8 + 0x30);
      if (*(int *)(iStack_7d8 + 0x40) == 3) {
        iVar3 = 0xc;
      }
      else {
        iVar3 = *(int *)(iStack_7d8 + 0x50) << 2;
      }
      pvVar2 = GlobalAlloc(0x42,iVar3 + *piVar7);
      piVar5 = GlobalLock(pvVar2);
      *(int **)((int)this + 0x14) = piVar5;
      if (piVar5 == (int *)0x0) {
        (**(code **)(*(int *)this + 0x14))(this);
        return -0x7ff8fff2;
      }
      if (*(int *)(iStack_7d8 + 0x40) == 3) {
        iVar3 = 0xc;
      }
      else {
        iVar3 = *(int *)(iStack_7d8 + 0x50) << 2;
      }
      iVar1 = *piVar7;
      for (uVar6 = (uint)(iVar3 + iVar1) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar5 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar5 = piVar5 + 1;
      }
      for (uVar6 = iVar3 + iVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar5 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar5 = (int *)((int)piVar5 + 1);
      }
      return iVar4;
    }
  }
  return iVar3;
}


