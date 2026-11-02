/* Module: wmfplug2.dll
   Function: FUN_00401da0
   Address: 00401da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401da0(int *param_1,int *param_2,int *param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_0047ab40;
  piVar4 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = &DAT_004851c8;
    piVar4 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_0047ac50;
      piVar4 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x0) {
          *param_2 = (int)(param_1 + 0x12);
          return 0;
        }
      }
      else {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = &DAT_0047ab30;
        piVar4 = param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 0x14);
            return 0;
          }
        }
        else {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = &DAT_0047ab20;
          piVar4 = param_2;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            (**(code **)(*param_1 + 4))(param_1);
            if (param_1 != (int *)0x0) {
              *param_2 = (int)(param_1 + 0x13);
              return 0;
            }
          }
          else {
            iVar2 = 4;
            bVar5 = true;
            piVar3 = &DAT_0047adf0;
            piVar4 = param_2;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar5 = *piVar3 == *piVar4;
              piVar3 = piVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (bVar5);
            if (bVar5) {
              (**(code **)(*param_1 + 4))(param_1);
              if (param_1 != (int *)0x0) {
                *param_2 = (int)(param_1 + 0x16);
                return 0;
              }
            }
            else {
              iVar2 = 4;
              bVar5 = true;
              piVar3 = &DAT_0047ac80;
              piVar4 = param_2;
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar5 = *piVar3 == *piVar4;
                piVar3 = piVar3 + 1;
                piVar4 = piVar4 + 1;
              } while (bVar5);
              if (!bVar5) {
                if (param_1[0x17] == 0) {
                  iVar2 = 4;
                  bVar5 = true;
                  piVar3 = &DAT_0047ae10;
                  do {
                    if (iVar2 == 0) break;
                    iVar2 = iVar2 + -1;
                    bVar5 = *piVar3 == *param_2;
                    piVar3 = piVar3 + 1;
                    param_2 = param_2 + 1;
                  } while (bVar5);
                  if (bVar5) {
                    hMem = GlobalAlloc(0x40,0xc);
                    puVar1 = GlobalLock(hMem);
                    if ((puVar1 != (undefined4 *)0x0) && (iVar2 = FUN_00409180(puVar1), iVar2 != 0))
                    {
                      *param_3 = iVar2;
                      return 0;
                    }
                  }
                }
                return -0x7fffbffe;
              }
              iVar2 = FUN_00401d20((int)param_1);
              if (iVar2 < 0) {
                return iVar2;
              }
              (**(code **)(*param_1 + 4))(param_1);
              if (param_1 != (int *)0x0) {
                *param_2 = (int)(param_1 + 0x15);
                return 0;
              }
            }
          }
        }
      }
      *param_2 = 0;
      return 0;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = (int)param_1;
  return 0;
}


