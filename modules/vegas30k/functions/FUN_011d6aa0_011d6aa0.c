/* Module: vegas30k.dll
   Function: FUN_011d6aa0
   Address: 011d6aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011d6aa0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  HANDLE hEvent;
  uint uStack_10;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  do {
    WaitForSingleObject(*(HANDLE *)(param_1 + 600),*(DWORD *)(param_1 + 0x268));
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x14);
    if (uVar6 < 0x3c9) {
      if (uVar6 == 0x3c8) {
LAB_011d6ce1:
        hEvent = *(HANDLE *)(param_1 + 600);
        goto LAB_011d6eec;
      }
      if (uVar6 != 2) {
        if (uVar6 == 3) {
          if ((*(int *)(param_1 + 0x254) != 0) && (uVar6 = 0, *(int *)(param_1 + 0x250) != 0)) {
            do {
              iVar5 = *(int *)(*(int *)(param_1 + 0x254) + uVar6 * 4);
              uVar2 = *(uint *)(iVar5 + 0x10);
              if ((uVar2 & 1) != 0) {
                *(uint *)(iVar5 + 0x10) = uVar2 & 0xfffffffe;
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x254) + uVar6 * 4) + 4) = 0;
                (**(code **)(param_1 + 0x30))(param_1,3,*(undefined4 *)(param_1 + 0x34),0,0,0);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(uint *)(param_1 + 0x250));
          }
        }
        else if (uVar6 == 0x3c7) {
          hEvent = *(HANDLE *)(param_1 + 600);
          goto LAB_011d6eec;
        }
        goto LAB_011d6ee5;
      }
      iVar5 = *(int *)(param_1 + 0x22c);
      if (*(int *)(iVar5 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 0x18) + 8) = *(undefined4 *)(iVar5 + 0x20);
      }
      for (iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + 8); iVar5 != 0;
          iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + 8)) {
        FUN_011d7cd0();
        (**(code **)(**(int **)(param_1 + 0x22c) + 0x18))(*(int **)(param_1 + 0x22c),0,0);
        (**(code **)(param_1 + 0x30))
                  (param_1,0,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x22c),0,0);
        iVar5 = *(int *)(param_1 + 0x22c);
        if (*(int *)(iVar5 + 0x18) != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 0x18) + 8) = *(undefined4 *)(iVar5 + 0x20);
        }
      }
      iVar5 = *(int *)(param_1 + 0x1a8 + *(int *)(param_1 + 0x23c) * 4);
      if ((*(byte *)(iVar5 + 0x10) & 4) != 0) {
        SetEvent(*(HANDLE *)(param_1 + 0x264));
        hEvent = *(HANDLE *)(param_1 + 600);
        goto LAB_011d6eec;
      }
      piVar3 = *(int **)(iVar5 + 0xc);
      uStack_10 = *(uint *)(param_1 + 0x270) - *(uint *)(param_1 + 0x288);
      iVar5 = (*(int *)(param_1 + 0x274) - *(int *)(param_1 + 0x28c)) -
              (uint)(*(uint *)(param_1 + 0x270) < *(uint *)(param_1 + 0x288));
      if ((iVar5 < 1) && (iVar5 < 0)) {
        iVar5 = 0;
        uStack_10 = 0;
      }
      iVar4 = *(int *)(param_1 + 0x27c);
      if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (*(uint *)(param_1 + 0x278) <= uStack_10)))) {
        iVar5 = iVar4;
        uStack_10 = *(uint *)(param_1 + 0x278);
      }
      piVar3[0x18] = uStack_10;
      piVar3[0x19] = iVar5;
      iVar4 = (**(code **)(param_1 + 0x30))
                        (param_1,0x3c9,*(undefined4 *)(param_1 + 0x34),piVar3,uStack_10,iVar5);
      if (iVar4 == 0) {
        piVar3[4] = *(int *)(param_1 + 0x228);
        iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,0xffffffff,0xffffffff);
        if (-1 < iVar4) {
          (**(code **)(*piVar3 + 0x18))(piVar3,0,0);
          iVar5 = *(int *)(param_1 + 0x23c) + 1;
          *(int *)(param_1 + 0x23c) = iVar5;
          if (*(int *)(param_1 + 0x240) <= iVar5) {
            *(undefined4 *)(param_1 + 0x23c) = 0;
          }
          if (*(int *)(param_1 + 0x244) == *(int *)(param_1 + 0x240)) {
            SetEvent(*(HANDLE *)(param_1 + 0x264));
            ResetEvent(*(HANDLE *)(param_1 + 600));
          }
          goto LAB_011d6cc0;
        }
LAB_011d6cc8:
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
        *(int *)(param_1 + 0xc) = iVar4;
        SetEvent(*(HANDLE *)(param_1 + 0x264));
        goto LAB_011d6ce1;
      }
      if (iVar4 == 0x4e012) {
        uVar6 = *(uint *)(param_1 + 0x288);
        *(uint *)(param_1 + 0x288) = uVar6 + uStack_10;
        iVar5 = *(int *)(param_1 + 0x28c) + iVar5 + (uint)CARRY4(uVar6,uStack_10);
        *(int *)(param_1 + 0x28c) = iVar5;
        if ((*(int *)(param_1 + 0x274) <= iVar5) &&
           ((*(int *)(param_1 + 0x274) < iVar5 ||
            (*(uint *)(param_1 + 0x270) <= *(uint *)(param_1 + 0x288))))) {
          SetEvent(*(HANDLE *)(param_1 + 0x264));
          ResetEvent(*(HANDLE *)(param_1 + 600));
        }
        if ((*(int *)(param_1 + 0x244) == 0) && (*(int *)(param_1 + 0x228) == 0)) {
          iVar5 = *(int *)(param_1 + 0x23c) + 1;
          *(int *)(param_1 + 0x23c) = iVar5;
          if (*(int *)(param_1 + 0x240) <= iVar5) {
            *(undefined4 *)(param_1 + 0x23c) = 0;
          }
          *(int **)(param_1 + 0x228) = piVar3;
          (**(code **)(*piVar3 + 0x18))(piVar3,0,0);
        }
      }
      else {
LAB_011d6cc0:
        if (iVar4 < 0) goto LAB_011d6cc8;
      }
    }
    else {
      if (uVar6 == 0x3c9) {
        bVar1 = *(byte *)(param_1 + 8);
        while (((bVar1 & 4) != 0 &&
               (iVar5 = *(int *)(param_1 + 0x1a8 + *(int *)(param_1 + 0x23c) * 4),
               (*(uint *)(iVar5 + 0x10) & 4) == 0))) {
          piVar3 = *(int **)(iVar5 + 0xc);
          piVar3[0x18] = *(int *)(param_1 + 0x278);
          piVar3[0x19] = *(int *)(param_1 + 0x27c);
          iVar5 = (**(code **)(param_1 + 0x30))
                            (param_1,0x3c9,*(undefined4 *)(param_1 + 0x34),
                             *(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(param_1 + 0x278),
                             *(undefined4 *)(param_1 + 0x27c));
          if (iVar5 == 0x4e012) {
            (**(code **)(*piVar3 + 0x38))(piVar3,auStack_8);
            iVar5 = (**(code **)(*piVar3 + 0x1c))
                              (piVar3,*(uint *)(param_1 + 0x278) + uStack_10,
                               *(int *)(param_1 + 0x27c) + iStack_c +
                               (uint)CARRY4(*(uint *)(param_1 + 0x278),uStack_10),0x42000000,0);
          }
          if (iVar5 == 0) {
            piVar3[4] = *(int *)(param_1 + 0x228);
            iVar5 = (**(code **)(*piVar3 + 0x2c))(piVar3,0xffffffff,0xffffffff);
            if (-1 < iVar5) {
              (**(code **)(*piVar3 + 0x18))(piVar3,0,0);
              iVar4 = *(int *)(param_1 + 0x23c) + 1;
              *(int *)(param_1 + 0x23c) = iVar4;
              if (*(int *)(param_1 + 0x240) <= iVar4) {
                *(undefined4 *)(param_1 + 0x23c) = 0;
              }
              *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
              goto LAB_011d6ec1;
            }
LAB_011d6ec3:
            *(int *)(param_1 + 0xc) = iVar5;
            *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
          }
          else {
LAB_011d6ec1:
            if (iVar5 < 0) goto LAB_011d6ec3;
          }
          ResetEvent(*(HANDLE *)(param_1 + 600));
          bVar1 = *(byte *)(param_1 + 8);
        }
      }
      else if (uVar6 == 0x3ca) {
        hEvent = *(HANDLE *)(param_1 + 600);
        goto LAB_011d6eec;
      }
LAB_011d6ee5:
      hEvent = *(HANDLE *)(param_1 + 600);
LAB_011d6eec:
      ResetEvent(hEvent);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      return 0;
    }
  } while( true );
}


