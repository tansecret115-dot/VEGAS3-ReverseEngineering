/* Module: sfpaplug.dll
   Function: FUN_00411950
   Address: 00411950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00411950(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  HGLOBAL hMem;
  int *piVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (param_1[7] == 0) {
    iVar3 = FUN_004117d0(param_1);
    if (iVar3 < 0) goto LAB_004119e0;
  }
  else {
    iVar3 = 0;
  }
  if (param_1[6] == 0) {
    hMem = GlobalAlloc(0x40,0x2c);
    piVar4 = GlobalLock(hMem);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar1 = param_1[7];
      piVar4[1] = 0;
      piVar4[2] = iVar1;
      piVar4[3] = -1;
      piVar4[4] = 0;
      piVar4[5] = 0xc;
      piVar4[6] = 100;
      piVar4[8] = 0;
      piVar4[9] = 0;
      *piVar4 = (int)&PTR_FUN_0044e900;
      piVar4[10] = 0;
    }
    param_1[6] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
LAB_004119e0:
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00455520,param_2);
    iVar3 = 0;
  }
  return iVar3;
}


