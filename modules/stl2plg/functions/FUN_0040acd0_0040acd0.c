/* Module: stl2plg.dll
   Function: FUN_0040acd0
   Address: 0040acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040acd0(void *this,int param_1)

{
  HGLOBAL hMem;
  LPVOID this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x38;
  if (*(int *)(iVar3 + *(int *)((int)this + 0x25c)) != 2) {
    return -0x7ff8ffa9;
  }
  hMem = GlobalAlloc(0x40,0x58);
  this_00 = GlobalLock(hMem);
  if (this_00 != (LPVOID)0x0) {
    piVar1 = FUN_0040be80(this_00,this);
    if (piVar1 != (int *)0x0) {
      iVar2 = iVar3 + *(int *)((int)this + 0x25c);
      iVar2 = FUN_0040c330(piVar1,(int)this + 0x50,param_1,*(int *)(iVar2 + 4),
                           *(int *)(iVar3 + *(int *)((int)this + 0x25c)),(int *)(iVar2 + 8));
      if (-1 < iVar2) {
        *(int **)(iVar3 + 0x30 + *(int *)((int)this + 0x25c)) = piVar1;
        return iVar2;
      }
      (**(code **)(*piVar1 + 0x58))(1);
      *(undefined4 *)(iVar3 + 0x30 + *(int *)((int)this + 0x25c)) = 0;
      return iVar2;
    }
  }
  return -0x7ffb1ff9;
}


