/* Module: vegas30k.dll
   Function: FUN_01186e60
   Address: 01186e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01186e60(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  ResetEvent(*(HANDLE *)(param_1 + 0x828));
  iVar1 = *(int *)(param_1 + 0x620);
  while (iVar1 != 0) {
    do {
      uVar2 = *(uint *)(param_1 + 0x20);
      uVar4 = uVar2 & 0x60;
      if ((uVar2 & 0x800) != 0) {
        uVar4 = (uint)(byte)((byte)uVar4 | 0x20);
      }
      if ((uVar2 & 0x1000) != 0) {
        uVar4 = uVar4 | 0x40;
      }
      if ((uVar2 & 0x80000000) != 0) {
        uVar4 = 0x80000000;
      }
      if (uVar4 < 0x1801) {
        if (uVar4 == 0x1800) {
LAB_01186f86:
          if ((*(int *)(param_1 + 0x840) == *(int *)(param_1 + 0x858)) &&
             (*(int *)(param_1 + 0x844) == *(int *)(param_1 + 0x85c))) {
            do {
              SetEvent(*(HANDLE *)(param_1 + 0x81c));
              SetEvent(*(HANDLE *)(param_1 + 0x818));
              ResetEvent(*(HANDLE *)(param_1 + 0x810));
              WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
              ResetEvent(*(HANDLE *)(param_1 + 0x810));
              SetEvent(*(HANDLE *)(param_1 + 0x818));
              uVar2 = *(uint *)(param_1 + 0x20);
              uVar4 = uVar2 & 0x60;
              if ((uVar2 & 0x1000) != 0) {
                uVar4 = uVar4 | 0x40;
              }
              if ((uVar2 & 0x2000) != 0) {
                SetEvent(*(HANDLE *)(param_1 + 0x828));
                *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff;
              }
            } while ((((*(int *)(param_1 + 0x620) != 0) && ((uVar4 & 0x40) != 0)) &&
                     (*(int *)(param_1 + 0x840) == *(int *)(param_1 + 0x858))) &&
                    (*(int *)(param_1 + 0x844) == *(int *)(param_1 + 0x85c)));
          }
          ResetEvent(*(HANDLE *)(param_1 + 0x81c));
        }
        else {
          if (uVar4 != 0x20) {
            if (uVar4 == 0x60) goto LAB_01186f86;
            if (uVar4 != 0x800) goto LAB_0118711b;
          }
          if ((*(int *)(param_1 + 0x858) == *(int *)(param_1 + 0x840)) &&
             (*(int *)(param_1 + 0x85c) == *(int *)(param_1 + 0x844))) {
            do {
              SetEvent(*(HANDLE *)(param_1 + 0x81c));
              SetEvent(*(HANDLE *)(param_1 + 0x818));
              ResetEvent(*(HANDLE *)(param_1 + 0x810));
              WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
              ResetEvent(*(HANDLE *)(param_1 + 0x810));
              uVar2 = *(uint *)(param_1 + 0x20);
              uVar4 = uVar2 & 0x60;
              if ((uVar2 & 0x800) != 0) {
                uVar4 = (uint)(byte)((byte)uVar4 | 0x20);
              }
              if ((uVar2 & 0x1000) != 0) {
                uVar4 = (uint)(byte)((byte)uVar4 | 0x40);
              }
            } while ((((*(int *)(param_1 + 0x620) != 0) && ((uVar4 & 0x40) == 0)) &&
                     ((uVar4 & 0x20) != 0)) &&
                    ((*(int *)(param_1 + 0x858) == *(int *)(param_1 + 0x840) &&
                     (*(int *)(param_1 + 0x85c) == *(int *)(param_1 + 0x844)))));
          }
          ResetEvent(*(HANDLE *)(param_1 + 0x81c));
        }
      }
      else {
        if (uVar4 == 0x4060) {
          ResetEvent(*(HANDLE *)(param_1 + 0x828));
          uVar2 = *(uint *)(param_1 + 0x20);
          while ((uVar2 & 0x4000) != 0) {
            SetEvent(*(HANDLE *)(param_1 + 0x828));
            ResetEvent(*(HANDLE *)(param_1 + 0x810));
            WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
            ResetEvent(*(HANDLE *)(param_1 + 0x810));
            if ((*(int *)(param_1 + 0x620) == 0) ||
               (uVar2 = *(uint *)(param_1 + 0x20), (uVar2 & 0x60) == 0)) break;
          }
        }
        else if (uVar4 == 0x80000000) {
          SetEvent(*(HANDLE *)(param_1 + 0x818));
          SetEvent(*(HANDLE *)(param_1 + 0x820));
          uVar2 = *(uint *)(param_1 + 0x20);
          while ((uVar2 & 0x80000000) != 0) {
            SetEvent(*(HANDLE *)(param_1 + 0x828));
            ResetEvent(*(HANDLE *)(param_1 + 0x810));
            WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
            ResetEvent(*(HANDLE *)(param_1 + 0x810));
            if (*(int *)(param_1 + 0x620) == 0) break;
            uVar2 = *(uint *)(param_1 + 0x20);
          }
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x7fffffff;
          goto LAB_01187178;
        }
LAB_0118711b:
        if ((*(byte *)(param_1 + 0x20) & 0x60) == 0) {
          do {
            SetEvent(*(HANDLE *)(param_1 + 0x828));
            ResetEvent(*(HANDLE *)(param_1 + 0x810));
            WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
            ResetEvent(*(HANDLE *)(param_1 + 0x810));
            uVar2 = *(uint *)(param_1 + 0x20);
            bVar3 = (byte)(uVar2 & 0x60);
            if ((uVar2 & 0x800) != 0) {
              bVar3 = bVar3 | 0x20;
            }
            if ((uVar2 & 0x1000) != 0) {
              bVar3 = bVar3 | 0x40;
            }
          } while (((*(int *)(param_1 + 0x620) != 0) && (bVar3 == 0)) && ((uVar2 & 0x60) == 0));
        }
      }
LAB_01187178:
      uVar2 = *(uint *)(param_1 + 0x20);
      bVar3 = (byte)uVar2 & 0x60;
      if ((uVar2 & 0x800) != 0) {
        bVar3 = bVar3 | 0x20;
      }
      if ((uVar2 & 0x1000) != 0) {
        bVar3 = bVar3 | 0x40;
      }
    } while ((*(int *)(param_1 + 0x620) != 0) && (bVar3 == 0));
    if (*(int *)(param_1 + 0x620) == 0) break;
    FUN_01186790();
    if ((*(uint *)(*(int *)(param_1 + 0x2c) + 8) & 0x80000000) == 0) {
      if (*(int *)(param_1 + 0x620) == 0) break;
      if ((*(int *)(param_1 + 0x844) <= *(int *)(param_1 + 0x85c)) &&
         ((*(int *)(param_1 + 0x844) < *(int *)(param_1 + 0x85c) ||
          (*(uint *)(param_1 + 0x840) <= *(uint *)(param_1 + 0x858))))) {
        ResetEvent(*(HANDLE *)(param_1 + 0x810));
      }
    }
    else {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80000000;
    }
    iVar1 = *(int *)(param_1 + 0x620);
  }
  ResetEvent(*(HANDLE *)(param_1 + 0x810));
  iVar1 = *(int *)(param_1 + 0x620);
  while (iVar1 != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
    iVar1 = *(int *)(param_1 + 0x620);
  }
  return 0;
}


