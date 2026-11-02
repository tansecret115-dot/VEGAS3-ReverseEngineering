/* Module: encn3260.dll
   Function: FUN_664b3940
   Address: 664b3940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664b3940(void *this,int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  BITMAPINFO *pBVar3;
  uint *puVar4;
  BITMAPINFO local_430 [24];
  undefined4 local_8;
  
  local_8 = 0x80004005;
  if ((((*(int *)((int)this + 0x160c) != 0) && (*(int *)((int)this + 0x15f8) == param_1)) &&
      (*param_2 <= *(int *)((int)this + 0x1604))) && (param_2[1] <= *(int *)((int)this + 0x1608))) {
    if ((*(int *)((int)this + 0x15fc) != *param_2) || (*(int *)((int)this + 0x1600) != param_2[1]))
    {
      *(int *)((int)this + 0x15fc) = *param_2;
      *(int *)((int)this + 0x1600) = param_2[1];
    }
    return 0;
  }
  FUN_664b3a70((int)this);
  *(int *)((int)this + 0x15f8) = param_1;
  *(int *)((int)this + 0x15fc) = *param_2;
  *(int *)((int)this + 0x1600) = param_2[1];
  *(int *)((int)this + 0x1604) = *param_2;
  uVar1 = param_2[1];
  pBVar3 = local_430;
  for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pBVar3->bmiHeader).biSize = 0;
    pBVar3 = (BITMAPINFO *)&(pBVar3->bmiHeader).biWidth;
  }
  *(uint *)((int)this + 0x1608) = uVar1;
  FUN_664ba7d0((uint *)local_430,0x428,param_1,*(uint *)((int)this + 0x1604),uVar1,(undefined1 *)0x0
               ,0);
  puVar4 = (uint *)((int)this + 0x11ac);
  for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_664b5f30((uint *)((int)this + 0x48),(uint *)((int)this + 0x11ac),local_430,
                       *(uint *)((int)this + 0x11a8),0);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x160c) = 1;
    return 0;
  }
  return local_8;
}


