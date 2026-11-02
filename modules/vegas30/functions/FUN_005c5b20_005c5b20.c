/* Module: vegas30.exe
   Function: FUN_005c5b20
   Address: 005c5b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 __thiscall FUN_005c5b20(undefined4 *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  int *piVar8;
  short *psVar9;
  bool bVar10;
  
  uVar3 = 0;
  if ((param_1[1] == param_2[1]) && (((param_2[2] ^ param_1[2]) & 1U) == 0)) {
    if ((param_1[2] & 1) != 0) {
      iVar4 = 6;
      bVar10 = true;
      piVar6 = param_1 + 3;
      piVar8 = param_2 + 3;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = *piVar6 == *piVar8;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        return 0;
      }
    }
    psVar7 = (short *)*param_1;
    if (psVar7 != (short *)0x0) {
      psVar9 = (short *)*param_2;
      if (psVar9 != (short *)0x0) {
        sVar1 = *psVar7;
        if ((sVar1 == 3) || (sVar1 == 1)) {
          iVar4 = 0x10;
        }
        else {
          iVar4 = (ushort)psVar7[8] + 0x12;
        }
        if ((*psVar9 == 3) || (*psVar9 == 1)) {
          iVar5 = 0x10;
        }
        else {
          iVar5 = (ushort)psVar9[8] + 0x12;
        }
        if (iVar4 == iVar5) {
          if ((sVar1 != 3) && (sVar1 != 1)) {
            iVar4 = (ushort)psVar7[8] + 0x12;
            do {
              if (iVar4 == 0) {
                return 1;
              }
              iVar4 = iVar4 + -1;
              sVar1 = *psVar9;
              sVar2 = *psVar7;
              psVar7 = (short *)((int)psVar7 + 1);
              psVar9 = (short *)((int)psVar9 + 1);
            } while ((char)sVar2 == (char)sVar1);
            return 0;
          }
          iVar4 = 0x10;
          do {
            if (iVar4 == 0) {
              return 1;
            }
            iVar4 = iVar4 + -1;
            sVar1 = *psVar9;
            sVar2 = *psVar7;
            psVar7 = (short *)((int)psVar7 + 1);
            psVar9 = (short *)((int)psVar9 + 1);
          } while ((char)sVar2 == (char)sVar1);
          return 0;
        }
      }
      if (psVar7 != (short *)0x0) {
        return 0;
      }
    }
    if (*param_2 == 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


