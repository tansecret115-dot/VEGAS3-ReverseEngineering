/* Module: vegas30k.dll
   Function: FUN_011b9a50
   Address: 011b9a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b9a50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_4;
  
  iVar2 = -0x7fff0001;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = 1;
    local_4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = 1;
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + local_4 * 4);
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x228) != 0)) && (*(int *)(iVar1 + 0x22c) == 0)) {
          iVar3 = 4;
          bVar6 = true;
          piVar4 = (int *)(param_2 + 0x108);
          piVar5 = &DAT_011dab90;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
LAB_011b9adb:
            iVar3 = lstrcmpA((LPCSTR)(param_2 + 8),(LPCSTR)(iVar1 + 8));
            if ((iVar3 != 0) &&
               (iVar3 = lstrcmpA((LPCSTR)(param_2 + 0x118),(LPCSTR)(iVar1 + 0x118)), iVar3 != 0))
            goto LAB_011b9b16;
          }
          else {
            iVar3 = 4;
            bVar6 = true;
            piVar4 = (int *)(param_2 + 0x108);
            piVar5 = (int *)(iVar1 + 0x108);
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar6 = *piVar4 == *piVar5;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (bVar6);
            if (!bVar6) goto LAB_011b9adb;
          }
          iVar2 = 0;
          *(int *)(iVar1 + 0x228) = *(int *)(iVar1 + 0x228) + -1;
        }
LAB_011b9b16:
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(param_1 + 8));
    }
  }
  return iVar2;
}


