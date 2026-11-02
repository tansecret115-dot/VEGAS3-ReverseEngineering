/* Module: enlv3260.dll
   Function: FUN_661d1240
   Address: 661d1240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d1240(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  uint uVar6;
  
  piVar2 = param_1;
  if (param_1[7] != 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
    piVar2[0xe] = (int)param_2;
    (**(code **)(*param_2 + 4))(param_2);
    piVar1 = piVar2 + 0x29;
    (**(code **)(*(int *)piVar2[0xe] + 0x10))((int *)piVar2[0xe],s_StreamCount_661d6018,piVar1);
    pvVar3 = operator_new(*piVar1 << 2);
    piVar2[0xb] = (int)pvVar3;
    pvVar3 = operator_new(*piVar1 << 2);
    piVar2[0xc] = (int)pvVar3;
    pvVar3 = operator_new(*piVar1 << 2);
    piVar2[10] = (int)pvVar3;
    uVar6 = 0;
    if (*piVar1 != 0) {
      do {
        pvVar4 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
        *(HANDLE *)(piVar2[0xb] + uVar6 * 4) = pvVar4;
        pvVar4 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
        *(HANDLE *)(piVar2[0xc] + uVar6 * 4) = pvVar4;
        pvVar4 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
        uVar6 = uVar6 + 1;
        *(HANDLE *)(piVar2[10] + -4 + uVar6 * 4) = pvVar4;
      } while (uVar6 < (uint)piVar2[0x29]);
    }
    (**(code **)(*piVar2 + 0x10))(piVar2);
    param_1 = (int *)0xffffffff;
    BVar5 = ReleaseSemaphore((HANDLE)piVar2[7],1,(LPLONG)&param_1);
    return (-(uint)(BVar5 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return -0x7ffbfff9;
}


