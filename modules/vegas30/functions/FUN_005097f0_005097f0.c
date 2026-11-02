/* Module: vegas30.exe
   Function: FUN_005097f0
   Address: 005097f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005097f0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 0;
  if (param_2 == 0) {
    piVar2 = DAT_0064b468;
    if (DAT_0064b468 != (int *)0x0) {
      do {
        if (piVar2[1] == 4) {
          iVar3 = 4;
          bVar6 = true;
          piVar4 = piVar2 + 4;
          piVar5 = param_1;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            return piVar2;
          }
        }
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
      } while( true );
    }
  }
  else {
    if (DAT_0064b464 == (int *)0x0) {
      return (int *)0x0;
    }
    if (0 < *DAT_0064b464) {
      piVar2 = (int *)DAT_0064b464[2];
      do {
        iVar1 = 4;
        bVar6 = true;
        piVar4 = piVar2;
        piVar5 = param_1;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return piVar2;
        }
        iVar3 = iVar3 + 1;
        piVar2 = (int *)((int)piVar2 + DAT_0064b464[1]);
        if (*DAT_0064b464 <= iVar3) {
          return (int *)0x0;
        }
      } while( true );
    }
  }
  return (int *)0x0;
}


