/* Module: rmbe3260.dll
   Function: FUN_6605d4e0
   Address: 6605d4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6605d4e0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    iVar2 = (*(code *)**(undefined4 **)this)(param_1,**(undefined4 **)((int)this + 4));
    if (iVar2 == 0) {
      iVar2 = *(int *)((int)*(void **)((int)this + 4) + 8);
      operator_delete(*(void **)((int)this + 4));
      *(int *)((int)this + 4) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 8) = 0;
        return;
      }
    }
    else {
      puVar4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[2];
      puVar3 = *(undefined4 **)((int)this + 4);
      if (puVar4 != (undefined4 *)0x0) {
        while( true ) {
          iVar2 = (*(code *)**(undefined4 **)this)(param_1,*puVar4);
          if (iVar2 == 0) break;
          puVar1 = puVar4 + 2;
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar1;
          if ((undefined4 *)*puVar1 == (undefined4 *)0x0) {
            return;
          }
        }
        iVar2 = puVar4[2];
        puVar3[2] = iVar2;
        if (iVar2 == 0) {
          *(undefined4 **)((int)this + 8) = puVar3;
        }
        operator_delete(puVar4);
      }
    }
  }
  return;
}


