/* Module: enlv3260.dll
   Function: FUN_661d17d0
   Address: 661d17d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_661d17d0(int *param_1)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  int *piVar7;
  void *pvVar8;
  DWORD DVar9;
  uint uVar10;
  HANDLE local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  if (param_1 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  (**(code **)(*param_1 + 4))(param_1);
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 0x24))(piVar7);
    if (iVar5 < 0) goto LAB_661d1d13;
    piVar7 = *(int **)(param_1[1] + 0x14);
    param_1[2] = (int)piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
      if ((HANDLE)param_1[7] != (HANDLE)0x0) {
        local_14 = param_1[5];
        local_10 = param_1[6];
        local_18 = (HANDLE)param_1[7];
        DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
        while (DVar6 == 0x102) {
          iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
          if (iVar5 < 0) goto LAB_661d1d13;
          DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
        }
        if (DVar6 != 0) {
          iVar5 = -0x7fffbffb;
          goto LAB_661d1d13;
        }
        OutputDebugStringA(s_____Received_FileHeaderReady_Sig_661d61b0);
        if ((HANDLE)param_1[8] != (HANDLE)0x0) {
          local_14 = param_1[5];
          local_10 = param_1[6];
          local_18 = (HANDLE)param_1[8];
          DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
          while (DVar6 == 0x102) {
            iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
            if (iVar5 < 0) goto LAB_661d1d13;
            DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
          }
          if (DVar6 != 0) {
            iVar5 = -0x7fffbffb;
            goto LAB_661d1d13;
          }
          OutputDebugStringA(s_____Received_FileHeaderRequested_661d6180);
          if ((param_1[1] != 0) && (param_1[0xe] != 0)) {
            iVar5 = (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],0,param_1[0xe]);
            if ((-1 < iVar5) && (iVar5 = (**(code **)(*param_1 + 0x38))(param_1), iVar5 < 0))
            goto LAB_661d1d13;
            OutputDebugStringA(s_____File_Header_Sent______661d6164);
          }
          piVar7 = (int *)FUN_661d1770(param_1);
          if (param_1[0xb] != 0) {
            local_8 = (int *)0x0;
            if (piVar7 != (int *)0x0) {
              do {
                pvVar1 = *(HANDLE *)(param_1[0xb] + (int)local_8 * 4);
                if (pvVar1 == (HANDLE)0x0) goto LAB_661d1d0e;
                local_10 = param_1[6];
                local_14 = param_1[5];
                local_18 = pvVar1;
                DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
                while (DVar6 == 0x102) {
                  iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
                  if (iVar5 < 0) goto LAB_661d1d13;
                  DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
                }
                if (DVar6 != 0) goto LAB_661d1d62;
                OutputDebugStringA(s_____Received_a_StreamHeaderReady_661d6134);
                local_8 = (int *)((int)local_8 + 1);
              } while (local_8 < piVar7);
            }
            if (param_1[0xc] != 0) {
              local_8 = (int *)0x0;
              if (piVar7 != (int *)0x0) {
                do {
                  pvVar1 = *(HANDLE *)(param_1[0xc] + (int)local_8 * 4);
                  if (pvVar1 == (HANDLE)0x0) goto LAB_661d1d0e;
                  local_14 = param_1[5];
                  local_10 = param_1[6];
                  local_18 = pvVar1;
                  DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
                  while (DVar6 == 0x102) {
                    iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
                    if (iVar5 < 0) goto LAB_661d1d13;
                    DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
                  }
                  if (DVar6 != 0) goto LAB_661d1d62;
                  OutputDebugStringA(s_____Received_a_StreamHeaderReque_661d6100);
                  local_8 = (int *)((int)local_8 + 1);
                } while (local_8 < piVar7);
              }
              if (((param_1[1] != 0) && (param_1 + 0xf != (int *)0x0)) &&
                 (local_c = (int *)0x0, piVar3 = param_1 + 0xf, piVar7 != (int *)0x0)) {
                do {
                  local_8 = piVar3;
                  if (*local_8 == 0) goto LAB_661d1d62;
                  iVar5 = (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],0,*local_8);
                  if ((-1 < iVar5) && (iVar5 = (**(code **)(*param_1 + 0x38))(param_1), iVar5 < 0))
                  goto LAB_661d1d13;
                  OutputDebugStringA(s_____Stream_Header_Sent______661d60e0);
                  local_c = (int *)((int)local_c + 1);
                  local_8 = local_8 + 1;
                  piVar3 = local_8;
                } while (local_c < piVar7);
              }
              if (param_1[10] != 0) {
                local_8 = (int *)0x0;
                if (piVar7 != (int *)0x0) {
                  do {
                    pvVar1 = *(HANDLE *)(param_1[10] + (int)local_8 * 4);
                    if (pvVar1 == (HANDLE)0x0) goto LAB_661d1d0e;
                    local_10 = param_1[6];
                    local_14 = param_1[5];
                    local_18 = pvVar1;
                    DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
                    while (DVar6 == 0x102) {
                      iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
                      if (iVar5 < 0) goto LAB_661d1d13;
                      DVar6 = WaitForMultipleObjects(3,&local_18,0,0x32);
                    }
                    if (DVar6 != 0) goto LAB_661d1d62;
                    OutputDebugStringA(s_____Received_a_PacketsRequested_S_661d60b0);
                    local_8 = (int *)((int)local_8 + 1);
                  } while (local_8 < piVar7);
                }
                DVar6 = WaitForSingleObject((HANDLE)param_1[5],0);
                while (DVar6 != 0) {
                  if (*(int *)(param_1[1] + 0x62) == 0) {
                    iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
                    if (iVar5 < 0) goto LAB_661d1d13;
                    DVar6 = 0xfa;
LAB_661d1c28:
                    Sleep(DVar6);
                  }
                  else {
                    pvVar8 = (void *)FUN_661d2a60(*(int *)(param_1[1] + 0x62));
                    if (pvVar8 == (void *)0x0) {
                      iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
                      if (-1 < iVar5) {
                        DVar6 = 1;
                        goto LAB_661d1c28;
                      }
                      goto LAB_661d1d13;
                    }
                    puVar2 = *(undefined4 **)((int)pvVar8 + 0x10);
                    local_8 = (int *)0x0;
                    if ((puVar2 != (undefined4 *)0x0) && (*(int *)((int)pvVar8 + 8) != 1)) {
                      (**(code **)*puVar2)(puVar2,&DAT_661d5240,&local_8);
                    }
                    iVar5 = (**(code **)(*(int *)param_1[2] + 0x18))((int *)param_1[2],0,local_8);
                    if (iVar5 < 0) break;
                    if (local_8 != (int *)0x0) {
                      (**(code **)(*local_8 + 8))(local_8);
                    }
                    piVar3 = *(int **)((int)pvVar8 + 0x10);
                    if (piVar3 != (int *)0x0) {
                      (**(code **)(*piVar3 + 8))(piVar3);
                      *(undefined4 *)((int)pvVar8 + 0x10) = 0;
                    }
                    operator_delete(pvVar8);
                    iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
                    if (iVar5 < 0) goto LAB_661d1d13;
                  }
                  DVar6 = WaitForSingleObject((HANDLE)param_1[5],0);
                }
                if (param_1[2] == 0) goto LAB_661d1d35;
                uVar10 = 0;
                if (piVar7 != (int *)0x0) {
                  do {
                    (**(code **)(*(int *)param_1[2] + 0x1c))((int *)param_1[2],uVar10);
                    OutputDebugStringA(s____StreamDone____661d609c);
                    uVar10 = uVar10 + 1;
                  } while ((int *)(uVar10 & 0xffff) < piVar7);
                }
                DVar6 = GetTickCount();
                piVar7 = (int *)0x0;
                DVar9 = WaitForSingleObject((HANDLE)param_1[9],1);
                if (DVar9 != 0) {
                  local_c = (int *)(DVar6 + 5000);
                  do {
                    (**(code **)(*(int *)param_1[2] + 0x20))((int *)param_1[2]);
                    piVar7 = (int *)GetTickCount();
                    Sleep(0);
                    if (local_c <= piVar7) goto LAB_661d1cdb;
                    DVar9 = WaitForSingleObject((HANDLE)param_1[9],1);
                  } while (DVar9 != 0);
                }
                OutputDebugStringA(s____Received_Encoder_Done_Signal__661d6078);
LAB_661d1cdb:
                if (piVar7 < (int *)(DVar6 + 5000)) {
                  OutputDebugStringA(s____Threads_Encoder_Response_Rele_661d604c);
                  (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
                  param_1[2] = 0;
                }
                else {
                  param_1[2] = 0;
                }
                goto LAB_661d1d13;
              }
            }
          }
        }
      }
    }
  }
LAB_661d1d0e:
  iVar5 = -0x7ffbfff9;
LAB_661d1d13:
  if (param_1[2] != 0) {
    OutputDebugStringA(s____Threads_Encoder_Response_Rele_661d604c);
    (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
    param_1[2] = 0;
  }
LAB_661d1d35:
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + 0xc,0);
  }
  (**(code **)(*param_1 + 8))(param_1);
  OutputDebugStringA(s_______Sender_Thread_is_exitting__661d6024);
  return iVar5;
LAB_661d1d62:
  iVar5 = -0x7fffbffb;
  goto LAB_661d1d13;
}


