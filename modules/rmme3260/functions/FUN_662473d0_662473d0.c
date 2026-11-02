/* Module: rmme3260.dll
   Function: FUN_662473d0
   Address: 662473d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662473d0(void *this,int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  BITMAPINFO *pBVar3;
  uint *puVar4;
  BITMAPINFO local_42c [24];
  
  iVar1 = FUN_662406e0(*(int *)((int)this + 0x3a));
  FUN_66248b50(iVar1);
  pBVar3 = local_42c;
  for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pBVar3->bmiHeader).biSize = 0;
    pBVar3 = (BITMAPINFO *)&(pBVar3->bmiHeader).biWidth;
  }
  FUN_6624fc50((uint *)local_42c,0x428,param_2,param_3,param_4,(undefined1 *)0x0,0);
  puVar4 = (uint *)((int)this + 0x56);
  for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_6624b3d0((uint *)(iVar1 + 0x48),(uint *)((int)this + 0x56),local_42c,
                       (-(uint)(param_1 != 0) & 0xffffffca) + 0x41,0);
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x49a) = param_3;
    *(uint *)((int)this + 0x49e) = param_4;
    *(int *)((int)this + 0x52) = param_2;
    if (param_1 != 0) {
      *(undefined4 *)((int)this + 0x4a2) = 1;
      FUN_66247ce0(this,0,0);
      return 0;
    }
    *(undefined4 *)((int)this + 0x4a2) = 2;
    FUN_66247ce0(this,0,0);
    return 0;
  }
  return 0x80004005;
}


