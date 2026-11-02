/* Module: vegas30k.dll
   Function: FUN_0118eed0
   Address: 0118eed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118eed0(LPVOID param_1,uint param_2,int param_3)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE pvVar4;
  uint unaff_EBX;
  undefined4 unaff_ESI;
  LPVOID local_4;
  
  local_4 = param_1;
  if (*(int *)((int)param_1 + 0x18) != 0) {
    *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)param_1 + 0x6c);
    _SFSMPTE_NanoToSMPTE_12
              (*(uint *)((int)param_1 + 0x70) + param_2,
               *(int *)((int)param_1 + 0x74) + param_3 +
               (uint)CARRY4(*(uint *)((int)param_1 + 0x70),param_2),
               (undefined4 *)((int)param_1 + 0x30));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),4,*(undefined4 *)((int)param_1 + 0x34));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),5,*(undefined4 *)((int)param_1 + 0x38));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),6,*(undefined4 *)((int)param_1 + 0x3c));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),7,*(undefined4 *)((int)param_1 + 0x40));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),8,0);
    syncoutUpdatePosition
              (*(undefined4 *)((int)param_1 + 0x28),*(uint *)((int)param_1 + 0x70) + param_2,
               *(int *)((int)param_1 + 0x74) + param_3 +
               (uint)CARRY4(*(uint *)((int)param_1 + 0x70),param_2),600000000,0);
    if (*(int *)((int)param_1 + 0x7c) != 0) {
      syncoutSendFFrameMsg(*(undefined4 *)((int)param_1 + 0x28));
    }
    return 0;
  }
  uVar2 = syncoutAllocHandle();
  *(undefined4 *)((int)param_1 + 0x28) = uVar2;
  local_4 = (LPVOID)0x0;
  (**(code **)(**(int **)((int)param_1 + 0x68) + 0x18))(*(int **)((int)param_1 + 0x68),0,&local_4);
  pvVar1 = local_4;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)param_1 + 0x6c);
    _SFSMPTE_NanoToSMPTE_12
              (*(uint *)((int)param_1 + 0x70) + unaff_EBX,
               (int)local_4 +
               (uint)CARRY4(*(uint *)((int)param_1 + 0x70),unaff_EBX) +
               *(int *)((int)param_1 + 0x74),(undefined4 *)((int)param_1 + 0x30));
    iVar3 = *(int *)((int)param_1 + 0x6c);
    if (iVar3 == 5) {
      iVar3 = 1;
    }
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),3,iVar3);
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),0,*(undefined4 *)((int)param_1 + 0x78));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),1,*(undefined4 *)((int)param_1 + 0x84));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),2,*(undefined4 *)((int)param_1 + 0x80));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),0xb,*(undefined4 *)((int)param_1 + 0x94));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),0xc,0);
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),4,*(undefined4 *)((int)param_1 + 0x34));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),5,*(undefined4 *)((int)param_1 + 0x38));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),6,*(undefined4 *)((int)param_1 + 0x3c));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),7,*(undefined4 *)((int)param_1 + 0x40));
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),8,0);
    if ((*(int *)((int)param_1 + 0x4c) < 1) &&
       ((*(int *)((int)param_1 + 0x4c) < 0 || (*(int *)((int)param_1 + 0x48) == 0)))) {
      *(undefined4 *)((int)param_1 + 0x48) = 0x2a69c000;
      *(undefined4 *)((int)param_1 + 0x4c) = 0xc9;
    }
    uVar2 = __alldiv(*(uint *)((int)param_1 + 0x70) + *(uint *)((int)param_1 + 0x48),
                     *(int *)((int)param_1 + 0x74) + *(int *)((int)param_1 + 0x4c) +
                     (uint)CARRY4(*(uint *)((int)param_1 + 0x70),*(uint *)((int)param_1 + 0x48)),
                     10000,0);
    syncoutSetParam(*(undefined4 *)((int)param_1 + 0x28),10,uVar2);
    iVar3 = syncoutOpen(*(undefined4 *)((int)param_1 + 0x28),unaff_ESI);
    if (iVar3 == 0) {
      *(undefined4 *)((int)param_1 + 0x98) = 0;
      *(undefined4 *)((int)param_1 + 0x18) = 1;
      *(undefined4 *)((int)param_1 + 0x58) = 0xffffffff;
      syncoutUpdatePosition
                (*(undefined4 *)((int)param_1 + 0x28),*(uint *)((int)param_1 + 0x70) + unaff_EBX,
                 (int)pvVar1 +
                 (uint)CARRY4(*(uint *)((int)param_1 + 0x70),unaff_EBX) +
                 *(int *)((int)param_1 + 0x74),600000000,0);
      if (*(int *)((int)param_1 + 0x7c) != 0) {
        syncoutSendFFrameMsg(*(undefined4 *)((int)param_1 + 0x28));
      }
      pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      *(HANDLE *)((int)param_1 + 0x54) = pvVar4;
      ResetEvent(pvVar4);
      *(undefined4 *)((int)param_1 + 0x58) = 0xffffffff;
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0118f690,param_1,0,
                            (LPDWORD)((int)param_1 + 0x5c));
      *(HANDLE *)((int)param_1 + 0x50) = pvVar4;
      *(uint *)((int)param_1 + 0x10) = *(uint *)((int)param_1 + 0x10) | 2;
      return 0;
    }
    syncoutFreeHandle(*(undefined4 *)((int)param_1 + 0x28));
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    return 0x80040964;
  }
  return 0x8004e001;
}


