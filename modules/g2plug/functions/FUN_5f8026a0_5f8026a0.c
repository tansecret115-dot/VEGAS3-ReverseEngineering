/* Module: g2plug.dll
   Function: FUN_5f8026a0
   Address: 5f8026a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f8026a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  HGLOBAL hMem;
  int *piVar4;
  
  if (param_2 == 0) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = FUN_5f802940(param_1);
    if (iVar3 < 0) goto LAB_5f80272c;
  }
  else {
    iVar3 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    hMem = GlobalAlloc(0x40,0x2c);
    piVar4 = GlobalLock(hMem);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      piVar4[1] = 0;
      piVar4[2] = iVar1;
      piVar4[3] = -1;
      piVar4[4] = 0;
      piVar4[5] = 0xc;
      piVar4[6] = 100;
      piVar4[8] = 0;
      piVar4[9] = 0;
      *piVar4 = (int)&PTR_FUN_5f86a9f8;
      piVar4[10] = 0;
    }
    *(int **)(param_1 + 0x14) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
LAB_5f80272c:
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_5f872fc8,param_2);
    iVar3 = 0;
  }
  return iVar3;
}


