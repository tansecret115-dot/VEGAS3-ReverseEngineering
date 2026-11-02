/* Module: encn3260.dll
   Function: FUN_664d6510
   Address: 664d6510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664d6510(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  bVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if ((iVar2 != 0) && (pcVar3 = (char *)param_1[1], pcVar3 != (char *)0x0)) {
    if ((char *)param_1[2] == (char *)0x0) {
      param_1[5] = (int)pcVar3;
    }
    else {
      pcVar3 = strtok(pcVar3,(char *)param_1[2]);
      param_1[5] = (int)pcVar3;
    }
    do {
      if (param_1[5] == 0) break;
      iVar2 = (**(code **)(*param_1 + 4))(param_1[5]);
      if (iVar2 == 1) {
        bVar1 = true;
      }
      else if ((char *)param_1[2] == (char *)0x0) {
        param_1[5] = 0;
      }
      else {
        pcVar3 = strtok((char *)0x0,(char *)param_1[2]);
        param_1[5] = (int)pcVar3;
      }
    } while (!bVar1);
    if (bVar1) {
      param_1[7] = 1;
      iVar2 = FUN_664d65b0(param_1);
      return iVar2;
    }
  }
  return 0;
}


