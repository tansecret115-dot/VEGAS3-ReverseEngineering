/* Module: extmondrv.dll
   Function: FUN_00401c00
   Address: 00401c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401c00(LPVOID param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  HANDLE pvVar4;
  int iVar5;
  int iVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x90);
  iVar6 = 0;
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)((int)param_1 + 0x18) != 2) && (*(int *)((int)param_1 + 0x18) != 1)) {
    if ((*(int *)(*(int *)((int)param_1 + 0x14) + 0x14) == 0) ||
       (*(int *)(*(int *)((int)param_1 + 0x14) + 0xc4) == 0)) {
      LeaveCriticalSection(lpCriticalSection);
      return -0x7ffbfdf7;
    }
    if (*(int *)((int)param_1 + 0x80) == 0) {
      pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)((int)param_1 + 0x80) = pvVar4;
      if (pvVar4 == (HANDLE)0x0) goto LAB_00401dd4;
    }
    if (*(int *)((int)param_1 + 100) == 0) {
      iVar6 = FUN_00417540((int *)((int)param_1 + 100),4,-1,-1,0x40000000);
      if (iVar6 < 0) goto LAB_00401dc4;
    }
    if (*(int *)((int)param_1 + 0x84) == 0) {
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_004025d0,
                            param_1,0,(LPDWORD)((int)param_1 + 0x8c));
      *(HANDLE *)((int)param_1 + 0x84) = pvVar4;
      if (pvVar4 == (HANDLE)0x0) {
LAB_00401dd4:
        LeaveCriticalSection(lpCriticalSection);
        return -0x7ff8fff2;
      }
    }
    iVar6 = (**(code **)(**(int **)((int)param_1 + 0x14) + 0x50))(*(int **)((int)param_1 + 0x14),1);
    if (iVar6 < 0) goto LAB_00401dc4;
    iVar5 = *(int *)((int)param_1 + 0x14);
    *(undefined4 *)((int)param_1 + 0x48) = *(undefined4 *)(iVar5 + 0x70);
    *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x78);
    *(undefined4 *)((int)param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x74);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x7c);
    uVar2 = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + 0x30) = uVar2;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    if ((*(byte *)((int)param_1 + 0x4a) & 0x20) == 0x20) {
      bVar1 = *(byte *)((int)param_1 + 0x4b);
      *(undefined4 *)((int)param_1 + 0x28) = 400000;
      bVar3 = bVar1 & 0x38;
      *(undefined4 *)((int)param_1 + 0x2c) = 0;
      *(undefined4 *)((int)param_1 + 0x40) = 6;
      *(undefined4 *)((int)param_1 + 0x44) = 72000;
      if ((bVar1 & 0x38) == 0) {
        *(undefined4 *)((int)param_1 + 0x60) = 1;
        *(undefined4 *)((int)param_1 + 0x58) = 0x768;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x60) = 1;
        *(uint *)((int)param_1 + 0x58) = (-(uint)((bVar1 & 0x38) != 8) & 0xfffffe22) + 0x6ce;
      }
    }
    else {
      bVar1 = *(byte *)((int)param_1 + 0x4b);
      *(undefined4 *)((int)param_1 + 0x28) = 0x51762;
      bVar3 = bVar1 & 0x38;
      *(undefined4 *)((int)param_1 + 0x2c) = 0;
      *(undefined4 *)((int)param_1 + 0x40) = 5;
      *(undefined4 *)((int)param_1 + 0x44) = 60000;
      if ((bVar1 & 0x38) == 0) {
        iVar5 = 0x62c;
      }
      else {
        iVar5 = (-(uint)((bVar1 & 0x38) != 8) & 0xfffffe71) + 0x5ac;
      }
      *(int *)((int)param_1 + 0x58) = iVar5;
      *(undefined4 *)((int)param_1 + 0x60) = 0;
    }
    if (bVar3 == 0) {
      iVar5 = 48000;
    }
    else {
      iVar5 = (-(uint)(bVar3 != 8) & 0xffffd0bc) + 0xac44;
    }
    *(undefined4 *)((int)param_1 + 0x38) = 0;
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(int *)((int)param_1 + 0x5c) = iVar5;
    *(undefined4 *)((int)param_1 + 0x3c) = 0;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x18) = 1;
LAB_00401dc4:
  LeaveCriticalSection(lpCriticalSection);
  return iVar6;
}


