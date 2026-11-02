/* Module: oggplug.dll
   Function: FUN_00401860
   Address: 00401860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401860(int *param_1,int *param_2,int *param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_00446a70;
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
    piVar3 = &DAT_0044d840;
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
      piVar3 = &DAT_00446d30;
      piVar4 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        hMem = GlobalAlloc(0x40,0xc);
        puVar1 = GlobalLock(hMem);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = FUN_00407160(puVar1);
          if (iVar2 != 0) {
            *param_3 = iVar2;
            return 0;
          }
        }
      }
      else {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = &DAT_00446d10;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *param_2;
          piVar3 = piVar3 + 1;
          param_2 = param_2 + 1;
        } while (bVar5);
        if (bVar5) {
          if (param_1 != (int *)0x0) {
            piVar3 = param_1 + 1;
            *param_3 = (int)piVar3;
            (**(code **)(*piVar3 + 4))(piVar3);
            return 0;
          }
          *param_3 = 0;
          (**(code **)(iRam00000000 + 4))(0);
          return 0;
        }
      }
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = (int)param_1;
  return 0;
}


