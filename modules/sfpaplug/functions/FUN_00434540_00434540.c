/* Module: sfpaplug.dll
   Function: FUN_00434540
   Address: 00434540
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00434540(int *param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  
  bVar7 = false;
  if (*param_1 <= param_2) {
    param_2 = *param_1;
  }
  if (param_2 < 1) {
    return false;
  }
  puVar3 = (undefined4 *)param_1[2];
  do {
    piVar1 = (int *)*puVar3;
    if (piVar1 != (int *)0x0) {
      if (param_5 != 0) {
        iVar2 = 4;
        bVar6 = true;
        piVar5 = param_3;
        piVar4 = piVar1;
        do {
          piVar4 = piVar4 + 1;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (!bVar6) goto switchD_004345b8_caseD_11;
      }
      iVar2 = 5;
      bVar6 = true;
      piVar4 = piVar1 + 1;
      piVar5 = param_3;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (short)*piVar4 == (short)*piVar5;
        piVar4 = (int *)((int)piVar4 + 2);
        piVar5 = (int *)((int)piVar5 + 2);
      } while (bVar6);
      if (bVar6) {
        switch(param_4) {
        case 0x10:
          iVar2 = piVar1[0x9a];
          break;
        default:
          goto switchD_004345b8_caseD_11;
        case 0x20:
          iVar2 = piVar1[0xa9];
          break;
        case 0x40:
          iVar2 = piVar1[0xb8];
          break;
        case 0x100:
          iVar2 = piVar1[199];
        }
        bVar7 = iVar2 != 2;
      }
    }
switchD_004345b8_caseD_11:
    puVar3 = puVar3 + 1;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return bVar7;
    }
  } while( true );
}


