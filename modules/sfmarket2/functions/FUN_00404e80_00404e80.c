/* Module: sfmarket2.dll
   Function: FUN_00404e80
   Address: 00404e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00404e80(void *this,uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x1be0) != 0) {
    piVar1 = *(int **)((int)this + 0x1be4);
    iVar4 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) {
        return 0;
      }
      iVar3 = *(int *)(piVar1[2] + iVar4 * 4);
      if ((iVar3 != 0) && (param_1 < *(uint *)(iVar3 + 0x20c))) break;
      iVar4 = iVar4 + 1;
    }
    uVar2 = *(undefined4 *)(iVar3 + 0x20c);
  }
  return uVar2;
}


