/* Module: vegas30k.dll
   Function: FUN_011a98d0
   Address: 011a98d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a98d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_4;
  
  iVar3 = param_1[0x19d];
  *param_1 = &PTR_LAB_011eb038;
  local_4 = param_1;
  while (iVar3 != 0) {
    if ((*(byte *)(param_1[0x19d] + 8) & 1) != 0) {
      local_4 = (undefined4 *)0xffffffff;
      piVar1 = *(int **)(param_1[0x19d] + 4);
      (**(code **)(*piVar1 + 0x90))(piVar1,0x30,&local_4);
    }
    (**(code **)(**(int **)param_1[0x19d] + 8))(*(int **)param_1[0x19d]);
    iVar3 = *(int *)((int)param_1[0x19d] + 0x18);
    free((void *)param_1[0x19d]);
    param_1[0x19d] = iVar3;
  }
  if ((int *)param_1[0x19c] != (int *)0x0) {
    iVar3 = *(int *)param_1[0x19c];
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        piVar1 = *(int **)(*(int *)(param_1[0x19c] + 8) + iVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    _SfList_Destroy_4(param_1[0x19c]);
    param_1[0x19c] = 0;
  }
  iVar3 = param_1[0x1a3];
  while (iVar3 != 0) {
    (**(code **)(**(int **)param_1[0x1a3] + 8))(*(int **)param_1[0x1a3]);
    iVar3 = *(int *)((int)param_1[0x1a3] + 0x18);
    free((void *)param_1[0x1a3]);
    param_1[0x1a3] = iVar3;
  }
  piVar1 = (int *)param_1[0x199];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x19a];
  param_1[0x199] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
    (**(code **)(*(int *)param_1[0x19a] + 8))((int *)param_1[0x19a]);
  }
  piVar1 = (int *)param_1[0x19b];
  param_1[0x19a] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(piVar1);
    (**(code **)(*(int *)param_1[0x19b] + 8))((int *)param_1[0x19b]);
  }
  iVar3 = 0;
  param_1[0x19b] = 0;
  if ((int *)param_1[0x1fd] != (int *)0x0) {
    iVar2 = *(int *)param_1[0x1fd];
    if (0 < iVar2) {
      do {
        piVar1 = *(int **)(*(int *)(param_1[0x1fd] + 8) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    _SfList_Destroy_4(param_1[0x1fd]);
    param_1[0x1fd] = 0;
  }
  piVar1 = (int *)param_1[0x1ff];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar3 = 0;
  param_1[0x1ff] = 0;
  if ((int *)param_1[0x1fe] != (int *)0x0) {
    iVar2 = *(int *)param_1[0x1fe];
    if (0 < iVar2) {
      do {
        piVar1 = *(int **)(*(int *)(param_1[0x1fe] + 8) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    _SfList_Destroy_4(param_1[0x1fe]);
    param_1[0x1fe] = 0;
  }
  piVar1 = (int *)param_1[0x1fc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x10];
  param_1[0x1fc] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x11];
  param_1[0x10] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x11] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  return;
}


