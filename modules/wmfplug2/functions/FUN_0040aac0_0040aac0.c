/* Module: wmfplug2.dll
   Function: FUN_0040aac0
   Address: 0040aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040aac0(void *this,int param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  int iVar3;
  SIZE_T dwBytes;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_ESI;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  short *psStack_7d8;
  
  *(int *)((int)this + 8) = param_1;
  if (*(LPCVOID *)((int)this + 0x18) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar2 = FUN_0040a190(*(void **)((int)this + 0xc),(int *)((int)this + 0x14));
    if (-1 < iVar2) {
      piVar7 = *(int **)((int)this + 0x14);
      piVar8 = *(int **)((int)this + 8);
      iVar2 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if (iVar2 < 0) {
        (**(code **)(*(int *)this + 0x14))(this);
        return iVar2;
      }
      iVar3 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&stack0xfffff7f4,&stack0xfffff7f0);
      iVar2 = *piVar8;
      if (iVar3 < 0) {
        (**(code **)(iVar2 + 8))();
        (**(code **)(*(int *)this + 0x14))(this);
        return iVar3;
      }
      (**(code **)(iVar2 + 8))(piVar8);
      iVar2 = 4;
      bVar9 = true;
      piVar7 = (int *)&stack0xfffff7e4;
      piVar8 = &DAT_0047b630;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *piVar7 == *piVar8;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      if (!bVar9) {
        (**(code **)(*(int *)this + 0x14))(this);
        return -0x7fff0001;
      }
      if ((*psStack_7d8 == 3) || (*psStack_7d8 == 1)) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (ushort)psStack_7d8[8] + 0x12;
      }
      pvVar1 = GlobalAlloc(0x42,dwBytes);
      puVar4 = GlobalLock(pvVar1);
      *(undefined4 **)((int)this + 0x18) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        (**(code **)(*(int *)this + 0x14))(this);
        return -0x7ff8fff2;
      }
      if ((*psStack_7d8 == 3) || (*psStack_7d8 == 1)) {
        uVar5 = 0x10;
      }
      else {
        uVar5 = (ushort)psStack_7d8[8] + 0x12;
      }
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *(undefined4 *)psStack_7d8;
        psStack_7d8 = psStack_7d8 + 2;
        puVar4 = puVar4 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar4 = (char)*psStack_7d8;
        psStack_7d8 = (short *)((int)psStack_7d8 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      return iVar3;
    }
  }
  return iVar2;
}


