/* Module: g2plug.dll
   Function: FUN_5f8065e0
   Address: 5f8065e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5f8065e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            )

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  uint uVar6;
  
  if (*(int *)((int)this + 0x24) != 0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0x40))
              (*(int **)((int)this + 0x10),*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  puVar2 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar6 = 0;
    iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0x3c))
                      (*(int **)((int)this + 0x10),param_1,param_2,param_3,&param_3,0,0,param_4,0,0)
    ;
    if (iVar3 == 0) {
      if (-1 < (int)uVar6) {
        *(undefined4 *)((int)this + 0x24) = *puVar2;
        return 0;
      }
      if (*(int *)((int)this + 0x28) == 0) {
        iVar3 = *(int *)((int)this + 0x20);
        uVar4 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
        hMem = GlobalAlloc(0x42,((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3) *
                                *(int *)(iVar3 + 8) * 2);
        pvVar5 = GlobalLock(hMem);
        *(LPVOID *)((int)this + 0x28) = pvVar5;
        if (pvVar5 == (LPVOID)0x0) {
          (**(code **)(**(int **)((int)this + 0x10) + 0x40))(*(int **)((int)this + 0x10),puVar2);
          return -0x7ff8fff2;
        }
      }
      piVar1 = *(int **)((int)this + 0x20);
      uVar4 = (uint)*(ushort *)((int)piVar1 + 0xe) * piVar1[1] + 0x1f;
      FUN_5f822ef0(piVar1,*(int **)((int)this + 0x28),(uint *)0x0,0,piVar1,
                   (int *)(((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3) *
                           (piVar1[2] + -1) + (int)puVar2),(uint *)0x0,uVar6,3);
      (**(code **)(**(int **)((int)this + 0x10) + 0x40))(*(int **)((int)this + 0x10),puVar2);
      *puVar2 = *(undefined4 *)((int)this + 0x28);
      return 0;
    }
  }
  return iVar3;
}


