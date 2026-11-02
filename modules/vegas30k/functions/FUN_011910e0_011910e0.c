/* Module: vegas30k.dll
   Function: FUN_011910e0
   Address: 011910e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011910e0(LPVOID param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  HANDLE pvVar6;
  int *unaff_ESI;
  
  iVar3 = 0x4e001;
  if ((*(byte *)((int)param_1 + 0xc) & 1) == 0) {
    *(undefined1 *)((int)param_1 + 0x138) = 0xff;
    *(undefined1 *)((int)param_1 + 0x139) = 0;
    *(undefined1 *)((int)param_1 + 0x13a) = 0;
    puVar1 = (uint *)((int)param_1 + 0x144);
    *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & 0xffffe03b;
    *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_1 + 0x18);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xb8) = 0;
    *(undefined4 *)((int)param_1 + 0xe8) = 0;
    *(undefined4 *)((int)param_1 + 0xa0) = 0;
    *(undefined1 *)((int)param_1 + 0x13b) = 0;
    *(undefined1 *)((int)param_1 + 0x13c) = 0;
    *(undefined4 *)((int)param_1 + 0x1164) = 0;
    *(undefined4 *)((int)param_1 + 0x1168) = 0;
    *(undefined4 *)((int)param_1 + 0x1160) = 0;
    *(undefined4 *)((int)param_1 + 0x130) = 0;
    *(undefined4 *)((int)param_1 + 0x134) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    *(undefined4 *)((int)param_1 + 0x50) = 0;
    *(undefined4 *)((int)param_1 + 0x4c) = 0;
    *(undefined4 *)((int)param_1 + 0x48) = 0;
    *(undefined4 *)((int)param_1 + 0x58) = 0;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + 0x94) = 0;
    *(undefined4 *)((int)param_1 + 0xbc) = 0;
    *(undefined4 *)((int)param_1 + 0xec) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    *puVar1 = 3;
    *(undefined4 *)((int)param_1 + 0x148) = 0x20;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + 0x40) = 0;
    iVar3 = (**(code **)(**(int **)((int)param_1 + 0x30) + 0xc))
                      (*(int **)((int)param_1 + 0x30),&DAT_011d9c80,
                       (undefined4 *)((int)param_1 + 0x40));
    if (-1 < iVar3) {
      *(undefined4 *)((int)param_1 + 0x1180) = 0;
      *(undefined4 *)((int)param_1 + 0x1184) = 0;
      *(undefined4 *)((int)param_1 + 0x1188) = 0;
      *(undefined4 *)((int)param_1 + 0x118c) = 0;
      *(undefined2 *)((int)param_1 + 0x1190) = 0;
      (**(code **)(*(int *)*unaff_ESI + 0x6c))
                ((int *)*unaff_ESI,(undefined4 *)((int)param_1 + 0x1180),0);
      iVar3 = -0x7ff8fff2;
      pvVar4 = calloc(1,*puVar1 << 2);
      *(void **)((int)param_1 + 0x14c) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar4 = calloc(1,*puVar1 << 2);
        *(void **)((int)param_1 + 0x150) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          uVar5 = 0;
          if (*puVar1 != 0) {
            do {
              uVar5 = uVar5 + 1;
              *(undefined4 *)(*(int *)((int)param_1 + 0x150) + -4 + uVar5 * 4) = 0;
            } while (uVar5 < *puVar1);
          }
          *(undefined4 *)((int)param_1 + 0x154) = 0;
          *(undefined4 *)((int)param_1 + 0x158) = 0;
          iVar3 = (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x24))
                            (*(int **)((int)param_1 + 0x3c),*(undefined4 *)((int)param_1 + 0x14c),
                             (int)param_1 + 0x148,puVar1,FUN_011916d0,param_1);
          if (-1 < iVar3) {
            iVar3 = -0x7ff8fff2;
            pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
            *(HANDLE *)((int)param_1 + 0x24) = pvVar6;
            if (pvVar6 != (HANDLE)0x0) {
              ResetEvent(pvVar6);
              *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
              pvVar6 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_01191b20,param_1,0,
                                    (LPDWORD)((int)param_1 + 0x2c));
              *(HANDLE *)((int)param_1 + 0x20) = pvVar6;
              if (pvVar6 != (HANDLE)0x0) {
                *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) | 1;
                return 0;
              }
            }
          }
        }
      }
    }
    if (*(HANDLE *)((int)param_1 + 0x24) != (HANDLE)0x0) {
      SetEvent(*(HANDLE *)((int)param_1 + 0x24));
      if (*(HANDLE *)((int)param_1 + 0x20) != (HANDLE)0x0) {
        WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x20),2000);
      }
      CloseHandle(*(HANDLE *)((int)param_1 + 0x24));
      *(undefined4 *)((int)param_1 + 0x24) = 0;
      if (*(HANDLE *)((int)param_1 + 0x20) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)((int)param_1 + 0x20));
      }
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
    if (*(void **)((int)param_1 + 0x14c) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x14c));
    }
    *(undefined4 *)((int)param_1 + 0x14c) = 0;
    if (*(void **)((int)param_1 + 0x150) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x150));
    }
    *(undefined4 *)((int)param_1 + 0x150) = 0;
    piVar2 = (int *)*unaff_ESI;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *unaff_ESI = 0;
  }
  return iVar3;
}


