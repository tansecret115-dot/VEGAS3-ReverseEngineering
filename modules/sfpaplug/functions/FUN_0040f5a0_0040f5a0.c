/* Module: sfpaplug.dll
   Function: FUN_0040f5a0
   Address: 0040f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040f5a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL hMem;
  int *piVar3;
  
  *param_2 = 0;
  iVar2 = FUN_0040f3a0(param_1 + -4);
  if (*(int *)(param_1 + 0x44) == 0) {
    return 1;
  }
  if ((-1 < iVar2) && (*(int *)(param_1 + 0x20) == 0)) {
    hMem = GlobalAlloc(0x40,0x2c);
    piVar3 = GlobalLock(hMem);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x24);
      piVar3[1] = 0;
      piVar3[2] = iVar2;
      piVar3[3] = -1;
      piVar3[4] = 0;
      piVar3[5] = 0xc;
      piVar3[6] = 100;
      piVar3[8] = 0;
      piVar3[9] = 0;
      *piVar3 = (int)&PTR_FUN_0044e940;
      piVar3[10] = 0;
    }
    *(int **)(param_1 + 0x20) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00455520,param_2);
  }
  return 0;
}


