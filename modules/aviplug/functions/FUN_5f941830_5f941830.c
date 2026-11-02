/* Module: aviplug.dll
   Function: FUN_5f941830
   Address: 5f941830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f941830(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  HGLOBAL hMem;
  undefined4 *puVar4;
  int *piVar5;
  
  *param_3 = 0;
  piVar5 = (int *)0x0;
  piVar1 = param_1 + 0x182;
  if (param_1[0x19d] != 0) {
    return param_1[0x19d];
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x184));
  piVar3 = (int *)*piVar1;
  if (piVar1 != piVar3) {
    do {
      if (piVar3[3] < param_2) {
        if (piVar5 != (int *)0x0) {
          iVar2 = piVar5[3];
          goto joined_r0x5f941885;
        }
      }
      else if (piVar5 != (int *)0x0) {
        iVar2 = piVar5[3];
joined_r0x5f941885:
        if (iVar2 < piVar3[3]) {
          piVar5 = piVar3;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar1 != piVar3);
    if (piVar5 != (int *)0x0) {
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      *piVar5 = (int)piVar5;
      if ((int *)*piVar1 == piVar1) {
        ResetEvent((HANDLE)param_1[0x18a]);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x184));
  if (piVar5 == (int *)0x0) {
    if (param_1[0x18b] < param_1[0x18c]) {
      hMem = GlobalAlloc(0x42,0x30);
      piVar5 = GlobalLock(hMem);
      if (piVar5 == (int *)0x0) {
        return -0x7ff8fff2;
      }
      param_1[0x18b] = param_1[0x18b] + 1;
    }
    else {
      piVar5 = FUN_5f98fe50(piVar1,0xffffffff);
      if (piVar5 == (int *)0x0) {
        return -0x7ffb1fd4;
      }
    }
  }
  if (piVar5[3] < param_2) {
    puVar4 = FUN_5f9401f0(*param_1,piVar5[2],param_2,0,&param_2);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_5f98fe00(piVar1,piVar5);
      return -0x7ff8fff2;
    }
    piVar5[2] = (int)puVar4;
    piVar5[3] = param_2;
  }
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 1;
  piVar5[8] = 0;
  piVar5[10] = (int)piVar1;
  piVar5[0xb] = (int)FUN_5f941800;
  *param_3 = piVar5;
  return 0;
}


