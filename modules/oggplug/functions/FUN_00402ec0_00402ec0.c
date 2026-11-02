/* Module: oggplug.dll
   Function: FUN_00402ec0
   Address: 00402ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402ec0(int param_1,int param_2)

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
    iVar3 = FUN_00402c60(param_1);
    if (iVar3 < 0) goto LAB_00402f4c;
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
      *piVar4 = (int)&PTR_FUN_00447644;
      piVar4[10] = 0;
    }
    *(int **)(param_1 + 0x14) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
LAB_00402f4c:
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_0044d850,param_2);
    iVar3 = 0;
  }
  return iVar3;
}


