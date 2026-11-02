/* Module: sftrans1.dll
   Function: FUN_0053f820
   Address: 0053f820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0053f820(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    return 0x80004003;
  }
  piVar2 = (int *)piVar1[1];
  if ((piVar2 == (int *)0x0) && (*piVar1 == 0)) {
    return 0x80004003;
  }
  if (*(double *)(piVar1 + 10) <= _DAT_00555910) {
    return 0x80004005;
  }
  if ((((0 < piVar1[3]) && (0 < piVar1[2])) && (_DAT_00555910 <= *(double *)(piVar1 + 4))) &&
     ((_DAT_00555908 <= *(double *)(piVar1 + 6) && (_DAT_00555910 <= *(double *)(piVar1 + 8))))) {
    uVar3 = piVar1[0x11];
    cVar5 = (uVar3 & 1) != 0;
    if ((uVar3 & 2) != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if ((uVar3 & 4) != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (cVar5 == '\x01') {
      cVar5 = (uVar3 & 8) != 0;
      if ((uVar3 & 0x10) != 0) {
        cVar5 = cVar5 + '\x01';
      }
      if ((uVar3 & 0x20) != 0) {
        cVar5 = cVar5 + '\x01';
      }
      if (cVar5 == '\x01') {
        cVar5 = (uVar3 & 0x40) != 0;
        if ((uVar3 & 0x80) != 0) {
          cVar5 = cVar5 + '\x01';
        }
        if ((uVar3 & 0x100) != 0) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\x01') {
          cVar5 = (uVar3 & 0x200) != 0;
          if ((uVar3 & 0x400) != 0) {
            cVar5 = cVar5 + '\x01';
          }
          if ((uVar3 & 0x800) != 0) {
            cVar5 = cVar5 + '\x01';
          }
          if ((((cVar5 == '\x01') && (_DAT_00555910 <= *(double *)(piVar1 + 0x1e))) &&
              ((*(double *)(piVar1 + 0x1e) <= _DAT_00555908 &&
               (((iVar4 = piVar1[0x16], iVar4 == 0 || (iVar4 == 1)) || (iVar4 == 2)))))) &&
             (_DAT_00555910 < *(double *)(piVar1 + 0xc))) {
            if (*piVar1 == 0) {
              if (piVar2 != (int *)0x0) {
                if ((*piVar2 != 0) && (piVar2[1] != 0)) {
                  return 0x80070057;
                }
                if ((piVar2 != (int *)0x0) && (piVar2 == (int *)0xfffffff8)) {
                  return 0x80070057;
                }
              }
            }
            else if (piVar2 != (int *)0x0) {
              return 0x80070057;
            }
            iVar4 = piVar1[0x17];
            if ((((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) &&
                 (((iVar4 = piVar1[0x18], iVar4 == 0 || (iVar4 == 1)) || (iVar4 == 2)))) &&
                (((iVar4 = piVar1[0x19], iVar4 == 0 || (iVar4 == 1)) || (iVar4 == 2)))) &&
               (((iVar4 = piVar1[0x1a], iVar4 == 0 || (iVar4 == 1)) || (iVar4 == 2)))) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 0x80070057;
}


