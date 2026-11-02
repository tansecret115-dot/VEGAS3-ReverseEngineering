/* Module: sfpublish.dll
   Function: FUN_00407c10
   Address: 00407c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00407c10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *local_8;
  int *local_4;
  
  if ((*(uint *)(param_1 + 0x88) & 0x40) == 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40;
    piVar1 = *(int **)(param_1 + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,1,0,0);
    }
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != -0x32323233) {
      local_4 = (int *)0x0;
      local_8 = (int *)0x0;
      iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x50))
                        (*(undefined4 **)(param_1 + 0x50),&DAT_0043c9e0,&local_4);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*local_4 + 0x10))(local_4,param_1 + 0x70,&local_8);
        if (-1 < iVar4) {
          (**(code **)(*local_8 + 0x18))(local_8,iVar2);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      FUN_00407d90((int *)&local_4);
      *(undefined4 *)(param_1 + 0x84) = 0xcdcdcdcd;
    }
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(param_1 + 0x8c));
      (**(code **)(**(int **)(param_1 + 0x54) + 0x18))(*(int **)(param_1 + 0x54),1);
      (**(code **)(**(int **)(param_1 + 0x54) + 0xc))(*(int **)(param_1 + 0x54),0);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x50);
    if (puVar3 != (undefined4 *)0x0) {
      local_4 = (int *)0x0;
      (**(code **)*puVar3)(puVar3,&DAT_0043c9d0,&local_4);
      if (local_4 != (int *)0x0) {
        (**(code **)(*local_4 + 0xc))(local_4,0);
        if (local_4 != (int *)0x0) {
          (**(code **)(*local_4 + 8))(local_4);
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0x60);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    piVar1 = *(int **)(param_1 + 100);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 100) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x5c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffffa4;
  }
  return;
}


