/* Module: vegas30.exe
   Function: FUN_00560200
   Address: 00560200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00560200(int param_1)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  int *piVar2;
  int iVar3;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return -0x7fff0001;
  }
  puVar1 = (undefined4 *)(param_1 + 0x4cc);
  local_10 = 100;
  local_c = 0;
  local_8 = param_1;
  *puVar1 = 0;
  hMem = GlobalAlloc(0x40,0x20);
  piVar2 = GlobalLock(hMem);
  if (piVar2 != (int *)0x0) {
    piVar2[4] = 1;
    piVar2[1] = 1;
    piVar2[2] = (int)local_18;
    piVar2[5] = 0;
    *piVar2 = (int)&PTR_LAB_0061b1c4;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c));
    *puVar1 = *(undefined4 *)(param_1 + 0x44);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))
                      (*(int **)(param_1 + 0x3c),DAT_0061a2b0,DAT_0061a2b4,DAT_0061a2b8,DAT_0061a2bc
                       ,param_1 + 0x40,DAT_00647e68,DAT_00647e6c,puVar1,piVar2);
    (**(code **)(*piVar2 + 8))(piVar2);
    if (-1 < iVar3) {
      *(undefined4 *)(param_1 + 0x4c8) = 0;
      *(undefined4 *)(param_1 + 0x4d0) = 0;
      return iVar3;
    }
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    return iVar3;
  }
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  return -0x7ff8fff2;
}


