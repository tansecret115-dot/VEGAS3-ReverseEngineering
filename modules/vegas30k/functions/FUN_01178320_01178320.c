/* Module: vegas30k.dll
   Function: FUN_01178320
   Address: 01178320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01178320(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_4;
  
  local_4 = 0;
  bVar1 = *(byte *)(param_1 + 0x14);
  do {
    if (((bVar1 & 1) == 0) ||
       (WaitForSingleObject((HANDLE)param_1[0x10],param_1[0x11]), (param_1[0x14] & 1U) == 0)) {
      return 0;
    }
    piVar2 = (int *)param_1[0x7c];
    iVar6 = 1;
    if (piVar2 == (int *)0x0) {
LAB_011783bb:
      if (((param_1[0x14] & 0x22U) != 0) && ((param_1[0x14] & 0xc000U) == 0)) {
        if (iVar6 == 0) {
          FUN_0118c5a0(param_1[0x59],0x8004e0a2);
        }
        else if (param_1[0x19] == 0) {
          if (param_1[0x3f] == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
            if ((param_1[99] < param_1[0x67]) ||
               ((param_1[99] <= param_1[0x67] && ((uint)param_1[0x62] < (uint)param_1[0x66]))))
            goto LAB_011784a7;
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
            iVar4 = param_1[0x11];
            if (iVar4 == -1) {
              iVar4 = -1;
            }
            param_1[0x11] = iVar4;
            ResetEvent((HANDLE)param_1[0x10]);
            (**(code **)(*param_1 + 0x78))(param_1,param_1[0x59]);
          }
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
          if ((param_1[0x62] == 0) && (param_1[99] == 0)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
            iVar4 = param_1[0x11];
            if (iVar4 == -1) {
              iVar4 = -1;
            }
            param_1[0x11] = iVar4;
            ResetEvent((HANDLE)param_1[0x10]);
            (**(code **)(*param_1 + 0x78))(param_1,param_1[0x59]);
          }
          else {
LAB_011784a7:
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
          }
        }
        if ((param_1[0x32] != 0) && (*(int *)(param_1[0x32] + 0x10) == 0)) {
          FUN_01192380();
          FUN_01192210();
        }
      }
LAB_011784cb:
      if ((param_1[0x14] & 0x400U) != 0) {
        if (iVar6 == 0) {
          FUN_0118c5a0(param_1[0x59],0x8004e0a2);
        }
        else {
          lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
          EnterCriticalSection(lpCriticalSection);
          if ((param_1[0x6d] < param_1[0x71]) ||
             ((param_1[0x6d] <= param_1[0x71] && ((uint)param_1[0x6c] < (uint)param_1[0x70])))) {
            LeaveCriticalSection(lpCriticalSection);
          }
          else {
            LeaveCriticalSection(lpCriticalSection);
            iVar6 = param_1[0x11];
            if (iVar6 == -1) {
              iVar6 = -1;
            }
            param_1[0x11] = iVar6;
            ResetEvent((HANDLE)param_1[0x10]);
            (**(code **)(*param_1 + 0x98))(param_1,param_1[0x59]);
          }
        }
      }
    }
    else {
      (**(code **)(*piVar2 + 0x18))(piVar2,&local_4);
      iVar6 = -((int)~local_4 >> 0x1f);
      if (iVar6 != 0) goto LAB_011783bb;
      if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
        FUN_0118c5a0(param_1[0x59],0x8004e0a2);
      }
      if ((param_1[0x14] & 0x400U) != 0) {
        FUN_0118bf50(0xf0000000,0x8004e0a2);
        goto LAB_011784cb;
      }
    }
    uVar3 = param_1[0x14];
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (param_1[0x82] != 0) {
      uVar5 = 0;
      if (((uVar3 & 0x22) != 0) || ((uVar3 & 0x400) != 0)) {
        iVar6 = _SfGetMillisec_0();
        uVar5 = iVar6 - param_1[0x83];
      }
      if ((uint)param_1[0x82] <= uVar5) {
        FUN_0118c560();
      }
    }
    if ((((*(byte *)(param_1 + 0x17) & 2) != 0) &&
        (piVar2 = (int *)param_1[0x7c], piVar2 != (int *)0x0)) && (param_1[0x84] != 0)) {
      (**(code **)(*piVar2 + 0x198))(piVar2,param_1 + 0x62);
      iVar6 = __alldiv(param_1[0x62],param_1[99],10000,0);
      param_1[0x69] = iVar6;
      iVar6 = _SfGetMillisec_0();
      param_1[0x6a] = iVar6;
    }
    ResetEvent((HANDLE)param_1[0x10]);
    bVar1 = *(byte *)(param_1 + 0x14);
  } while( true );
}


