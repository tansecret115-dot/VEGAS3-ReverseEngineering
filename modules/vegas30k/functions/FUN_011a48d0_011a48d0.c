/* Module: vegas30k.dll
   Function: FUN_011a48d0
   Address: 011a48d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall FUN_011a48d0(int param_1,int *param_2)

{
  int *piVar1;
  void *_Memory;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piStack_40;
  int *piStack_3c;
  int **ppiStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  
  piStack_28 = (int *)0x11a48e7;
  _Memory = calloc(1,0x120);
  if (_Memory != (void *)0x0) {
    *(int **)((int)_Memory + 0x114) = param_2;
    (**(code **)(*param_2 + 4))();
    piStack_28 = *(int **)((int)_Memory + 0x114);
    iStack_2c = 0x11a491b;
    (**(code **)(*piStack_28 + 0x10))();
    piStack_34 = *(int **)((int)_Memory + 0x114);
    piStack_30 = (int *)((int)_Memory + 4);
    iStack_2c = 0x104;
    ppiStack_38 = (int **)0x11a4930;
    (**(code **)(*piStack_34 + 0xc))();
    piStack_3c = *(int **)((int)_Memory + 0x114);
    ppiStack_38 = &piStack_28;
    *(undefined4 *)((int)_Memory + 0x108) = 0;
    *(undefined4 *)((int)_Memory + 0x10c) = 0;
    piStack_40 = (int *)0x11a4955;
    iVar2 = (**(code **)(*piStack_3c + 0x48))();
    if (-1 < iVar2) {
      piStack_40 = (int *)0x0;
      iVar2 = (**(code **)(*piStack_30 + 0xc))(piStack_30,1);
      while (iVar2 == 0) {
        *(int *)((int)_Memory + 0x108) = *(int *)((int)_Memory + 0x108) + 1;
        (*(code *)(*ppiStack_38)[2])(ppiStack_38);
        iVar2 = (*(code *)piStack_28[3])(&piStack_28,1,&piStack_3c,0);
      }
      (**(code **)(*piStack_40 + 8))(piStack_40);
    }
    piVar1 = *(int **)((int)_Memory + 0x114);
    piStack_40 = &iStack_2c;
    iVar2 = (**(code **)(*piVar1 + 0x44))();
    if (-1 < iVar2) {
      piVar5 = (int *)0x0;
      iVar2 = (**(code **)(*piStack_34 + 0xc))(piStack_34,1,&iStack_2c);
      while (iVar2 == 0) {
        *(int *)((int)_Memory + 0x10c) = *(int *)((int)_Memory + 0x10c) + 1;
        (**(code **)(*piStack_3c + 8))(piStack_3c);
        iVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,1,&piStack_40,0);
      }
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    iVar2 = *(int *)((int)_Memory + 0x10c) + *(int *)((int)_Memory + 0x108);
    pvVar3 = (void *)0x0;
    if (iVar2 != 0) {
      pvVar3 = calloc(1,iVar2 * 4);
    }
    puVar4 = (undefined4 *)(-(uint)(*(int *)((int)_Memory + 0x108) != 0) & (uint)pvVar3);
    *(undefined4 **)((int)_Memory + 0x118) = puVar4;
    if (*(int *)((int)_Memory + 0x10c) == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)((int)pvVar3 + *(int *)((int)_Memory + 0x108) * 4);
    }
    *(void **)((int)_Memory + 0x11c) = pvVar3;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    if (*(undefined4 **)((int)_Memory + 0x11c) != (undefined4 *)0x0) {
      **(undefined4 **)((int)_Memory + 0x11c) = 0;
    }
    iVar2 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x10),0xffffffff,&stack0xffffffdc,1);
    if (iVar2 < 0) {
      (**(code **)(**(int **)((int)_Memory + 0x114) + 8))(*(int **)((int)_Memory + 0x114));
      free(_Memory);
    }
    return iVar2;
  }
  return -0x7ff8fff2;
}


