/* Module: vegas30k.dll
   Function: FUN_0118a580
   Address: 0118a580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118a580(int *param_1,UINT *param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
                int param_7)

{
  int *piVar1;
  UINT uPeriod;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int *piVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    return 0;
  }
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[0x10] = (int)pvVar2;
  ResetEvent(pvVar2);
  param_1[0x11] = -1;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[0x2a] = (int)pvVar2;
  ResetEvent(pvVar2);
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_01178600,param_1,0,
                        (LPDWORD)(param_1 + 0x13));
  param_1[0x12] = (int)pvVar2;
  uPeriod = *param_2;
  param_1[0x79] = param_3;
  param_1[0x78] = uPeriod;
  timeBeginPeriod(uPeriod);
  iVar6 = -0x7ff8fff2;
  pvVar3 = GlobalAlloc(0x40,0x10);
  pvVar4 = GlobalLock(pvVar3);
  if (pvVar4 == (LPVOID)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_01192040(param_1,0);
  }
  param_1[0x31] = (int)piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    pvVar3 = GlobalAlloc(0x40,0x10);
    pvVar4 = GlobalLock(pvVar3);
    if (pvVar4 == (LPVOID)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_01192040(param_1,1);
    }
    param_1[0x33] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
      param_1[0x14] = 1;
      param_1[0x57] = param_7;
      param_1[0x56] = param_6;
      param_1[0x17] = param_1[0x17] & 0xfffffffdU | 1;
      if ((param_4 & 0x30000000) != 0) {
        piVar5 = param_1 + 0x7d;
        iVar6 = FUN_011a5d90(0,&DAT_011d9c70,piVar5,0);
        if (iVar6 < 0) goto LAB_0118a75a;
        (**(code **)(*(int *)*piVar5 + 0xc))((int *)*piVar5,param_5);
        piVar1 = param_1 + 0x7a;
        *piVar1 = 0;
        iVar6 = (**(code **)(*(int *)*piVar5 + 0x10))((int *)*piVar5,&DAT_011d9a40,piVar1);
        if (iVar6 < 0) goto LAB_0118a75a;
        (**(code **)(*(int *)*piVar1 + 0x48))((int *)*piVar1,&LAB_01178630,param_1);
        (**(code **)(*(int *)*piVar5 + 0x10))((int *)*piVar5,&DAT_011d9b20,param_1 + 0x7b);
      }
      if (((param_4 & 0xc0000000) == 0) ||
         (iVar6 = FUN_011a3e30(0,&DAT_011d9e10,param_1 + 0x7f,0), -1 < iVar6)) {
        FUN_0118a350();
        if ((code *)param_1[0x56] != (code *)0x0) {
          (*(code *)param_1[0x56])(param_1,9,0,param_1[0x57],0,0);
        }
        if (-1 < iVar6) {
          return iVar6;
        }
      }
    }
  }
LAB_0118a75a:
  (**(code **)(*param_1 + 0x1c))(param_1);
  return iVar6;
}


