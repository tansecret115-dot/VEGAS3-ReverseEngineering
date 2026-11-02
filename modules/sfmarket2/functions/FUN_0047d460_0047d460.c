/* Module: sfmarket2.dll
   Function: FUN_0047d460
   Address: 0047d460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d460(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  
  FUN_0047ce90(param_1,0xda);
  FUN_0047ceb0(param_1,*(int *)((int)param_1 + 0x111) * 2 + 6);
  FUN_0047ce50(param_1,(char)*(undefined4 *)((int)param_1 + 0x111));
  iVar5 = 0;
  if (0 < *(int *)((int)param_1 + 0x111)) {
    piVar4 = (int *)((int)param_1 + 0x115);
    do {
      puVar1 = (undefined4 *)*piVar4;
      FUN_0047ce50(param_1,(char)*puVar1);
      cVar3 = (char)puVar1[5];
      cVar6 = (char)puVar1[6];
      if ((char)param_1[0x41] != '\0') {
        cVar2 = cVar6;
        if (*(int *)((int)param_1 + 0x159) == 0) {
          cVar6 = '\0';
          if ((*(int *)((int)param_1 + 0x161) == 0) ||
             (cVar2 = '\0', *(char *)((int)param_1 + 0xe6) != '\0')) goto LAB_0047d4e0;
        }
        cVar6 = cVar2;
        cVar3 = '\0';
      }
LAB_0047d4e0:
      FUN_0047ce50(param_1,cVar3 * '\x10' + cVar6);
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)((int)param_1 + 0x111));
  }
  FUN_0047ce50(param_1,(char)*(undefined4 *)((int)param_1 + 0x159));
  FUN_0047ce50(param_1,(char)*(undefined4 *)((int)param_1 + 0x15d));
  FUN_0047ce50(param_1,(char)*(undefined4 *)((int)param_1 + 0x161) * '\x10' +
                       (char)*(undefined4 *)((int)param_1 + 0x165));
  return;
}


