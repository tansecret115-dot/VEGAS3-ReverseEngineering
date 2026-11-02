/* Module: sfcdi.dll
   Function: SfTAO_CloseSession
   Address: 5bf182f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfTAO_CloseSession(void *) */

long SfTAO_CloseSession(void *param_1)

{
  tCDRPARAMS_CLOSESESSION *ptVar1;
  long lVar2;
  int iVar3;
  tCDRPARAMS_CLOSESESSION *ptVar4;
  
                    /* 0x182f0  132  ?SfTAO_CloseSession@@YGJPAX@Z */
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  if ((*(uint *)((int)param_1 + 4) & 8) == 0) {
    ptVar1 = (tCDRPARAMS_CLOSESESSION *)((int)param_1 + 0x74);
    ptVar4 = ptVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)ptVar4 = 0;
      ptVar4 = ptVar4 + 4;
    }
    *(undefined4 *)((int)param_1 + 0x8c) = *(undefined4 *)((int)param_1 + 0x1c);
    *(undefined4 *)((int)param_1 + 0x78) = 1;
    *(undefined4 *)ptVar1 = 1;
    if ((*(uint *)((int)param_1 + 4) & 0x80) != 0) {
      *(uint *)((int)param_1 + 0x90) = *(uint *)((int)param_1 + 0x90) | 1;
    }
    lVar2 = cdr_CloseSession(*(HSFCD__ **)param_1,ptVar1);
    return lVar2;
  }
  (**(code **)(**(int **)((int)param_1 + 0x1c) + 0xc))(*(int **)((int)param_1 + 0x1c));
  (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x2c))(*(int **)((int)param_1 + 0x1c),0);
  return 0;
}


