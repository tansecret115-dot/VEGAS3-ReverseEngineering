/* Module: sctplug.dll
   Function: FUN_00404f60
   Address: 00404f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00404f60(void *this,int param_1)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x28;
  iVar3 = *(int *)(iVar4 + *(int *)((int)this + 600));
  if (iVar3 != 1) {
    iVar4 = -0x7ff8ffa9;
    if (iVar3 != 2) {
      iVar4 = 0;
    }
    return iVar4;
  }
  hMem = GlobalAlloc(0x40,0xf8);
  this_00 = GlobalLock(hMem);
  if (this_00 != (LPVOID)0x0) {
    piVar2 = FUN_00405610(this_00,this);
    if (piVar2 != (int *)0x0) {
      puVar1 = (undefined4 *)(iVar4 + *(int *)((int)this + 600));
      iVar3 = FUN_00405810((int)piVar2,param_1,puVar1[1],*puVar1,puVar1[2],puVar1[3],puVar1[4],
                           *(undefined4 *)(iVar4 + 0x14 + *(int *)((int)this + 600)));
      if (-1 < iVar3) {
        *(int **)(iVar4 + 0x20 + *(int *)((int)this + 600)) = piVar2;
        return iVar3;
      }
      (**(code **)(*piVar2 + 0x48))(1);
      *(undefined4 *)(iVar4 + 0x20 + *(int *)((int)this + 600)) = 0;
      return iVar3;
    }
  }
  return -0x7ffb1ff9;
}


