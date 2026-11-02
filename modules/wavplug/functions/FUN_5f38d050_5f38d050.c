/* Module: wavplug.dll
   Function: FUN_5f38d050
   Address: 5f38d050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f38d050(void *this,int param_1)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this_00;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x30;
  iVar3 = *(int *)(iVar4 + *(int *)((int)this + 600));
  if (iVar3 != 1) {
    iVar4 = -0x7ff8ffa9;
    if (iVar3 != 2) {
      iVar4 = 0;
    }
    return iVar4;
  }
  hMem = GlobalAlloc(0x40,0x108);
  this_00 = GlobalLock(hMem);
  if (this_00 != (LPVOID)0x0) {
    puVar2 = FUN_5f38d720(this_00,this);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(iVar4 + *(int *)((int)this + 600));
      iVar3 = FUN_5f38d8b0((int)puVar2,param_1,puVar1[1],*puVar1,puVar1[2],puVar1[3],puVar1[4],
                           puVar1[5],puVar1[6],
                           *(undefined4 *)(iVar4 + 0x1c + *(int *)((int)this + 600)));
      if (-1 < iVar3) {
        *(undefined4 **)(iVar4 + 0x28 + *(int *)((int)this + 600)) = puVar2 + 0x2a;
        return iVar3;
      }
      (**(code **)*puVar2)(1);
      *(undefined4 *)(iVar4 + 0x28 + *(int *)((int)this + 600)) = 0;
      return iVar3;
    }
  }
  return -0x7ffb1ff9;
}


