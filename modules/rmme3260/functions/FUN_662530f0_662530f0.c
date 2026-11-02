/* Module: rmme3260.dll
   Function: FUN_662530f0
   Address: 662530f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662530f0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    iVar3 = (*(code *)**(undefined4 **)this)(param_1,**(undefined4 **)((int)this + 4));
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)((int)this + 4) + 8);
      piVar2 = *(int **)(*(int *)((int)this + 4) + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(*(int *)((int)this + 4) + 4) = 0;
      }
      operator_delete(*(void **)((int)this + 4));
      *(int *)((int)this + 4) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 8) = 0;
        return;
      }
    }
    else {
      puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[2];
      puVar4 = *(undefined4 **)((int)this + 4);
      if (puVar5 != (undefined4 *)0x0) {
        while( true ) {
          iVar3 = (*(code *)**(undefined4 **)this)(param_1,*puVar5);
          if (iVar3 == 0) break;
          puVar1 = puVar5 + 2;
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar1;
          if ((undefined4 *)*puVar1 == (undefined4 *)0x0) {
            return;
          }
        }
        iVar3 = puVar5[2];
        puVar4[2] = iVar3;
        if (iVar3 == 0) {
          *(undefined4 **)((int)this + 8) = puVar4;
        }
        piVar2 = (int *)puVar5[1];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          puVar5[1] = 0;
        }
        operator_delete(puVar5);
      }
    }
  }
  return;
}


