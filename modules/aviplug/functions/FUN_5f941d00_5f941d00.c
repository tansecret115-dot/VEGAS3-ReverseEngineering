/* Module: aviplug.dll
   Function: FUN_5f941d00
   Address: 5f941d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f941d00(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  HGLOBAL hMem;
  int *piVar3;
  HANDLE pvVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_retaddr;
  
  *param_1 = 0;
  hMem = GlobalAlloc(0x42,0x1c0);
  piVar3 = GlobalLock(hMem);
  if (piVar3 == (int *)0x0) {
    *param_1 = 0;
    return 0x8007000e;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(piVar3 + 0x35));
  InitializeCriticalSection((LPCRITICAL_SECTION)(piVar3 + 0x2e));
  pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  piVar3[0x34] = (int)pvVar4;
  if (pvVar4 != (HANDLE)0x0) {
    piVar1 = (int *)param_2[0x11];
    *piVar3 = *param_2;
    piVar3[1] = param_2[1];
    piVar3[2] = param_2[2];
    piVar3[5] = param_2[3];
    piVar3[6] = param_2[4];
    piVar3[8] = param_2[6];
    piVar3[9] = param_2[7];
    piVar3[10] = param_2[8];
    piVar3[0xb] = param_2[9];
    piVar3[0xc] = param_2[10];
    piVar3[0xd] = param_2[0xb];
    piVar3[0xe] = param_2[0xc];
    piVar3[0xf] = param_2[0xd];
    piVar3[0x10] = param_2[0xe];
    piVar3[0x11] = param_2[0xf];
    piVar3[0x12] = param_2[0x10];
    piVar3[3] = piVar1[10];
    piVar3[4] = piVar1[0xb];
    piVar3[0x3b] = piVar1[0x12];
    piVar2 = (int *)*piVar3;
    piVar3[0x3c] = 0;
    piVar6 = piVar1 + 0x13;
    piVar7 = piVar3 + 0x3d;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    piVar6 = piVar1 + 0x2c;
    piVar7 = piVar3 + 0x5e;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
    piVar3[0x14] = 0;
    piVar3[0x15] = *piVar1;
    piVar3[0x16] = piVar1[1];
    piVar3[0x17] = piVar1[2];
    piVar3[0x18] = piVar1[3];
    piVar3[0x19] = piVar1[4];
    piVar3[0x1a] = piVar1[5];
    piVar3[0x1b] = piVar1[6];
    piVar3[0x1c] = piVar1[7];
    piVar3[0x1d] = piVar1[8];
    piVar3[0x1e] = piVar1[9];
    piVar3[0x1f] = piVar1[0xc];
    piVar3[0x20] = piVar1[0xd];
    piVar3[0x21] = piVar1[0xe];
    piVar3[0x22] = piVar1[0xf];
    piVar3[0x23] = piVar1[0x10];
    piVar3[0x2a] = piVar1[0x11];
    piVar3[0x2c] = 0;
    piVar3[0x2d] = 0;
    if (*(int *)(piVar3[0x18] + 0x10) == 0x64737664) {
      piVar3[0x25] = (-(uint)(*(int *)(piVar3[0x18] + 8) != 0x240) & 0xfffffffe) + 0xc;
    }
    *unaff_retaddr = piVar3;
    return 0;
  }
  FUN_5f941ef0(piVar3);
  *param_1 = 0;
  return 0x8007000e;
}


