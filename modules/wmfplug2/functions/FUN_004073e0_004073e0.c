/* Module: wmfplug2.dll
   Function: FUN_004073e0
   Address: 004073e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004073e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL hMem;
  int *piVar3;
  
  *param_2 = 0;
  iVar2 = FUN_00407490(param_1 + -4);
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 1;
  }
  if ((-1 < iVar2) && (*(int *)(param_1 + 0x28) == 0)) {
    hMem = GlobalAlloc(0x40,0x2c);
    piVar3 = GlobalLock(hMem);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c);
      piVar3[1] = 0;
      piVar3[2] = iVar2;
      piVar3[3] = -1;
      piVar3[4] = 0;
      piVar3[5] = 0xc;
      piVar3[6] = 100;
      piVar3[8] = 0;
      piVar3[9] = 0;
      *piVar3 = (int)&PTR_FUN_0047bca8;
      piVar3[10] = 0;
    }
    *(int **)(param_1 + 0x28) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_004851d8,param_2);
  }
  return 0;
}


